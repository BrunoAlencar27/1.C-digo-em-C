#include <stdio.h>

int vetor[5];


int main(){
    //Entrada de dados
    for(int i=0;i<=4;i++){
        printf("Digite o número: ");
        scanf("%d",&vetor[i]);
    }

    //Saída de de dados
    printf("\n");
    printf("Números digitados:[");
    for(int i=0;i<=4;i++){
        if(i==4){
            printf("%d",vetor[i]);
        }else{
        printf("%d,",vetor[i]);
        }
    }
    printf("]\n");
    return 0;
}