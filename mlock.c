#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
    size_t i;
    const int alloc_size=1*1*4;
    char* memory=malloc(alloc_size);
    mlock(memory,alloc_size);
    for(i=0;i<alloc_size;i++)
    memory[i]='#';
    printf("allocated memory initiallized with %s \n ", memory);
    munlock(memory,alloc_size);
    return 0;

}