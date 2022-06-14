#include<stdio.h>
#include<string.h>
#define SIZE 10
int main ()
{
char non_terminal;
char beta,alpha;
int num;
char nayan[10][SIZE];
int index=3;
printf("Enter Number of Production: ");
scanf("%d",&num);
printf("Enter the grammar:\n");
for(int i=0;i<num;i++)
{
scanf("%s",nayan[i]);
}
for(int i=0;i<num;i++)
{
printf("\nThis Grammar %s",nayan[i]);
non_terminal=nayan[i][0];
if(non_terminal==nayan[i][index])
{
alpha=nayan[i][index+1];
printf(" is left recursive.\n");

while(nayan[i][index]!=0 && nayan[i][index]!='|')
index++;
if(nayan[i][index]!=0)
{
beta=nayan[i][index+1];
printf("\nGrammar after removing left recursion:");
printf("\n%c->%c%c\'|E",non_terminal,beta,non_terminal);
printf("\n%c\'->%c%c\'|E\n",non_terminal,alpha,non_terminal);
}
else
printf(" can't be reduced\n");
}
else
printf(" is not left recursive.\n");
index=3;
}
}
