*************************************Operating Systems****************************************************
Day 2:
----------------------------------------------------------------------------------------------------------
* Stack : 
    * Stack is a junk memory that is available for CPU.
    * Stack Pointer(SP) Register in CPU points to the top of the Stack by default.
    * eg:
            #include<stdio.h>
            int add (int ,int);// function Declaration 
            int add (int a , int b){// function Definition // eg: 067F memory address
                int sum = 0;
                sum = a+b;
                return sum; // it tells the cpu to return back to the next instruction of the main 
                through Stack
            }
            int main(){ // main program // eg: 625 memory address 
                int s;
                s = add(10,20); //eg : 063E memory address
                printf("Addition Result is : %d",s); // 0643 memory address (can be called as return address)
            }
    * In the above Program the execution starts from Main. So, the execution flow will go the add function when it is called from the Main and executes the function instructions and returns back to the main and proceeds the execution from the next Instruction.
    * IP/PC Register(points to the next instruction which is to be fetched)in CPU is pointing to Main and Starts executing.
    * These Return address,Arguments to the function ,local variables will be stored into the Stack and SP points to the Top of the Stack and the whole structure can be called as Stack Frame
    * Stack : A junk of memory
    * Stack Pointer : always points to the Top of the Stack
    * Stack Frame : A Portion of the Memory which is Created on the Stack. It is Created when a function call is made and Deletes when the function call is returned back.
    * Only the way the information is put onto the Stack may varies 
    * 3 ways we can pass the parameters :
        * 1. through Register 
        * 2. In Stack (Return address followed by the Parameters)
        * 3. In Stack (Parameters followed by the Return address)
    * Frame Pointer Register -> points to the Start of the Stack Frame
    * Stack Pointer Register -> points to the End of the Stack Frame
    * In case of the Recursive function , The whole Memory will be hogged off till it returns the function 
* Library Functions: (Static and Dynamic)
    * Libraries are the place where the function Definitions are Stored.
        * eg: In Linux , libc is the Standard library
    * Standard libraries (linux -> libc.a and libc.so)
    * user Libraries or 3rd party libraries 
    * There are 2 types of libraries 
        * Static 
        * Dynamic (also called as Shared Objects) => (*.so )-> extension for Dynamic libraries
    * Static Library :
        * 1. ar x (extract)
        * 2. ar crv libname.a 1.o 2.o ....n.o => (*.o)(Creating and adding)
        * 3. lib function definitoin embedded in binary
        * 4. multiple copies of library function loaded in the memory
        * 5. more memory 
    * Dynamic Library :
        * 1. gcc -o libname.so file1.o file2.o -shared -fPIC
        * 2. gcc -o main main.c -larith -L.
        * 3. export LD_LIBRARY_PATH =. ---> should give a library path
        * 4. ldd main
        * 5. lib function deference definitoin embedded in binary
        * 6. single copy of library function loaded in the memory
        * 7. less memory
  -----------------------------------------------------------------------------------------------------   
    * cd /usr/
    * ls
    * cd lib 
    * find .-name libc.a
    * here you can see the library files 
    * cd tmp
    * mkdir demo 
        * cd demo
    * mkdir arm x86
        * cp /usr/lib/x86_64-linux-gnu/libc.a x86/(for linux gcc compiler)
        * similarly copy the libc.a of gnueabi into arm
        * cp /usr/lib/arm-none-eabi/newlib/libc.a arm/
        * In libc.a ".a" extension is archive so "libc.a" is a collection of all archives
        * ar x libc.a (for extracting the files of libc in x86)
        * ar x libc.a (for extracting the files of libc in arm)
        * by executing the above following commands we can see the .o object files for both arm and x86
        * Irrespective of ARM or x86 libc.a is a collection of all the object files collectively known as archives 
    * Now Create your own library for "arithdemo"
        * mkdir lib
        * cp ../add.o . //(../ -> Previous directory . -> present directory) 
        * cp ../sub.o . //(../ -> Previous directory . -> present directory)
        * cp ../arithdemo.o . //(../ -> Previous directory . -> present directory)
    * for gouping all these .o files into one file
        * ar crv libarith.a add.o sub.o -> Create a new ar file and adds 
    * now you can send this libarith.a and arith.h files to others to use thses library functions 
    * gcc -0 main main.c -larith -L .// linking the library (in -larith -> -l followed by the libarith.a filename)




