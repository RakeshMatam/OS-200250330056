#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

int count = 0; // these global variable allocated in .data segment

int main(int argc, char const *argv[])
{
    pid_t id;
    
    id = fork();
    printf("After the fork \n");
    if(0 == id)
    { 
        // child process
        //printf("In Child : PID :%d \t PPID :%d \n", getpid(),getppid());
        printf("Count in Child : %d \n",count);
    }
    else 
    { 
        //parent process
        count++;
        //printf("In Parent : PID : %d\t PPID :%d\t \n", getpid(),getppid());
        printf("Count in Parent : %d \n",count);
    }
    return 0;
}