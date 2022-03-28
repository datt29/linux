#include<stdio.h>
#include<string.h>
int main()
{
    char dest[]="oldstring";
    const char src[]="newstring";
    printf("Before memmove operation %s src= %s\n",dest,src);
    memmove(dest,src,9);
    printf("After memmove %s src %s\n",dest,src);

    return 0;
}