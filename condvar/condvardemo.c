#include<stdio.h>
#include<pthread.h>

int flag = 0;   
pthread_mutex_t m1;
pthread_cond_t cv1;

void *Thread_1(void *data)
{
    printf("T1 : Grabbing Mutex \n");
    pthread_mutex_lock(&m1);
    printf(" Before BL\n");
    while (flag != 1)
    {
        printf("T1 : Entering Conditional wait \n");
        pthread_cond_wait(&cv1,&m1);
        printf("T1: Exiting Conditional wait \n");
    }
    printf("After BL \n");
    pthread_mutex_unlock(&m1);
    printf("T1 : Releasing Mutex \n");
}

void *Thread_2(void *data)
{
    printf("T2 : Grabbing Mutex \n");
    pthread_mutex_lock(&m1);
    printf("Before setting flag \n");
    flag = 1;
    printf(" After Setting flag \n");
    pthread_mutex_unlock(&m1);
    printf("T2 : Releasing Mutex \n");
    pthread_cond_signal(&cv1);
    printf("T2 : Conditional Signalling \n");
}

int main(int argc, char const *argv[])
{
    pthread_t t1,t2;
    pthread_mutex_init(&m1,NULL);
    pthread_cond_init(&cv1,NULL);
    pthread_create(&t1,NULL,Thread_1,NULL);
    pthread_create(&t2,NULL,Thread_2,NULL);    
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    pthread_mutex_destroy(&m1);
    pthread_cond_signal(&cv1);
    return 0;
}
