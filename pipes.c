#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
void parent_code()
{
    int fds[2];
    int res,i;
    char *buf1="aaaaaaa";
    char *buf2="bbbbbbb";
    char buf[40];
    res= pipe(fds);
    if(res==-1)
    {
        perror("pipe");
        exit(1);

    }
    write(fds[1],buf1,20);
    write(fds[1],buf2,20);
    read(fds[0],buf,40);
    for(i=0;i<40;i++)
    {
        printf("%c",buf[i]);
        printf("\n");
    }

}
void child_code()
{
     int fds[2];
    char buf[100];
    int n,i;
    close(fds[1]);
    n=read(fds[0],buf,100);
    printf("No of chars read=%d\n",n);
    for(i=0;i<n;i++)
    printf("%c",buf[i]);
    printf("End of child\n");


}
int main()
{
    int res,i;
    int fds[2];
    pid_t p;
    res=pipe(fds);
    if(res==-1)
    {
        perror("pipe");
        exit(1);

    }
    p=fork();
    if(p==0)
    {
        child_code();
    }
    else
    {
        parent_code();
    }
    return 0;
}