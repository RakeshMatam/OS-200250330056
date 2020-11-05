#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

/*
int arr[10];
&arr[0] = arr; 
*/

void *thread(void *arg){
    printf("Thread \n");
}
int main(int argc, char const *argv[])
{
    pthread_t tid; // opaque data type
    printf("Before thread Creation\n");
    pthread_create(&tid,NULL,thread,NULL);
    /*printf("After Thread Creation\n");
    sleep(1);
    printf("After Sleep Creation\n");*/
    
    return 0;
}   
