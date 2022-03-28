#include<pthread.h>
#include<stdio.h>
#include<unistd.h>
void *Printfhello(void *threadid)
{
    printf("\n Hello world");
    while(1);

}
int main()
{
    pthread_t thread;
    int rc,t=0;
    printf("Creating thread\n");
    rc=pthread_create(&thread,NULL,Printfhello,NULL);
    printf("\n Thread  ID :%u",thread);
    sleep(6);
    t=pthread_cancel(thread);
    if(t==0)
    printf("\n cancelled thread");
    printf("\n Thread ID :%u\n",thread);
}