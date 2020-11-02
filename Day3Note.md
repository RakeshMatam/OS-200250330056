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
        * 