#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    int idade;
    float peso;
    float altura;
}Aluno,Professor,Funcionario;
//Três tipo des de dados com nomes diferentes, mas com 
//estruturas iguais.


int main(){
    //Declarção de variáveis com seus respectivos tipos
    Aluno aluno1;
    Professor professor1;
    Funcionario funcionario1;

    //Passando algumas informações
    strcpy(aluno1.nome,"Pedro");
    strcpy(professor1.nome,"Gonzaga");
    strcpy(funcionario1.nome,"José");

    //Mostrando algumas informações
    printf("\n");
    printf("-----INFORMAÇÕES-------\n");
    printf("Aluno1:%s\n",aluno1.nome);
    printf("Professor1:%s\n",professor1.nome);
    printf("Funcionŕio1:%s\n",funcionario1.nome);
    printf("-----------------------\n");
    printf("\n");

}

