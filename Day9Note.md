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
        * Eg : Suppose I have a Threads T1 (lock & unlock) for mutex (m1) & T2 (lock& unlock) for Mutex(m2) Respectively. I again did the lock inside the lock in critical section region then OS will keep the Thread T1 into a lock state and T1 will be in a permanently locked state(Dead lock).  
        * make sure that the number of locks and unlocks should be the same in the critical section.
    * 3. Adaptive Mutex -> 
        * Mainly used in a multi processing system 
* Thumb rules for Citical Section :
    1. When ever you write a Critical Section it should be as small as possible.
* Semaphores :
    * It is another Mechanism of used for Synchronization.
    * Semaphore would be Integer(Int) value and that int value is maintained by the OS.
    * The intial value of the Integer can be many of it based on what kind of Semaphore is it.
    * Types of Semaphores :
        * 1. Binary Semaphore 
            * 1. Mutal Exclusion (ME) Semaphore
            * 2. Signaling Semaphore 
        * 2. Counting Semaphore (Resource Management Semaphore).
    * ME Semaphores : 
        * Used to achieve mutual Exclusion (Problem of Race Condition).
        * eg : Mutex's, Binary Semaphores 
        * The initial value of the Binary Semaphore is 1 
        * Semaphore API's 
            * sem_init -> initialization
            * sem_wait ->
                * it will check for the Semaphore value and then Decrements
                * if the Semaphore value is < 1 then it puts into a Waiting State.(leads to Dead lock)
                * if the Semaphore value is 1 then it will allow into the Critical Section. 
            * sem_post-> 
                * During the sem_post, it will increment the semaphore value by 1.
            * usage of sem_wait & sem_post is Equivalent to lock and unlock of Mutex.  
            * sem_destroy -> Destroy.
        * Use "man" for API's
            * man sem_init 
            * #include <semaphore.h>
            * int sem_init(sem_t *sem, int pshared, unsigned int value);
            * Link with -pthread.
        * Semaphore Desciption :

            * sem_init() initializes the unnamed semaphore at the address pointed to by sem. The value argument specifies the initial value for the semaphore.
            * The pshared argument indicates whether this semaphore is to be shared between the threads of a process, or between processes.
            * If pshared has the value 0, then the semaphore is shared between the threads of a process, and should be located at some  address  that  is visible to all threads (e.g., a global variable, or a variable allocated dynamically on the heap).
            * If pshared is nonzero, then the semaphore is shared between processes, and should be located in a region of shared memory (see shm_open(3), mmap(2), and shmget(2)).  (Since a child created by fork(2) inherits its parent's memory mappings, it can also access the semaphore.) Any process that can access the shared memory region can operate on the semaphore using sem_post(3), sem_wait(3), and so on.
            * Initializing a semaphore that has already been initialized results in undefined behavior.
        * RETURN VALUE
            * sem_init() returns 0 on success; on error, -1 is returned, and errno is set to indicate the error.
* Mutex vs Semaphores :
    * Mutex's can be used only in threads.
    * Semaphores can be used among threads as well as processes.

