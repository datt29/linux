#include<stdio.h>
#include<pthread.h>
#include<sys/mman.h>
#include<stdlib.h>
void *proc(void* param)
{
    sleep(3);
    return 0;

}
int main(int argc,char *argv[])
{
    pthread_attr_t Attr;
    pthread_t id;
    int err,info;
    pthread_attr_init(&Attr);
    pthread_attr_getinheritsched(&Attr,&info);
    switch(info)
    {
        case PTHREAD_INHERIT_SCHED:
        printf("\n SCHED\n");
        break;
        case PTHREAD_EXPLICIT_SCHED:
        printf("\n Explicit\n");
        break;

        
    }
    pthread_attr_setinheritsched(&Attr,PTHREAD_EXPLICIT_SCHED);//Added linre for explicit 
    pthread_attr_getinheritsched(&Attr,&info);
    switch(info)
    {
        case PTHREAD_INHERIT_SCHED:
        printf("\n SCHED\n");
        break;
        case PTHREAD_EXPLICIT_SCHED:
        printf("\n Explicit\n");
        break;

        
    }
    pthread_create(&id,&Attr,proc,NULL);
    
    pthread_join(id,NULL);
    return 0;
}