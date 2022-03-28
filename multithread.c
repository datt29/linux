#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct my_thread
{
    int thread_id;
    char mesg[100];

};
void *printhello(void *threadobj)
{
    pthread_t thread_ID;
    struct my_thread *t1;
    t1=(struct my_thread *)threadobj;
    thread_ID =pthread_self();
    printf("\n Thread id : %u ",thread_ID);
    printf("\n %d Thread Message: %s\n",t1->thread_id,t1->mesg);

}
int main()
{
    pthread_t thread2,thread3,thread4,thread_ID;
    int rc;
    struct my_thread t2,t3,t4;
    t4.thread_id=4;
    strcpy(t4.mesg,"I am \n");
    t2.thread_id=2;
    strcpy(t2.mesg,"Im second thread");
    t3.thread_id=3;
    strcpy(t3.mesg,"I am third thread");
    thread_ID=pthread_self();
    printf("\n Main thread id");
    pthread_create(&thread4,NULL,printhello,(void *)&t4);
    pthread_create(&thread2,NULL,printhello,(void *)&t2);
    pthread_create(&thread3,NULL,printhello,(void *)&t3);

    printf("\n Exited from main thread\n");
    pthread_exit(NULL);
}