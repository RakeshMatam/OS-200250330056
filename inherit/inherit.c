#include<stdio.h>
#include<unistd.h>

int main(int argc, char const *argv[])
{
    pid_t id;
    id = fork();
    if (id == 0)
    {
        //child
        printf("Child Starting \n");
        sleep(12);
        printf("Child Exiting \n");
    }
    else
    {
        //parent    
        printf("Parent Starting \n");
        sleep(2);
        printf("Parent Exiting \n");
    }
    
    return 0;
}