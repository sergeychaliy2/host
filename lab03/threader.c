#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
void*print_message_function(void*ptr)
{
printf("Hello Thread(%i)\n/",i), sleep;
return NULL;
}
void*print_message_function2(void*ptr)
printf("This is iteration %i\n", i), sleep(2);
return NULL;
}
int main(){
pthread_t thread1,thread2;
const char*message1="Thread 1";
const char* message2="Thread 2;
int res1=pthread_create(&thread1,NULL,print_message_function,(void*)message1);
int res2=pthread_create(&thread2,NULL,print_message_function2,(void*)message2);
int iret1,iret2;
pthread_join(thread1,(void**)&iret1);
pthread_join(thread2,(void**)&iret2);
printf("Thread1 returns:%d\n",iret1);
printf("Thread2 returns:%d\n",iret2);
return 0;
}
