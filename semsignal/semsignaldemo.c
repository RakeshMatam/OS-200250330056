#include<stdio.h>
#include<semaphore.h>
#include<pthread.h>

int a, b, sum;

sem_t s1,s2;

void* input_thread(void *data)
{
    while(1)
    {
        printf("T1 : Got Signal from the Processing Thread\n");
        sem_wait(&s2);
        printf("T1 : Getting the New Inputs \n");
        scanf("%d",&a);
        scanf("%d",&b);
        printf("T1 : Got the New Inputs \n");
        sem_post(&s1);
        printf("T1 : Sending Signal to Processing Thread \n");
    }
}

void* processing_thread(void *data)
{
    while (1)
    {
        printf("T2 :Got Signal from the Input Thread \n");
        sem_wait(&s1);
        printf("T2 : Started Processing \n");
        sum = a+b;
        printf("T2 : Processing Done Sum : %d \n",sum);
        sem_post(&s2);
        printf("T2: Sending Signal to Input Thread\n");
    }
    

}
int main(int argc, char const *argv[])
{
    pthread_t input_id, processing_id;
    sem_init(&s1,0,1);  
    sem_init(&s2,0,0);
    pthread_create(&input_id,NULL,input_thread,NULL);
    pthread_create(&processing_id,NULL,processing_thread,NULL);
    pthread_join(input_id, NULL);
    pthread_join(processing_id, NULL);
    return 0;
}
