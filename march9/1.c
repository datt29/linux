#include<sys/types.h>
#include<sys/wait.h>
#include<stdio.h>
int main()
{
    pid_t pid;
    int option,stat;
    while(1)
    {
        printf("Enter 1 to exec ls programin child process and 0 to exit\n");
        scanf("%d",&option);
        if(!option)
        exit(0);
        printf("\n");
        if(fork()==0)
        {
            execl("/bin/ls","ls",0);
        
            exit(0);


        }
        //pid=wait(0)
        //printf("Cj\hild process is terminated with pid %d",pid);
    }


}