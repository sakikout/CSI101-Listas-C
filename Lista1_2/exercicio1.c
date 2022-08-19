// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 1

#include <stdio.h>

int Negativo (int num){
    int resultado;
    resultado = num * -1;
    return resultado;
}

float Divisao (int num){
     float resultado;
     resultado = (float)1 / (float)num;
     return resultado;
}

int main (void){
    
    int numero;

    printf("Escolha um número:");
    scanf("%i", &numero);

    int resultado1;
    float resultado2;
    resultado1 = Negativo(numero);
    resultado2 = Divisao(numero)

    printf("Agora os números são %i como negativo e 1/%i = %.3f como resultado da divisão", resultado1, numero, resultado2);

    return 0;

}
