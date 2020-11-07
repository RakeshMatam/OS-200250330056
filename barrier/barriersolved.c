#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

pthread_barrier_t barr;

void *serial(void *arg){
    
    printf("Serial port Initialization Started \n");
    sleep(2);
    printf("Serial port Initialized \n");
    pthread_barrier_wait(&barr);
    printf("Serial port : Started  \n");
}

void *ethernet(void *arg){
    
    printf("Ethernet Initialization Started \n");
    sleep(10);
    printf("Ethernet Initialized \n");
    pthread_barrier_wait(&barr);
    printf("Ethernet : Started \n");
}

void *lcd(void *arg){
    
    printf("LCD : Initialization Started \n");
    sleep(7);
    printf("LCD : Initialized \n");
    pthread_barrier_wait(&barr);
    printf("LCD: Started \n");
}

void *ADC (void *arg){
    
    printf("ADC : Initialization Started \n");
    sleep(4);
    printf("ADC : Initialized \n");
    pthread_barrier_wait(&barr);
    printf("ADC : Started \n");
}

int main(int argc, char const *argv[])
{
    pthread_t s,e,l,a;
    // Initializing the pthread
    pthread_barrier_init(&barr,NULL,4);
    // creating a pthread 
    pthread_create(&s,NULL,serial,NULL);        
    pthread_create(&e,NULL,ethernet,NULL);
    pthread_create(&l,NULL,lcd,NULL);
    pthread_create(&a,NULL,ADC,NULL);
    // joining the pthread
    pthread_join(s,NULL);
    pthread_join(e,NULL);
    pthread_join(l,NULL);
    pthread_join(a,NULL);
    // destroying the pthread
    pthread_barrier_destroy(&barr);
    return 0;
}
