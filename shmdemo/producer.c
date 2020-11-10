#include<stdio.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>

int *count;
int input;

int main(int argc, char const *argv[])
{   
    int shm_fd;

    shm_fd = shm_open("/cdacshm", O_RDWR |O_CREAT, S_IRUSR | S_IWUSR );
    //truncating
    ftruncate(shm_fd,sizeof(int));
    // memory mapping
    count = (int*) mmap(NULL,sizeof(int),PROT_READ |PROT_WRITE,MAP_SHARED,shm_fd,0); 

    while (1)
    {
       scanf("%d",&input);
       *count = input;
    }
    
    shm_unlink("/cdacshm");
    return 0;
}