****************************** Operating Systems ************************************************
Day 5:
-------------------------------------------------------------------------------------------------
* Library
    * User space
    * May be buffered I/O
    * Formatted I/O
* System
    * Kernel space
    * Not buffered I/O
    * No formatted I/O (format specifier)

* open - O_CREAT
* int - file descriptor -
    * fd - represents an open file in the kernel
    * there are by default 3 file desciptor
        * 0 -> standard input
        * 1 -> standard output
        * 2 -> standard error
* Note : Whenever there is a file descriptor of Integer(int) in the user space, in the kernel space space it would relate it to a file structure which has the lot of infomation about the file
--------------------------------------------------------------------------------------------------------
* Fork Sharing :
--------------------------------------------------------------------------------------------------------
* Whenever a fork is called it creates a Child process and also the address space is replicated as it is of the parent process furthur parent and child executes on there own Respectively 
    * fork -> child -> sleep(1) -> so when the child is Sleep the parent process will get execution (Parent -> count++ ,and printing the Count value)-> after a sleep is completed the child process will get executed and prints the value of count.
    * In fork parent and child have their own address space (text, data, bss, stack and heap).
---------------------------------------------------------------------------------------------------------
* Process States :
---------------------------------------------------------------------------------------------------------
* 1. Create -> 
        * Creating a new process. So, when you create a process OS allocates Resources(Address space) for a process.
* 2. Ready -> 
        * Process is now in Ready to Execute.   
* 3. Running -> 
        * From the Ready State make the process to go into Running State 
        * There can be "n" no of processes in Ready State but, there would be only one process which would be there in the Running State.(in case of uni processing system)
        * A Running process can go into a Ready State while the another process is coming in to the Running State 
* 4. Waiting -> 
        * When the process is Running State it would ask the user to provide the input for that process 
        * eg : scanf() function
        * at this point of time the Running process will go in to the State called waiting State.
        * so, now when the user provides the input the process in the waiting state cant go directly into the Running state where as it  has to in (waiting -> ready -> Running) way.
* 5. Destroy -> 
        * In this State Whatever the Resources given to a Process when it is Created will be deallocated.
        * When can a Process go into the Destroy State:
            * Case 1 : When the process finished its Execution.
            * Case 2 : (Waiting -> Destroy) 
                * eg : Control +C (Exit or kill command to a Process)
            * Case 3 : (Ready -> Destroy)
                * A process which is there in the Ready State , By using either the identity (pid) or the process name of that process through "kill" command we can Destroy a process.
            * case 4 : (Running -> Destroy)
                * eg : When the user Provides the Invalid input the process will go into (wait -> ready -> Running -> Destroy). 
----------------------------------------------------------------------------------------------------------
* Scheduling algorithm -> Choose the next process that has to execute 
* Context Switching : Switching the Context from one process p1 to another process p2
* CPU -> 1. PC -> points to the next instruction 
         2. SP -> points to top of the Stack
         3. GPR
         4. Flags 
* Context -> PC, SP, GPR, Flags => are knowns as Hardware Registers ->(in Uni processing system it has only one copy of all this Registers)
* Before the context switch the OS will do the context saving(Cs) and keep it as a Logical copy in CPU from the physical copy of one particular process.
* process p1 Context switching(CS) -> Run the Scheduling algorithms to choose which is the next process to execute -> process p2 Context Restoring (CR).
* Context switch -> Context Saving (Current process) + Scheduling (Choose the new process) + Context Restoring (New Process)
* CS(Context switching) = Cs(Context saving) + CR(Context Restoring)
----------------------------------------------------------------------------------------------------------
* Blocking Calls : Blocking calls are calls where the API's can put the process into Waiting State
            * eg : scanf , strcpy 
            * Process may go into a waiting state
* non-Blocking Calls :
            * eg : printf
            * never block -> immediately return back after doing functionality