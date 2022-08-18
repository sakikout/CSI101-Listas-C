// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 2

#include <stdio.h>
#include <math.h>

float IMC (float num1, float num2){
    float resultado;
    resultado = (num1) / pow(num2, 2);
    return (resultado);
}

int main (void){
    float peso, altura;

    printf("Insira seu peso (em kg):");
    scanf("%f", &peso);
    printf("Insira sua altura (em metros):");
    scanf("%f", &altura);

    float resultado;
    resultado = IMC(peso, altura);

    printf("\n Seu IMC é %f", resultado);

    
    return 0;
}