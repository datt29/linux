#include<stdio.h>
//#include<stdloib.h>
#include<unistd.h>
int main()
{
    pid_t pid;
    pid=fork();
    if(pid<0)
    {
        fprintf(stderr,"Fork Failed");
        
    }
}