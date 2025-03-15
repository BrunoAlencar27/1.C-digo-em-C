#include <stdio.h>

float nota;

int main(){
    printf("Digite sua nota:");
    scanf("%f",&nota);

    //CONDICIONAL ANINHADA
    if(nota>=7){
        printf("APROVADO\n");
    }else{
        if(nota>=5){
            printf("RECUPERAÇÃO\n");
        }else{
            printf("APROVADO\n");
        }
    }
    return 0;
}