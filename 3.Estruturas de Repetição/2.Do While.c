#include <stdio.h>
int n=0;
int main(){

    //Estrutura "Do while", solicitando que o usuário insira
    // um valor maior que zero.
    do{
        printf("Digite um valor maior que zero:");
        scanf("%d",&n);
    }while(n<=0); //Continua executanco o pedido enquanto n for 
                 //menor que zero, quando a condição for falsa
                 //ele para.
    printf("Ok, %d é maior que zero\n",n);
    return 0;
}