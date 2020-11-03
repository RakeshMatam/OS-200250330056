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

