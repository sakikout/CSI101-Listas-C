// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 2

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main (void){

    int x, y;

    printf("Insira os valores referente aos pares ordenados:");
  do{  
    printf("\nEixo x: ");
    scanf("%d", &x);
    printf("\nEixo y: ");
    scanf("%d", &y);

    if ( x > 0 && y > 0 || x > 0 && y == 0 ){

        printf("\nO par ordenado (%d,%d) pertence ao Primeiro Quadrante.\n\n", x, y);
    } else if ( x > 0 && y < 0){

        printf("\nO par ordenado (%d,%d) pertence ao Quarto Quadrante.\n\n", x, y);
    } else if ( x < 0 && y > 0 || x < 0 && y == 0){

        printf("\nO par ordenado (%d,%d) pertence ao Segundo Quadrante.\n\n", x, y);   
    } else if (x < 0 && y < 0){

        printf("\nO par ordenado (%d,%d) pertence ao Terceiro Quadrante.\n\n", x, y); 
    } else {
        printf("\nInvalido.\n\n");
    }
  } while ( x != 0 || y !=0 )
    return 0;
}