#include<pthread.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/mman.h>
void *proc(void* param)
{
    sleep(2);
    return 0;
}
int main()
{
    pthread_attr_t Attr;
    pthread_t Id;
    void *Stk;
    size_t siz;
    int err;
    size_t my_stksize =0x3000000;
    void *my_stack;
    pthread_attr_init(&Attr);
    pthread_attr_getstacksize(&Attr, &siz);
    pthread_attr_getstackaddr(&Attr,&Stk);
    printf("Default : Addr=%08x default size = %d \n ",Stk,siz);
    my_stack=(void*)malloc(my_stksize);

    pthread_attr_setstack(&Attr,my_stack,my_stksize);
    pthread_create(&Id,&Attr,proc,NULL);
    pthread_attr_getstack(&Attr,&Stk,&siz);
    return 0;

}