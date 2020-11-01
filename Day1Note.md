*************************************Operating Systems******************************
Day 1 : 

* The Most pominent mechanism which is used for 2 layer or 3 layer Embedded system is OS.
* Embedded System : A system (Hardware or Software) which performs some dedicated functionality can be termed as Embedded systems.
* e.g., Pojector , AC , Washing machine ,..etc.,
* There are majorly 3 Components are required to build an Operating system.
    * 1. Memory - Volatile (RAM) , Non-volatile (ROM)
    * 2. CPU -- which forms the intelligence of system Functionality (AVR, ARM..,QNX..).
    * 3. Input/Output Devices -- which needs a Communication from the the External World for an Embedded system.
* I/O : 
    Sensors -> input
    Actuators -> output
    * The Software component that actually controls I/O is OS(Device Drivers(DD)).
    * The Device Drivers is a set of Software which allows you to interact and communicate with the I/O. These are provided by the vendors.
    * Every I/O unit will have one set of Controller (I/O Contoller eg: UART)
    * Any of the I/O Contoller will have the 3 Registers 
        * 1. Data Register - Trasmitting and Recieving the data 
        * 2. Status Register - checks whether the byte information is sent or not 
        * 3. Control Register - controls the behaviour of the I/O
    * The Above Drivers are controlled by the Device Drivers.
* Memory :It will store the Code and Data
    * Date and  set of Instructions(code) are stored in both RAM and ROM.
* CPU : (Central Processing Unit)
    * here the most prominent component is Set of Registers.
    * 1. GPR (General Purpose Registers)
    * 2. PC (Program Counter Register) or IP (Instruction pointer)- from where the code instructions are fetched.It points to RAM 
    * 3. XIP (Execute in Process Register)
    * 4. SP (Stack Pointer) Register. Stack is junk of Memory 
    * 5. Flags (Which stores the Arithmatic and logical Operations).
-------------------------------------------------------------------------------------------------
Tools used : Git , Visual Studio Code
-------------------------------------------------------------------------------------------------
1. git init -> (Initializing the git Repo)
2. ls -al -> to check .git file (hidden files)
3. gcc -o filename filename -> for compiling the C-code.
4. file - it will tell us about what type of format the code is 
    * ELF - (Executable and linkable Format) - binary file -> the format file in which we store the program 
    * Source code (.c files) is stored in ASCII format. 
    * PE - Portable Executable format 
    * COFF - older format
    * ./filename (Executable file) --> OS --> loads it from the HD(ROM) into the Memory (RAM)
    * when you run this Executable (./program) you are converting it into a process 
    * Meanwhile a Process can be simply defined as Program under Execution. 
5. pwd - present working directory info 
6. objdump -> it will read the ELF format 
    * objdump -S filename(Executable file name) | more 
        eg : objdump -S progam | more 
7. Size Program(name of the Executable of the souce code) :
    * gives the size of your Program in Segment wise except stack and heap segment 
    * Reason : During the Run time Execution we can pedict the Size of heap as dynamic memory allocation happens 
8. git status :
     gives the status which are to be commited 
9. git add * // git add ..
10. git add file or Foldername 
11. git add . -> for adding the modified files
12. git commit -m "message"
13. git log 
14. git branch -M main
15. git remote add origin https://github.com/RakeshMatam/OS-200250330056.git
16. git push -u origin main
    * Enter the Username and password of your git remote repo
17. rm -rf filename.c -> deletes the file in a directory 
18. make -> utility for efficient build process through Makefiles
-------------------------------------------------------------------------------------------------------
* Program : 
    * Dormant executable file or passive entity 
    * aka : executable code , executable file , executable program , executable , binary
    * Program resides in Hard disk or Non-volatile storage.
* Process : 
    * Program under Execution or active entity 
    * Program resides in Memory aka volatile storage.
    * not always - explore Xip
* When the Program is loaded into RAM the program is segmented in RAM of 5 Sections 
    * 1. Code (.text) Segment -> resides program opcode 
    * 2. Data (.data) Segment -> resides global variables (Initialzed)
    * 3. BSS (.bss) Segment -> resides global variables (Uninitialized)
    * 4. Heap Segment -> resides the dynamically allocated memory (mallaoc, calloc, Realloc) 
    * 5. Stack Segment-> resides the local variables 
            eg ; int main(){
                double loc;
            }
        * These local variables are also stored in Registers based on the Processor (32-bit ,64 bit)
        * this stack depends on ABI (Application Binay Inteface )Model which tells us how the binary stores the information.
    * 6. Uninitialized Data Segments -> Refer point 3
    * 7. Initialized Data Segments -> Refer point 2
    * 8. .rodata segment (readonly data segment) : resides the constant variables which are unchanged 
            eg : const double dvar1 = 1.0;

    * The junk of or the combination of all the above segments are known as Address space  