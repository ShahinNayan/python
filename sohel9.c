#include<stdio.h>
main()
{
    int i;
    int start,end;
    scanf("%d %d",&start,&end);

    for(i=start;i<=end;i++)

    {
        if(i%2==1)
        {
            printf("%d\t",i);
        }
    }
}
