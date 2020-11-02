#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

/*pid_t getpid(void); // pid_t is opaque Data type because we don't know the datatype is of which type 

pid_t getpid(){

}*/ 

int main(int argc, char const *argv[])
{
    pid_t id;
    pid_t parent_id; 

    id = getpid();
    parent_id = getppid();
    printf(" PID : %d",id);
    printf(" PPID : %d",parent_id); 
    return 0;
}
