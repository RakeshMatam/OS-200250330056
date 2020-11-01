#include<stdio.h>

int add(int ,int);
int sub(int ,int); //function declaration

int main(int argc, char const *argv[])
{
    printf("Addition is %d \n", add(10,20));
    printf("Substraction  is %d \n", sub(10,20));
    return 0;
}
