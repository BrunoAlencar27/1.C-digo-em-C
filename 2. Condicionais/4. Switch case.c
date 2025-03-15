#include <stdio.h>

int n,n1,n2,soma,subtracao,mult;

int main(){
    printf("Calculadora Básica");
    printf("Digite 1 para somar\n");
    printf("Digite 2 para subtrair\n");
    printf("Digite 3 para multiplicar\n");
    printf("Digite: ");
    scanf("%d",&n);

    switch(n){
        case 1:
            printf("Digite o primeiro número:");
            scanf("%d",&n1);
            printf("Digite o segundo número:");
            scanf("%d",&n2);
            soma=n1+n2;
            printf("Soma = %d\n",soma);
            break;
        case 2:
            printf("Digite o primeiro número:");
            scanf("%d",&n1);
            printf("Digite o segundo número:");
            scanf("%d",&n2);
            subtracao=n1-n2;
            printf("Subtração = %d\n",subtracao);
            break;
        case 3:
            printf("digite o primeiro número:");
            scanf("%d",&n1);
            printf("Digite o segundo número:");
            scanf("%d",&n2);
            mult=n1*n2;
            printf("Multiplicão = %d\n",mult);
            break;
        default:
            printf("Desculpe opção inválido");
            break;
    }
    return 0;
}