#include<stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    //creation of pipe
    unsigned char rbuff[128];
    int pfd[2];// pfd[0],pfd[1]
    pipe(pfd);
    // creating a fork

    int id;
    id = fork();
    // statements below this parent and child

    if (0==id)
    {
        printf("Child Process: \n");
        read(pfd[0],rbuff,128);// since the pfd[0] is the Reading end
        printf("Data Recieved \n");
        sleep(1);
        printf("\n");
        printf("The Recieved Data in Child : %s\n",rbuff);
        close(pfd[0]);      
    }
    else
    {
        printf("Parent Process:\n");
        write(pfd[1],"CDAC\n",5);// pfd[1]-> is the writing end 
        close(pfd[1]);
        printf("Data is Transmitted \n");
        
    }

    return 0;
}
