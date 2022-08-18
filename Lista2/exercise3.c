// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 2

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int Delta (int a, int b, int c){
    int resultado;
    resultado = pow(b,2) - (4* a * c);
    return resultado;
}

int main (void){ 
    int A, B, C, delta;
    float resultado1, resultado2;

    printf("Insira as constantes da equação de segundo grau.");
    printf("\nModelo: ax^2 + bx + c");
    printf("\na: ");
    scanf("%i", &A);
    printf("\nb: ");
    scanf("%i", &B);
    printf("\nc: ");
    scanf("%i", &C
    );

    delta = Delta(A,B,C);
    printf("\nDelta: %i", delta);

        if (delta == 0){
            resultado1 = (((-B) + delta) / (2 * A));
            printf("\nA equação possui apenas 1 raiz, que é igual a %f", resultado1);
             } else if (delta > 0){
            resultado1 = (((-B) + delta) / (2 * A));
            resultado2 = (((-B) - delta) / (2 * A));
            printf("\nA equação possui 2 raizes, que são iguais a %f e %f", resultado1, resultado2);
            } else if( delta < 0){
            printf("\nA equação não possui raízes reais.");
            }

    return 0;
}