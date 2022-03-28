#include<stdio.h>
#include<unistd.h>
#include<string.h>
int main()
{
    int p[2];
    pipe(p);
    printf("read end of pipe =%d\t Write end of pipe =%d \n",p[0],p[1]);
    if(fork())
    {
        char s[20];
        printf("%s",s);
        write(p[1],s,strlen(s)+1);

    }
    else{
        char buff[20];
        printf("In child\n");
        read(p[0],buff,sizeof(buff));
        printf("Child pro printing the data of the parent process %s\n",buff);

    }
    return 0;
}