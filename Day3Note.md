***********************************Operating Systems ****************************************************
Day 3 :
---------------------------------------------------------------------------------------------------------
* Operating System :
    * As we discussed previously about the 3 components (CPU,Memory,I/O)
    * When we talk about functionality to have multiple funtionalities to be executed on the above 3 platfoms (CPU,Memory,I/O) there should be some intelligence like OS
    * eg: Physical class room 
        1. CPU
        2. Memoy
        3. I/O
    * When we talk about the program it requires address space. So, when you execute this program it will first loads into the memory and from the memory it will be fetched by the CPU and get some data and Operate on it.
* Definition of OS : OS is a Priviliged Program which manages efficiently the following Resources :
    * 1. Process Management -> CPU
    * 2. Memory Management -> Memory
    * 3. I/O Management -> I/O (Device Divers will take care of Managing I/O)
    * GUI (Optional Case) - These are additional Components
    * Network - additional Component
* Process Management / Process Functionality :
    * In OS, Every Process have unique Identity so that the OS can manage and that unique Identity will give the much more information about the process 
    * When the Program executes The OS functionality is to allocate the junk of memory for the program to be loaded and Execute 
    * Os should also give some Unique identity for Every Process 
    * for accessing the processid (pid)
        * ps
        * Life cycle of process (Process -> created -> executes -> exits) 
        * ps -el => gives the entire list of processes with pid , ppid 
        * ps -el | grep processname
    * In Linux, the whole process funtionality is Tree like Structure i.e., One process is the parent for other Processes   
    * init -> it is first process which is created in any linux system 
    * in some cases it may vary to process like "systemd"
    * ppid => parent process id 
    * Apart from this it is also important to maintain which user is maintaining which process.
    * So, this user information can be achieved through "uid" -> unique identifier for the user 
    * whoami / from the user side
    * id / from the os side 
    * "uid" = 0 is the root user id 
    * for API's there are some manual pages so, use the command "man"
        * man -k pid 
        * getpid (2) -> get process identification (man 2 getpid)
        * getppid (2) -> get parent process identification (man 2 getppid)
    * pid_t is opaque Data type because we don't know the datatype is of which type.(int,float,double..etc.,).
    * pid is diferent and ppid is same 
    * ./Executable eg : ./pid
    * Question : How to Create a our own new process Programatically ..??
        * fork => create a child process
        * fork() => creates a new process by duplicating the calling process.  The new process is referred to as the child process.  The calling process is referred to as the parent process.
        * RETURN VALUE :
            1. On success, the PID of the child process is returned in the parent, and 0 is returned in the child.  
            2. On failure, -1 is returned in the parent, no child process is created, and errno is set appropriately.
        * eg : Web server : it will serves you html pages for c1, c2, c3 ...cn clients 
                * when this clients bombard the web server a fork() is called so that a new process is created for every client i.,e p1(process1) -> c1(Client1) ......pn(Process n) -> cn(Client n).
        * parent and child relationship
        * parent and child have their own address space (text, data, bss, stack and heap)
    * Context Switching : 
        * Switching of one process p1 to another process p2 and loading p2 process into CPU 
    * Pseudo Parallelism :
        *
    * True Parallelism :
        * 
    * In OS the Address space (junk of memory)is divided into two halfs 
        * 1. Kernel Space :
                * (Contains .txt, .data, .bss, heap ,stack) - Priviliged Address Space
        * 2. User Space : 
                * (Contains Multiple Processes and Applications)- Its a Non-priviliged Address Space
                * Each and Every Process and application has its own Address Space
    * OS is also a Priviliged program loads by the bootloader in Memory . Boot loader loads all the sections of Kernel . OS is also stored in ELF Format.
    ------------------------------------------------------------------------------------------------------
* Introduction to System Calls and Library Calls :
    * When ever a Application or a Pocess is executed From User Space the data has been transfered to the Kernel Space and from the Kernel Space with the help of Device Drivers it has been transfered to the Hardware (eg : Display).
    * Note : From the User space the Data does not directly transfered to the Hardware. It always has to make a Request to the OS and OS will Respond to the Request and give access.
    * This Request or the Interface between the User Space and Kernel space is can be implemented Using System Calls.
    * System calls are the API Calls which allows the User space to talk to the Kernel space.
    * There are 4 major System calls (foundation system calls)which are widely used 
        * 1. open()
        * 2. read()
        * 3. write()
        * 4. close()
    * Note : Everything in Unix is Treated as a file (Normal files also as a file and Evey Hardware also as a file)
        * eg : Hard disk 
    * Library calls will only execute in the userspace 
    * Kernel vs OS ..??