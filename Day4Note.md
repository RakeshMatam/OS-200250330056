**********************************************Operating Systems ******************************************
Day 4 :
----------------------------------------------------------------------------------------------------------
* Systemcalls 
* man open 
* man -K open
* int open(const char *pathname, int flags);
* The  argument  flags  must  include one of the following access modes: O_RDONLY, O_WRONLY, or O_RDWR These request opening the file read-only, write-only, or read/write, respectively. 
* RETURN VALUE :
    * open(), openat(), and creat() return the new file descriptor, or -1 if an error occurred (in which case, errno is set appropriately).
* O_CREATE
* man 2 write
* ssize_t write(int fd, const void *buf, size_t count);
*  RETURN VALUE :
    * On success, the number of bytes written is returned.  
    * On error, -1 is returned, and errno is set to indicate the cause of the error.
* strace ./syscalldemo 
* fd = open("os.txt",O_WRONLY | O_CREAT);
* ltrace
* strace
* Assignment : 
Q : Program using a system call (Write a String inside a file)