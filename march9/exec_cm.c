#include<stdio.h>
int main(int argc,char *argv[])
{
    int i;
    printf("\n file name : %s",argv[0]);
    printf("\n Total number of argument :%d",argc);
    for (i=1; i < argc; i++)
    {
        printf("%s",argv[i]);
    }
    
}