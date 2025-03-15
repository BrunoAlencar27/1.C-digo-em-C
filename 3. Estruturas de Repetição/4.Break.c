#include <stdio.h>

int main(){
    for(int i=1;i<=10;i++){
        printf("%d\n",i);
        if (i==5){
            break;//Comando interrompendo o processo
        }         //quando i for igual a 5.

    }
    return 0;
}