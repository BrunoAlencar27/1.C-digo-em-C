#include<stdio.h>

int test[5];

int main(){
    test[0]=1;//Atribuição simples

    for(int i=1;i<=4;i++){
        scanf("%d",&test[i]);//atribuição com loop
    }
    return 0;
}