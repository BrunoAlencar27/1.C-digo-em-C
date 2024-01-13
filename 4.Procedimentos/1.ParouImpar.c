#include <stdio.h>
int n;
void parouimpar (int v){
  if (v%2==0){
    printf("Esse número é par\n");
    printf("\n");
  }else{
    printf("Esse número é impar\n");
    printf("\n");
  }
}
int main(){
  printf("Digite um número:");
  scanf("%d",&n);
  printf("\n");
  parouimpar(n);
  return 0;
}
