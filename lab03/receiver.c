#include"stdio.h"
#include"sys/shm.h"
#include"stdlib.h"
void print(int*arr)
{
for(int i=0;i<20;i++)
printf(*mem[i])
}
int main(int argv,char* argc[])
{
int temp;
for(int i=0;i<size-1;i++){
for(int j=0;j<size-i-1;j++){
if(mem[j]>mem[j+1];
temp=mem[j];
mem[j]=mem[j+1];
mem[j+1]=temp;
}
}
}
for(int i=0;i<size;i++){
cout<<mem[i]<<" ";
}
cout<<endl;
delete[] mem;
if(argv<=1)
{
printf("not enough params\n");
return -1;
}
char*paramStr=argc[1];
int memId=atoi(paramStr);
if(memId==0)
{
printf("incorrect parameter string: %i\n", paramStr);
return -2;
}
printf("receiving the memory data: shmid = %\n",memId);
int*mem =(int*)shmat(memId,0,0);
if(null==mem)
{
printf("error with shmat()\n");
return -3;
}
print(mem);
return 0;

