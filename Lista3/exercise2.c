// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 3

#include<stdio.h>
#include<math.h>
int main(){ 
 
 int numero, maior, menor;
 int i;

 printf("Insira o 1o numero inteiro: ");
 scanf("%i", &numero);

 maior = numero;
 menor = numero;

 for(i=1; i<10; i++){
    printf("\nInsira o %do numero inteiro: ", i + 1);
    scanf("%i", &numero);

    if(numero > maior){
        maior = numero;
    } else if(numero < menor){
        menor=numero;
    }}


 printf("\nO menor numero inserido e: %d", menor);
 printf("\nO maior numero inserido e: %d", maior);

 getch();
 return 0;
}