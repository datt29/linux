#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    const char str1[10]="linux new";
    const char str2[10];
    mymemcopy(str1,str2,10);
    printf("string is str2=%s\n",str2);
    

    
    return 0;
}
void mymemcopy(char *src,char *dest,int count)
{
    int i;
    for(i=0;i<count;i++)
    {
        *dest=*src;
        dest++;
        src++;
    }
}