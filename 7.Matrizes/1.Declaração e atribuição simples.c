#include<stdio.h>

int matriz[2][2];


int main(){
    matriz[0][0]=1;//linha 0 coluna 0
    matriz[0][1]=2;//linha 0 coluna 1
    matriz[1][0]=3;//linha 1 coluna 0
    matriz[1][1]=4;//linha 1 coluna 1
    
    for(int i=0; i<=1; i++){
        printf("[");
        for(int j=0;j<=1;j++){
            if(j<1){
                printf("%d,",matriz[i][j]);
            }else{
                printf("%d",matriz[i][j]);
            }
        }
        printf("]\n");
    }
    return 0;
}