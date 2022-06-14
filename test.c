#include <stdio.h>
#include <string.h>
int main()
{
    int n,flag;
    char pratik[30];
    printf("Enter the number of inputs: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the identifier: ");

        scanf("%s",&pratik);

        if(pratik[0]>'A'&&pratik[0]<'Z'||pratik[0]>'a'&&pratik[0]<'z'||pratik[0]=='_')
        {
            for(int j=1;pratik[j]!='\0';j++)
            {
                if(pratik[j]>='A'&&pratik[j]<='Z'||pratik[j]>='a'&&pratik[j]<='z'||pratik[j]=='_'||pratik[j]>='0'&&pratik[j]<='9')
                    flag=1;
            }
        }
        else
            flag=0;

        if(flag==0){
            printf("Invalid\n");
        }
        else
            printf("Valid\n");

    }
}
