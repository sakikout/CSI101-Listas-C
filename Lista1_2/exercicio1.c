// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 1

#include <stdio.h>

int Trocar1 (int num){
    int resultado;
    resultado = num * -1;
    return resultado;
}


int main (void){
    
    int numero;

    printf("Escolha um número:");
    scanf("%i", &numero);

    int resultado1;
    resultado1 = Trocar1(numero);

    printf("Agora os números são %i e 1/%i", resultado1, numero);

    return 0;

}