#include<stdio.h>
#include<string.h>

char origem[20] = "Olá mundo";
char destino[20];

int main(){
    printf("Orgem preenchido:%s\n",origem);
    printf("Destino vazio:%s\n",destino);
    printf("\n");
    strcpy(destino,origem);//copiando o conteudo de origem para destino

    printf("Origem preenchido:%s\n",origem);
    printf("Destino preenchido:%s\n",destino);

    return 0;

}