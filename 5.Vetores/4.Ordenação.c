#include<stdio.h>
//IMPORTANTE !!!!
//Um vetor de 5 casas, tem indices começando 
//em 0, o que seria: 0,1,2,3,4. totalizando
//5 casas.
int vetor[5];
int aux,i;
int main(){
    for(int i=0;i<=4;i++){
        printf("Digite o número: ");
        scanf("%d",&vetor[i]);
    }
    printf("\n");
    printf("Números digitados:[");
    for(i=0;i<=4;i++){
        if(i<4){
            printf("%d,",vetor[i]);
        }else{
            printf("%d",vetor[i]);
        }
    }
    printf("]");
    for(int i=0;i<=3;i++){//ESTRUTURA DE ORDENAÇÃO
        for(int j=i+1;j<=4;j++)
        if(vetor[i]>vetor[j]){//PARA ORDENAR EM ORDEM DECRESCENTE
            aux=vetor[i];     //BASTA INVERTER O SINAL
            vetor[i]=vetor[j];
            vetor[j]=aux;
        }
    }
    printf("\n");
    printf("Números ordenados:[");
    for(int i=0;i<=4;i++){
        if(i<4){
        printf("%d,",vetor[i]);
        }else{
        printf("%d",vetor[i]);
        }
    }
    printf("]\n");
    return 0;
}