#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char nayan[30];
    fgets(nayan,30, stdin);
    for(int i=0;i<n;i++){
        fgets(nayan,30, stdin);
        int flag = 0;
        if(isalpha(nayan[0]) || nayan[0]=='_'){
                for(int  j=0;j<strlen(nayan)-1;j++){
                    if (isdigit(nayan[j]) || isalpha(nayan[j]) || nayan[j]=='_'){
                        flag =1;
                    }
                    else{
                        flag =0;
                    }
                }
                }
        if(flag ==1){
            printf("Valid \n");
        }
        else{
            printf("Invalid \n");
        }
        }



    }
