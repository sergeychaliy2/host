#include"stdio.h"
#include"sys/shm.h"
#include"stdlib.h"
void massiv(){
srand(time(0));
for(int i=0;i<20;i++)
mem[i]=rand() % 100;
}
int main(void){
const size_t memSize=80;
int memId=shmget(IPC_PRIVATE,memSize.0600 | IPC_EXCL);
printf("shmid=%i\n", memId);
if(memId<=0)
{
printf("error with shmid()\n");
return -1;
int*mem=(int*)shmat(memId,0,0);
if(NULL== mem)
{
printf("error with shmat()\n");
return -2;
}
printf(mem,"string in shred memory\n";
massiv()
char callbuf[1024];
sprintf(callbuf, "./receiver %i", memId);
system(callbuf);
return 0;
}
