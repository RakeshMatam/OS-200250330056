*************************************Operating Systems*******************************************
Day 10:
----------------------------------------------------------------------------------------------------------
* Process Management :
    * Process (forks) -> POSIX threads 
    * parent and Child Relationship
    * Two Components in Process Management
        * Synchronzation.(Resources -> Shared Resources -> Race Condition -> Mutual Exclusion)
            * ME (Mutual Exclusion) -> (Mutex (Futex,Recurrsive Mutex ,Adaptive Mutex ,Error Cheching Mutex) , ME Semaphores)
        * Inter Process Communication.(IPC) : (FIFO's & Pipes)
----------------------------------------------------------------------------------------------------------
* Signalling Semaphores : Synchronize the flow 
----------------------------------------------------------------------------------------------------------
* Signalling -> initial value -> 0/1
    * Counting
        * initial -> N 
----------------------------------------------------------------------------------------------------------
* Counting Semaphores (Resource Management Semaphore) : 
    * 
* Zombie Processes :
    * This Zombie State exists when the Child Exits before the parent calls wait 
* Zombie Processes and Inherited childs (Orphan processes)
* Linux process States 
    * Uninterruptable Sleep(D)
    * Interruptable Sleep(S)
    * Running/Runnable(R)
    * Stopped(T)
    * Zombie(Z  )
