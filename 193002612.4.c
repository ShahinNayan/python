#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,a;
    scanf("%d",&n);
    getchar();
    char nayan[30];

    for(int i=0;i<n;i++){
        scanf("%[^\n]%*c",nayan);
        a = strlen(nayan);

        if(nayan[0] == '/' && nayan[1]=='/')
        {
            printf("single line comment. \n");
        }
        else if(nayan[0] == '/' && nayan[1]=='*' && nayan[a-1] == '/' && nayan[a-2]=='*')
        {
            printf("multiple line comment. \n");
        }
        else
        {
            printf("Not a comment.\n");
        }
    }
}
