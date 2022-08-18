// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 2

#include <stdio.h>

int main (void){
    
    int numero;

    printf("Selecione um número no intervalo de 30 e 120: ");
    scanf("%i", &numero);

    if ( numero > 120 || numero < 30){
        printf("\nO número não está no intervalo solicitado.");
    } else {
        printf("O número escolhido foi %i", numero);
    }

    return 0;

}