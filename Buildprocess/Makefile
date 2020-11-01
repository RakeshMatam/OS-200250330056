CC = gcc
CC1 = arm-linux-gnueabi-gcc

Builddemo: Builddemo.o add.o sub.o	
	$(CC1) -o Builddemo Builddemo.o add.o sub.o


Builddemo.o : Builddemo.c
	$(CC1) -c -o Builddemo.o Builddemo.c

add.o : add.c
	$(CC1) -c -o add.o add.c


sub.o : sub.c
	$(CC1) -c -o sub.o sub.c

clean :
	rm -rf *.o Builddemo 