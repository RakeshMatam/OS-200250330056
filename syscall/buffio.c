#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main(int argc, char const *argv[])
{
    printf("Hello");
    
}

// when no "\n" given the system called write function only once as per the above code
// When "\n" given for two printf statements they the write function is called two times 
// use "strace ./buffio " - to check the responce