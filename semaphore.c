#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<semaphore.h>
int sharedvar=5;
sem_t my_seam;

void*thread_inc(void *arg)
{
    sem_wait(&my_seam);

    sharedvar++;
    sem_post(&my_seam);
    // printf("After incr= %d\n",sharedvar);

}
void *thread_dec(void *arg )
{
    sem_wait(&my_seam);

    sharedvar--;
    sem_post(&my_seam);
    // printf("after dec=%d\n",sharedvar);
}
int main()
{

    pthread_t thread1,thread2;
    sem_init(&my_seam,0,1);
    pthread_create(&thread1,NULL,thread_inc,NULL);
    pthread_create(&thread2,NULL,thread_dec,NULL);

    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    printf("Shared var is %d\n",sharedvar);
    return 0;
}