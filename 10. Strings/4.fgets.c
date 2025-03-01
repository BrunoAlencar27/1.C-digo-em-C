#include<stdio.h>

char palavra[6];

int main(){
    printf("Digite uma palavra de 5 letras:");
    fgets(palavra,6,stdin);//Entrada de dados com fgets
    fflush(stdin);

    printf("Palavra digitada:%s\n",palavra);
    return 0;
}