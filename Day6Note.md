******************************Operating systems**********************************
Day 6:
----------------------------------------------------------------------------------------------------------
* Inter Process Communication(IPC)
----------------------------------------------------------------------------------------------------------
* In Inter Process Communication it allows the process p1 to talk to the process p2.
* Creating a communication between two or more processors.
* By default the OS will have the protection mechanism which would allow you to manage the Memory using the Memory Management Functionality.
* Note : We can not directly access the memory or Address space from one process to another process.
----------------------------------------------------------------------------------------------------------
* How do We achieve the IPC ?
----------------------------------------------------------------------------------------------------------
* Pipes : (Mechanism)
    * Pipes is nothing but where you can put the data from one end (Writing End) and Recieve that data from the other end(Reading end).
    * The important feature of the pipes are :
        * It is Unidirectional.
        * They will work only in between the Related Processes (eg : fork processes).
    * for using pipes we need to create fork so that the pipes can be used in between the parent and chiled processes which are related to each other 
    * man pipe 
    * Pipes
        * IPC
        * Unidirectional
        * Related processes (Parent and Child)
        * pipe -> two integers (file descriptors)
        * 0 -> Reading
        * 1 -> Writing
        * Child will inherit file descriptors
----------------------------------------------------------------------------------------------------------
* FIFO's : (Mechanism)
    * This mechanism can be used in between non Related Processes.
    * mkfifo --help
    * Creating a fifo (mkfifo -m0600 nameoffifo ) -> first "0" indicates that it is a Octal value
    * Removing a fifo (rm -rf 0600 nameoffifo)
    * ls -al(to check)
    * (eg : prw-------  1 rakesh-ubuntu rakesh-ubuntu    0 Nov  3 20:24 desd) -> "p" indicates pipe
    * man 2 open
    * man read , man write ,man close (for manual)
    * man 2 mkfifo , man 3 mkfifo
    * cp -r fifo fifofunc -> 
* FIFOs : (also popularly calles as Named Pipes)
    * IPC
    * Unidirectional
    * Unrelated processes
    * fifos aka (are also called as)named pipes.
    * mkfifo (command and API)
----------------------------------------------------------------------------------------------------------
Note : Whenever you want a Bi-directional Communication you need a 2 pipes to created (eg: p1->p2 & p1 <-p2) and Parent and child each will have 4 file descriptors (fd's)
Note 1 : We can Programatically Create a pipe using mkfifo function (system call)
----------------------------------------------------------------------------------------------------------Assignment :
----------------------------------------------------------------------------------------------------------* Write a program which does the following:
    * P1: Get two integer inputs
    * P1: Send it to P2
    * P2: Recv two integers 
    * P2: Add two integers
    * P2: Send to P1
    * P1: Print the result
---------------------------------------------------------------------------------------------------------- 