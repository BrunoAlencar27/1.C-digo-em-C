#include <stdio.h>

int main(){

    for(int i=1;i<=100;i++){
        if(i%2!=0){
            continue;//Comando pula para a próxima interação
        }            //quando i for um número impar.
        printf("%d\n",i);
    }
}