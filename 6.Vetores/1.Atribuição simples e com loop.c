#include<stdio.h>

int test[5];

int main(){
    test[1]=1;//Atribuição simples

    for(int i=2;i<=5;i++){
        scanf("%d",&test[i]);//atribuição com loop
    }
    return 0;
}