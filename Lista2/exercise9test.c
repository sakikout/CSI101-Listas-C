// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 2

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main (void){

    char x[1];
    char y[1];
    char signal ="-";

    printf("Insira os valores referente aos pares ordenados:");
  do{  
    printf("\nEixo x: ");
    scanf("%s", &x);
    printf("\nEixo y: ");
    scanf("%s", &y);

    if ( strstr(x, signal) == NULL && strstr(y, signal) == NULL){

        printf("\nO par ordenado (%d,%d) pertence ao Primeiro Quadrante.\n\n", x, y);
    } else if ( strstr(x, signal) == NULL && strstr(y, signal) != NULL){

        printf("\nO par ordenado (%d,%d) pertence ao Quarto Quadrante.\n\n", x, y);
    } else if ( strstr(x, signal) != NULL && strstr(y, signal) == NULL){

        printf("\nO par ordenado (%d,%d) pertence ao Segundo Quadrante.\n\n", x, y);   
    } else if (strstr(x, signal) != NULL && strstr(y, signal) != NULL){

        printf("\nO par ordenado (%d,%d) pertence ao Terceiro Quadrante.\n\n", x, y); 
    } else {
        printf("\nInvalido.\n\n");
    }
  } while ( x != 0 || y !=0 )
    return 0;
}