#include <stdio.h>

int A,B,som,sub,mult,div;

int main(){
    //ENTRADA DE DADOS
    printf("Digite um número:");
    scanf("%d",&A);
    printf("Digite outro:");
    scanf("%d",&B);

    //OPERADORES
    som = A + B;
    sub = A - B;
    mult = A * B; 
    div = A/B; //DIVISÃO INTEIRA

    //SAÍDA DE DADOS
    printf("Soma = %d\n", som);
    printf("Subtração = %d\n", sub);
    printf("Multiplicação = %d\n", mult);
    printf("Divisão = %d\n", div);

    return 0;

}