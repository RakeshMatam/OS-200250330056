#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

int count = 0; //global variable 

int add (int a ,int b)
{
    return a+b; 
}

void *thread(void *arg)
{
    //int data =10;//local variable
    add(10,20);
    count++;
    printf("Thread \n");
}

int main(int argc, char const *argv[])
{
    pthread_t tid; // opaque data type
    add(40,50);// called behalf of the Main thread 
    count++;
    printf("Before thread Creation\n");
    pthread_create(&tid,NULL,thread,NULL);
    //printf("Date : %d \n",data);// we can access the data which is local to thread
    
    return 0;
}   