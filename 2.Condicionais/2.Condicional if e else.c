#include <stdio.h>

float nota;

int main(){
    //ENTRADA DE DADOS
    printf("Digite sua nota:");
    scanf("%f",&nota);

    //CONCDICIONAL COMPOSTA
    if(nota>=7){
        printf("APROVADO\n");
    }else{
        printf("REPROVADO\n");
    }
    return 0;
}