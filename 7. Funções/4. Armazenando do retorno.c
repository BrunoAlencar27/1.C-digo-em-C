//Algoritmo: Armazenamento do Retorno
//Registro:DeVup

#include <stdio.h>

//Declarção de um função sem retorno
void funcao0(){
    printf("A função0 não retornada nada, ela é vazia\n");
}
//Declarção de uma função com retorno inteiro
int funcao1(int a, int b){

    int soma=(a+b);
    return soma;
}
//Declarção de uma função com retorno float
float funcao2(float a, float b){
    float soma=(a+b);
    return soma;
}
//Declaração de uma função com retorno double
double funcao3(double a, double b){
    double soma=(a+b);
    return soma;
}

int main(){
    funcao0();//Chamei a função0
    int f1=funcao1(1,2);//Armazenamento do retorno da função1
    float f2=funcao2(1.1,2.2);//Armazenamento do retorno da função1
    double f3=funcao3(1.1,2.2);//Armazenamento do retorno da função1

    printf("Resultado da função1:%d\n",f1);
    printf("Resultado da função2:%.1f\n",f2);
    printf("Resultado da função3:%.1f\n",f3);

    return 0;

}