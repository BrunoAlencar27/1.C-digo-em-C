#include<stdio.h>
#include<string.h>

char nome[20];
int tamanho;

int main(){
    printf("Digite algo:");
    gets(nome);
    fflush(stdin);
    tamanho = strlen(nome);
    printf("Seu nome tem %d letras\n",tamanho);
    return 0;
}