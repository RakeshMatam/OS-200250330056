**********************************Operating Systems*********************************
Day 9:
----------------------------------------------------------------------------------------------------------
* Resource : Resource is anything that can be accessible by a process or a thread.
eg : Hadware Serial port,Variable or Memory location
* Race Condition : The Race between the two or more threads to access the global Resource 
* Mutual Exclusion : Solution for the Race condition problem to access the Global Resources.
    * Can be defined as At any given instance you allow access to the global resource by only one process or one thread at a time.
* Critical Section Region : in a process the place which acess the global Resource is known as Critical Section Region.
* So , we need to put the lock before the Critical section and Unlock after the critical section to avoid the problem of Race Condition.
* LOAD -> ADD -> STORE 
* Mutex 
    * lock before the Critical section and unlock after the critical section
    * Initialize the mutex before the Thread is Created 
    * Create the threads 
    * jion the Threads 
    * ME
    * Destroy the threads.

* There are various types of Mutex's 
    * 1. Futex -> Fastest mutex 
    * 2. Recursive Mutex -> 
        * Eg : Suppose I have a Threads T1 (lock & unlock) for mutex (m1) & T2 (lock& unlock) for Mutex(m2) Respectively. I again did the lock inside the lock in critical section region then OS will keep the Thread T1 into a lock state and T1 will be in a permanently locked state(Dead lock)  
    * 3. 
