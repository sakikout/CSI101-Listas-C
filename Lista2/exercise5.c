// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 2

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int CheckLados (int a, int b, int c){
    if(a == b == c){
        printf("O triângulo é Equilátero.");
    } else if ( a == b && a != c || a == c && a != b || b == c && b != a ){
        printf("O triângulo é Isósceles.");
    } else if ( a != b != c){
        printf("O triângulo é Escaleno.");
    } else {
        printf("Invalido.");
    }
}

int main (void){
        int lado1, lado2, lado3;

        printf("Insira os lados do triângulo: ");
        printf("\nLado 1: ");
        scanf("%i", &lado1);

        printf("Lado 2: ");
        scanf("%i", &lado2);

        printf("Lado 3: ");
        scanf("%i", &lado3);

        CheckLados(lado1, lado2, lado3);

        return 0;
}