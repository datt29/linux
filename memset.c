#include<stdio.h>
#include<string.h>
int main()
{
    const char str[]="linuxkernel.com";
    const char ch='#';
    char *ret;
    
    printf("String before set initialize is %s\n ",str);
    memset(str,ch,strlen(str));
    printf("String after set is %s \n",str);
    return 0;
}