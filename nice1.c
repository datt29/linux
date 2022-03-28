#include<stdio.h>
#include<unistd.h>
#include<errno.h>
int main()
{
    int i,ret,cnt=0;
    errno=0;
    ret=nice(19);
    
    if(ret==-1&&errno!=0)
    perror("nice");
    else
    printf("Nice value is now %d",ret);
    while(1)
    {
        printf("Process with nice value %d count %d\n",ret,cnt);
    
        for(i=0;i<100;i++);
        cnt++;
    }
}
