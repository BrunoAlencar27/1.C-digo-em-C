//Algoritmo:Chamada de funções
//Registro:DeVup

#include <stdio.h>

//Declarção de um função sem retorno
void funcao0(){
    printf("Declarou a função");
}
//Declarção de uma função com retorno inteiro
int funcao1(){
    printf("Essa tem retorno inteiro");
    return;
}
//Declarção de uma função com retorno float
float funcao2(){
    printf("Essa tem retorno float");
    return;
}
//Declaração de uma função com retorno double
double funcao3(){
    printf("Essa tem retorno double");
    return;
}


int main(){
    funcao();//Chamei a função0
    funcao1();//Chamei a função1
    funcao2();//Chamei a função2
    funcao3();//Chamei a função3

}