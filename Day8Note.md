*********************************Operating Systems*************************************************
Day 8 :
---------------------------------------------------------------------------------------------------
* Threads :
* When we talk about threads we will concentrate morely on POSIX Threads
* POSIX : Portable Operating System interfaces for Unices 
* Unices (All the unix variants)
* POSIX is a Standard defined by IEEE
* ANSI - it is the which makes the predifined functions like (printf,scanf) to work on all os (Windows,linux,unix,mac,QNX).
* #include<pthread.h> -> this header file must be included.
* for pthread API's use "man" (eg: man pthread_create).
* Q : How can you Write a Code which is Portable
* A : We can define our Own data types which are going to be specific to the underlying architecture or the Run time Environment.
* Jionable Threads & Detachable Threads 
* for Every Opaque Data Type for Accesing there will be set() API & get() API well known as getters and setters Respectively.
* Steps for Opaque Data Types -(Create() -> use it -> Destroy()).
* void *(*sub_routine) (void *) -> A pointer to a function and this function takes the arguments as (void*) and returns as void*.
* if its void that means we can pass any type of Datatype.
* Compile and link with -lpthread (eg : gcc -o file filename -lpthread)
---------------------------------------------------------------------------------------------------------
* Threads
    * POSIX
    * Library pthread
    * pthread_t
    * pthread_attr_t -> Attributes
        * Joinable - detachable
        * Scheduling policy
        * priority
    * Each thread has its own stack
    * Threads share -> .text, .data, .bss, heap except the Stack
----------------------------------------------------------------------------------------------------------
* Race Condition
* Shared Resources -> The Resources are shared between multiple processes /threads 