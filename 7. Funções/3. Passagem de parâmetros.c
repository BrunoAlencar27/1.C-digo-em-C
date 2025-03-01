//Algoritmo:Passagem de parâmetros
//Registro:DeVup

#include <stdio.h>

//Declarção de um função sem retorno
void funcao0(){
    printf("Declarou a função\n");
}
//Declarção de uma função com retorno inteiro
int funcao1(int a, int b){
    printf("Essa tem retorno inteiro\n");
    int soma=(a+b);
    return soma;
}
//Declarção de uma função com retorno float
float funcao2(float a, float b){
    printf("Essa tem retorno float\n");
    float soma=(a+b);
    return soma;
}
//Declaração de uma função com retorno double
double funcao3(double a, double b){
    printf("Essa tem retorno double\n");
    double soma=(a+b);
    return soma;
}


int main(){
    funcao0();//Chamei a função0
    funcao1(1,2);//Chamei a função1 e passei parâmetros 1 e 2
    funcao2(1.1,2.2);//Chamei a função2 e passei parâmetros 1.1 e 2.2
    funcao3(1.1,2.2);//Chamei a função3 e passei parâmetros 1.1 e 2.2

    return 0;

}