// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 3

#include<stdio.h>

int main(){ 
 
 int numero;
 int i;

 printf("Insira um numero inteiro: ");
 scanf("%i", &numero);
 
 for(i = 0; i <= numero; i++){
    printf("%d\n", i);
 }

 return 0;
}