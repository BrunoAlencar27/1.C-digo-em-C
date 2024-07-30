#include<stdio.h>

char palavra[6];

int main(){
    printf("Digite uma palavra de 5 letras:");
    fgets(palavra,6,stdin);//Entrada de dados com "fgets"
    fflush(stdin);

    puts(palavra);//Saída de dados com "puts"
    return 0;
}