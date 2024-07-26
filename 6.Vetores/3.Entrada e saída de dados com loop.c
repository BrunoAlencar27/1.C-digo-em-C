#include <stdio.h>

int vetor[5];


int main(){
    //Entrada de dados
    for(int i=1;i<=5;i++){
        printf("Digite o %dº número: ",i);
        scanf("%d",&vetor[i]);
    }

    //Saída de de dados
    printf("\n");
    printf("Números digitados:[");
    for(int i=1;i<=5;i++){
        if(i==5){
            printf("%d",vetor[i]);
        }else{
        printf("%d,",vetor[i]);
        }
    }
    printf("]\n");
    return 0;
}