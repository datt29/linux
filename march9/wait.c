
#include<sys/types.h>
#include<sys/wait.h>
#include<stdio.h>

int main(void)
{
    pid_t pid1;
    pid1=fork();
    if(pid1==0)
    {
        sleep(5);
        printf("I am child with 5 sec delayy");

    }
    else
    {
        int pid2;
        printf("I am parent pro pid = %d",getpid());
        pid2=wait(0);


    printf("Parent saynig child %d ecited noramlly",pid2);
    printf("Parent process pro id %d",getpid());
    }
}