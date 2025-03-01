#include <stdio.h>

char palavra[6];

int main(){

    printf("Digite um palavra de 5 letras:");
    scanf("%s",palavra);
    fflush(stdin);

    printf("Palavra digitada:%s\n",palavra);

    return 0;
}