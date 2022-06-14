#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char nayan[30];
    fgets(nayan,30, stdin);
    for(int i=0;i<n;i++)
    {
        fgets(nayan,30, stdin);
        int flag = 0;
        if(isalpha(nayan[0]) || nayan[0]=='_')
        {
                for (int j=1;nayan[j]!='\0';j++)
                {

                    if (isdigit(nayan[j]) || isalpha(nayan[j]) || nayan[j]=='_' && flag ==0)
                    {

                    }
                   else
                   {
                        flag =1;
                   }
                }
                    if(flag==1)
                    {
                    printf("Invalid \n");
                    }
                    else
                    {
                    printf("Valid \n");
                    }
        }
        else
        {
            printf("Invalid \n");
        }
    }
}
