#include <stdio.h>

int vetor[5];


int main(){
    //Entrada de dados
    for(int i=1;i<=5;i++){
        printf("Digite o %d.o número: ",i);
        scanf("%d",&vetor[i]);
    }

    //Saídade de dados
    printf("[");
    for(int i=1;i<=5;i++){
        if(i==5){
            printf("%d",vetor[i]);
        }else{
        printf("%d,",vetor[i]);
        }
    }
    printf("]");
    return 0;
}