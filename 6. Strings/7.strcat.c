#include<stdio.h>
#include<string.h>

char s1[20]="Programçao";
char s2[20]="Lógica de!";

int main(){
    strcat(s2,s1);
    puts(s2);
    return 0;
}