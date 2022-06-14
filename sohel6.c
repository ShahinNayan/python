#include<stdio.h>
int main()
{
int i;
printf("The numbers divisible by 3 and not 5 are: ");
for(i=0; i<=200; i++)
{
if(i%4==0 && i%5!=0)
{
printf("%d\n", i);
}
}
}
