#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

int count = 0;
pthread_rwlock_t count_rwlock;

void *thread1(void *data)
{
    pthread_rwlock_wrlock(&count_rwlock);
    count++;
    pthread_rwlock_unlock(&count_rwlock);
}

void *thread2(void *data)
{
    printf("T2 : Getting inside the Critical Section\n");
    pthread_rwlock_rdlock(&count_rwlock);
    printf("T2 : Count : %d\n",count);
    sleep(1);
    pthread_rwlock_unlock(&count_rwlock);
    printf("T2 : Out of the Critical Section\n");
}

void *thread3(void *data)
{
    printf("T3 : Getting inside the Critical Section\n");
    pthread_rwlock_rdlock(&count_rwlock);
    printf("T3 : Count : %d\n",count);
    pthread_rwlock_unlock(&count_rwlock);
    printf("T3 : Out of the Critical Section\n");
}

void *thread4(void *data)
{
    printf("T4 : Getting inside the Critical Section\n");
    pthread_rwlock_rdlock(&count_rwlock);
    printf("T4 : Count : %d\n",count);
    pthread_rwlock_unlock(&count_rwlock);
    printf("T4: Out of the Critical Section\n");
}

int main(int argc, char const *argv[])
{
    pthread_t tid1,tid2,tid3,tid4;

    pthread_rwlock_init(&count_rwlock,NULL);
    pthread_create(&tid1,NULL,thread1,NULL);
    pthread_create(&tid2,NULL,thread2,NULL);
    pthread_create(&tid4,NULL,thread3,NULL);
    pthread_create(&tid1,NULL,thread4,NULL);
    pthread_join(tid1,NULL);
    pthread_join(tid2,NULL);
    pthread_join(tid3,NULL);
    pthread_join(tid4,NULL);

    pthread_rwlock_destroy(&count_rwlock);
    return 0;
}
