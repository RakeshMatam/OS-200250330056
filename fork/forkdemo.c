#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    pid_t id;
    printf("Before the fork \n");
    id = fork();
    if(0 == id)
    { 
        // child process
        printf("In Child : PID :%d \t PPID :%d \n", getpid(),getppid());
    }
    else 
    { 
        //parent process
        printf("In Parent : PID : %d\t PPID :%d\t \n", getpid(),getppid());
    }
    return 0;
}
