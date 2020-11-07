*******************************Operating Systems ********************************************************
Day 11:
----------------------------------------------------------------------------------------------------------
* Assignment: How do we create daemon in Linux?
    * kill process -> re-spawns 
* Read Write locks :
    * In a read write lock multiple readers are allowed to read the critical section.
----------------------------------------------------------------------------------------------------------
* Scheduling Algorithm :
    * Algorithm which takes inputs as the Ready Table (All the processes which are ready for execution are stored in the ready table.)
    * from the Ready table choose one process from the Scheduling Algorithm which will go and execute on a CPU.
    * 1. Round Robin Algorithm :
        * In this algorithm we can interchange the processes in a system.
        * Each process will be given a fixed amount of time called "Quantum time".
        * Each process will execute one by one with in a time peroid of Quantum time.
        * After executing all the processes in a system for a Quantum time period it will Repeat the process again till it completes execution.
        * Disadvantage : it takes more time in context switching 
        * In Round robin choosing the Right Quantum time is very very important.
    * 2. Shortest Job First :
    * 3. Priority Based Algoithm : 
        * here we should assign prioity for a Process 
        * Disadvantage : Starving 
        * Advantage : better Response time.
    * 4. FIFO Algorithm : First in First out
----------------------------------------------------------------------------------------------------------
* SJF : Shortest Job First
* Through put : In a given one Unit of time How many pocesses you can execute is can be called as Though put.
* Scheduling algorithms
    * Round Robbin
        * Time slicing 
        * Time slice -> Quantum time -> Quantum period
    * Shortest Job First
        * Preemptive 
        * Non-Premptive
    * Priority Base
        * Preemptive 
        * Non-Premptive
    * FIFO
* Multi-level scheduling

* Response time
* Throughput 
* In RTOS - Piority based preeptive scheduling algorithm is mostly used.
* In Embedded and RTOS the Quantum time is fixed.
* In linux - Quantum time is not fixed and may vary.
----------------------------------------------------------------------------------------------------------
* if the process having the same Prioity based 
    * priority based 
    * round robin 
 