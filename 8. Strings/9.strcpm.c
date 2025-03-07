#include<stdio.h>
#include<string.h>

char senha[20]={"/exit"};
char texto[20];
int test;

int main(){
    printf("Digite a senha:");
    gets(texto);
    fflush(stdin);
    test = strcmp(senha,texto);
    if(test == 0){
        printf("senha válida\n");
    }else{
        printf("Senha inválida\n");
    }
    return 0;
}