#include<stdio.h>

char frase[12];

int main(){
    printf("Digite uma frase:");
    scanf("%11[^\n]]s",frase);
    fflush(stdin);

    printf("Frase:%s\n",frase);
    return 0;;
}