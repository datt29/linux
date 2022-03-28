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
    perror("Mmkfifo");
    printf("Before Open    \n ");
    fd=open("newfifo11",O_WRONLY);
    printf("After open");
    printf("Enter data \n");
    scanf("%s",s);
    write(fd,s,strlen(s)+1);
    return 0;

}