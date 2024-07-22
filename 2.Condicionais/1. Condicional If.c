#include <stdio.h>
int N;
int main(){
    //ENTRADA DE DADOS
    printf("Identificadores de pares\n");
    printf("Insira uma número:");
    scanf("%d",& N);
    
    //CONDICIONNAL CAPTANDO OS NÚMEROS PARES
    if(N%2==0){
        printf("Esse número é par\n");
    }
    printf("Não é par\n");
    return 0;
}
