// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 1

#include <stdio.h>

int main (void){
    
    int valor;
    printf("Insira o valor para trocar:");
    scanf("%i", &valor);

    int resultado50, resultado10, resultado1;
    resultado50 = valor / 50;
    resultado10 = (valor - (resultado50 * 50)) / 10;
    resultado1 = (valor - ((resultado50 * 50) + (resultado10 * 10)));

    printf("\nSerão necessárias %i notas de 50, %i notas de 10 e %i notas de 1.", resultado50, resultado10, resultado1);

    return 0;

}