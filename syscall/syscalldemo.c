#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<unistd.h>

int main(int argc, char const *argv[])
{
    int fd ;
    fd = open("os.txt",O_WRONLY | O_CREAT);
    if (fd == -1){
        perror("Error in Open \n");
        return -1;
    }
    write(fd,"CDAC",4);
    close(fd);
    
}