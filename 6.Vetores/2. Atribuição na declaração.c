#include <stdio.h>


//Atribuição de todas as do vetor durante a sua declaração
int vetor[5]={1,20,300,12,-3}, soma;


int main(){
    for(int i=1;i<=5;i++){
        soma+=vetor[i];
    }
    printf("%d\n",soma);
    return 0;
}