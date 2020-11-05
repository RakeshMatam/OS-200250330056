#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

pthread_mutex_t count_mutex;
pthread_mutexattr_t count_mutex_attr;

int count =0;// Global Resource

void *inc_thread(void *arg)
{   
    while (1)
    {
        pthread_mutex_lock(&count_mutex);//lock
        count++;//inc the global variable// Critical section area
        printf("Count after incrementing : %d \n",count);
        pthread_mutex_unlock(&count_mutex);//unlock
        // Why unlock after printf ..?? Ans :printf also using the count global variable
    }   
}

void *dec_thread(void *arg)
{
    while (1)
    {
        pthread_mutex_lock(&count_mutex);//lock
        count--;// dec the global variable// critical section area
        printf("Count after decrementing : %d \n",count);
        pthread_mutex_unlock(&count_mutex);//unlock 
        // Why unlock after printf ..?? Ans :printf also using the count global variable
    }
}

int main(int argc, char const *argv[])
{
    pthread_t tid_inc,tid_dec; // opaque data type
    pthread_mutexattr_init(&count_mutex_attr);

    printf("Before thread Creation\n");

    pthread_mutex_init(&count_mutex,&count_mutex_attr);
    printf("Mutex Initiated\n");

    pthread_create(&tid_inc,NULL,inc_thread,NULL);
    pthread_create(&tid_dec,NULL,dec_thread,NULL);
    printf("Threads Created after initiating mutex\n");
    pthread_join(tid_inc,NULL);
    pthread_join(tid_dec,NULL);

    printf(" After the Critical Section\n ");
    pthread_mutex_destroy(&count_mutex);
    pthread_mutexattr_destroy(&count_mutex_attr);
    
    return 0;
}   