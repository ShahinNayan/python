#include<stdio.h>
int main()
{
    int a,b,c,sum;
    scanf("%d %d %d",&a,&b, &c);
    sum= a + b;
    if(sum>c)
    {
        printf("The triangle is valid");
    }
    else
    {
      printf("The triangle is invalid");
    }
}
