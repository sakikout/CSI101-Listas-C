// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 2

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double pi;

float Volume (float radio, float height){
    float resultado;
    pi = 3.14159;
    resultado = pi * radio * 2 * height;
    return resultado;

}  

int main (void){
    float raio, altura;

    printf("Informe a altura e o raio da base da lata de óleo para o cálculo do volume:");
    printf("\nOBS.: Precisam estar na mesma unidade de medida.");

    printf("\nInforme a altura: ");
    scanf("%f", &altura);

    printf("\nInforme o raio da base: ");
    scanf("%f", &raio);

    float resultado;
    resultado = Volume(raio, altura);
    printf("\nO volume da lata é de %f.", resultado);

        return 0;
}