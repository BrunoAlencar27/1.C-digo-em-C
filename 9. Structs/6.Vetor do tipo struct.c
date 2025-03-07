#include <stdio.h>
#include <string.h>


typedef struct{
    char nome[50];
    int numero;
    int idade;
    float peso;
    float altura;
    
}Jogador;


int main(){
    //Declarção de um vetor com 10 espaços
    //do tipo Jogador
    Jogador jogador[10];

    //Passando dados para o jogador1
    strcpy(jogador[1].nome,"Messi");
    jogador[1].numero=10;
    jogador[1].idade=32;
    jogador[1].peso=80;
    jogador[1].altura=1.70;

    //Passando dados para o jogador2
    strcpy(jogador[2].nome,"Cr.Ronaldo");
    jogador[2].numero=7;
    jogador[2].idade=40;
    jogador[2].peso=83;
    jogador[2].altura=1.87;

    printf("\n");
    printf("============OS GOAT===========\n");
    printf("-----------%s--------\n",jogador[1].nome);
    printf("Número:%d\n", jogador[1].numero);
    printf("Idade:%d\n", jogador[1].idade);
    printf("Peso:%.2f\n",jogador[1].peso);
    printf("Altura:%.2f\n", jogador[1].altura);

    printf("--------%s-----\n",jogador[2].nome);
    printf("Número:%d\n", jogador[2].numero);
    printf("Idade:%d\n", jogador[2].idade);
    printf("Peso:%.2f\n",jogador[2].peso);
    printf("Altura:%.2f\n", jogador[2].altura);
    printf("==============================\n");
    printf("\n");

    return 0;

}