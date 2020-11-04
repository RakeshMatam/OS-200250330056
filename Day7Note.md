*********************************Operating Systems*******************************************************
Day 7 :
----------------------------------------------------------------------------------------------------------
1. Batch : 
----------------------------------------------------------------------------------------------------------
* Very Old
* in this system we can only one pogram at a time 
    eg : Suppose we have two programs to execute let us say (p1(.c) and p2(.java) are the two Programs) in such case what would happen is that the system allows only one program to be loaded which may take longer time execution.
* so , to overcome the above from problem Instead of giving only one (.c) file we will give a batch of (.c) files.
----------------------------------------------------------------------------------------------------------
2. Multi programming :
----------------------------------------------------------------------------------------------------------
* Here we can have multiple programs execute 
* We dont have to create a batch files 
* it is efficient when compared to Batch 
* Execution : 
    eg : Suppose we have two programs to execute let us say (p1(.c) and p2(.java) are the two Programs) in such case what would happen is that first p1 program will starts its execution till the p1 does it I/O operation. So, whenever a process asks for input /output at that particular instance  you are going to stop the execution of the process p1 and process p2 starts its Execution (means switching from process p1 to process p2) untill the p2 as much as time it wants. So, what has happened in this this systems is that p1 is Starving and has got no Resources.
* Disadvantage : the processes may go into starving state 
----------------------------------------------------------------------------------------------------------
3. Multi Tasking :
----------------------------------------------------------------------------------------------------------
* It is an Extension to Multi programming 
* In the Literature whenever you come acoss the words "Task" and "Process" (These are Interchangablely used).
* Essentially Most of Embedded RTOS's are Task "based" while the Desktop kind of OS's are "Process" Based.
* here, you still have the multiple programs in the memory like in multiprogramming but the thing aditionally happens is that "time sharing" happens between the processes. 
* Starving probelm is solved here.
* Response time in Multitasking has been improved when compared to Multiprogramming. 
----------------------------------------------------------------------------------------------------------
4. Multi processing :
----------------------------------------------------------------------------------------------------------
* As the name indicates Multiple Processes which leads to True Parallelism with respect to time. 
* here we have two or more CPU's which are capable of executing multiple processes simultaneously. 
* eg : Suppose we have two Processes and two CPU's to execute let us say (p1(.c) and p2(.java) are the two Processes & CPU1 and CPU2 Respectively ) in such case what would happen is that 
    * p1 -> Scheduled to CPU1 with respect to time
    * p2 -> Scheduled to CPU2 with respect to time 
* Advantages :
    * "N" no of CPU's are used 
    * They run in Ture parallelism
----------------------------------------------------------------------------------------------------------
5. Multiuser:
----------------------------------------------------------------------------------------------------------
* We can switch to Multiple users and can perform.
* On the same Operating system we can have multiple users logged in and can invoke thier own applications.
----------------------------------------------------------------------------------------------------------
6. Multithreading :
----------------------------------------------------------------------------------------------------------
* process :- process is Executing on the CPU as a Single Thread for a given instance of time.
* Threads : Inside the process itself we have devided it into two or more flows of Excecution. these flows are called as threads which leads to pseudo parallelism.
----------------------------------------------------------------------------------------------------------
* Note : Context is saved in Stack or PCB (Process Control Block)
----------------------------------------------------------------------------------------------------------
* PCB (Process Control Block):
----------------------------------------------------------------------------------------------------------
* It can hold the information of a Process.
* What kind of Information(pid ,ppid ,memory info, opened files,priority,process states) -> Data Stuctures
----------------------------------------------------------------------------------------------------------
* Design Principles/Approaches of OS :
----------------------------------------------------------------------------------------------------------
* 1. Monolithic Kernel Approach :
    * eg : Linux,freeRTOS
    * Single address space 
    * Sharing of information easy -> in same address space
* 2. Micro kernel Approach:
    * eg : QNX, Minix ..etc.,
    * Multiple address space 
        * System Processes -> Priviledged eg. Networking stack, DD
        * User Processes -> Non-Priv -> MP3 player, Editor
            * Message Queues used for information sharing
----------------------------------------------------------------------------------------------------------
Q : Debate Linus Torvalds and Tannenbaum
----------------------------------------------------------------------------------------------------------