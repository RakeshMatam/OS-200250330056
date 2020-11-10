----------------------------------------------------------------------------------------------------------
RTOS : Real Time Operating System
----------------------------------------------------------------------------------------------------------
* Outline 
    * logical and Temporal Specifications
    * RTS & RTOS Concepts
    * Task Level Response
    * Preemptive and Non-preemptive Kernels
    * Interrupt Latency, Response and Recovery
    * Task Specifications
    * Scheduling Algorithms for RTOS
    * Schedulability Analysis
---------------------------------------------------------------------------------------------------------
* Logical and Temporal Specifications and Correctness :
    *  logical -> means functionality
    * Temporal -> means with respect to time.
    * Specifications -> It should meet both the functinality and the timing 
    * Correctness -> Checking all the above for the correctness   
        * eg :Requirement :
            * Average Samples from a Pressure sensor.
            * NO.of Samples is 50.
        * we should check for logical correctness and temporal correctness for the above
---------------------------------------------------------------------------------------------------------
* Real time Systems :
    * Misinterpretations that RTS is Fast which is not True 
    * A RTS's are Characterized by severe consequences that result if "logical"as well as "timing correctness" properties of RTS and RTOS like 
    * Soft Real time : 
        * Tasks are performed by the systems as fast as possible, missing of deadlines sometimes allowed.
    * Hard Real Time :
        * Tasks have to performed not only correctly but in time 
    * Most RTS have the combination of the above both 
----------------------------------------------------------------------------------------------------------
* Task level Response :
    * Critical operation's have to be performed by the ISR's to ensure that they are dealt in a timely fashion 
    * Information for a Backgroung (BG) module made available by an ISR is not processed until the background routine gets its turn to execute.
    * This is called a Tasklevel Response.
----------------------------------------------------------------------------------------------------------
* Task States 
    * Dormant -> 
        * Task is Available in the Memory but the OS doesnt know about it.(Not Created a task just available in the memory).
        * for any Task to be active we need to Create a Task. So, there are some API's which creates a Task.(eg: pthread_create)
    * Ready -> 
        * Whenever the Task is Created the Task will go into the READY State.
        * if this Newly Created task is having the highest Priority then only the Task will enter into the RUNNING State.
        * So, There are Multiple tasks which are READY State 
        * So, The Schedular has to choose the task based on the priority    
    * Running -> 
        * The Task which is having the highest priority will come into the RUNNING State.
        * While the task is in RUNNING State the ISR's may come in and execute and Come back to the RUNNING State 
    * Waiting ->
        * 
    * ISR ->
        * 
----------------------------------------------------------------------------------------------------------
* The Task which is having the highest priority will execute (Preemptive Kernel)
* The Task which is having the lowest priority will execute (Non-Preemptive Kernel)
* In Non-preemptive kernel the Response time for the high priority task will depends on the Response time of the Lowest priority task.
* Response Time = Interrupt latency + Context saving        
