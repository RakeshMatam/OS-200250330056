#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
// receiver file

int main(int argc, char const *argv[])
{
    int fd;
    unsigned char rbuff[128];
    fd = open("desd",O_RDONLY);
    read(fd,rbuff,128);
    printf("Data Recieved from the Sender :%s\n",rbuff);
    close(fd);
    return 0;
}
