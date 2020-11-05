#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

void *serial_config_thread(void *arg){
    printf("Thread \n");
}

struct serial_config{
    //baud rate
    //data bits
    //parity
};

int main(int argc, char const *argv[])
{
    struct serial_config s1,s2,s3,s4;
    pthread_t tid; // opaque data type
    printf("Before thread Creation\n");
    pthread_create(&tid,NULL,serial_config_thread,s1);
    pthread_create(&tid,NULL,serial_config_thread,s2);
    pthread_create(&tid,NULL,serial_config_thread,s3);
    pthread_create(&tid,NULL,serial_config_thread,s4);
    
    return 0;
}   