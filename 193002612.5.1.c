#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void get_a(char rcv_string[30]){
    printf("%c->",rcv_string[0]);
    for(int f=0; f<=strlen(rcv_string);f++){
        if (rcv_string[f-1]=='|'){
            while(f<strlen(rcv_string)){
            printf("%c",rcv_string[f]);
                f++;
            }
        }
    }
    printf("%c'\n",rcv_string[0]);
}
void get_a_prime(char rcv_string[30]){
    printf("%c'->",rcv_string[0]);
    for(int f=4; f<=strlen(rcv_string);f++){
        if (rcv_string[f]=='|'){
            break;
        }
        else{
            printf("%c",rcv_string[f]);
            }
        }
        printf("%c'|$\n",rcv_string[0]);
    }

int main()
{
    int n,p,j;
    printf("Enter No of input: ");
    scanf("%d",&n);
    getchar();
    char safa[30];

    for(int i=0;i<n;i++){
        scanf("%[^\n]%*c",safa);
        p = strlen(safa);
        int flag=0;
        if (safa[0]==safa[3]){
                flag=1;
            }
        for (j=0;j<strlen(safa);j++){
            if (safa[0]==safa[j] && safa[j-1]=='|'){
                flag=1;
            }
        }
        if (flag==1){
            printf("The grammar has left recursion\n");
            get_a(safa);
            get_a_prime(safa);
        }
        else{
            printf("The grammar has no left recursion \n");
        }
    }
}
