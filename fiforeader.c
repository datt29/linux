#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
    char s[20];
    int fd;
    mkfifo("newfifo",0644);
   
    printf("Before Open    \n ");
    fd=open("newfifo11",O_RDONLY);
    printf("After open");
    read(fd,s,sizeof(s));
    printf("Data %s",s);
    return 0;

}