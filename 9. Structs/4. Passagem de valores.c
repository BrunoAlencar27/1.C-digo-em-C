//Algoritmo:Passagem de valores
//Registro:DeVup

#include <stdio.h>

//Definição de um tipo de dado "exemplo"
struct Exemplo{
    char ex1;   //campo de variável do tipo caractere
    int ex2;    //campo de variável do tipo inteiro
    float ex3;  //campo de variável do tipo float
    double ex4; //campo de variável do tipo double
};

int main(){
    struct Exemplo e1;

    e1.ex1='A';//Passando A para o campo ex1
    e1.ex2=1;  //Passando 1 para o campo ex2
    e1.ex3=2.5;//Passando 2.5 para o campo ex3
    e1.ex4=2.5;//Passando 2.5 para o campo ex4


    //Mostrando os valores armazenados nos campos
    printf("ex1:%c\n",e1.ex1);
    printf("ex2:%d\n",e1.ex2);
    printf("ex3:%.1f\n",e1.ex3);
    printf("ex4:%.1f\n",e1.ex4);

}