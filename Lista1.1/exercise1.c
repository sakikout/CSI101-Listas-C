// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 1

#include <stdio.h>

int main (void){
    int numero;  // declaração da variável 

    printf("Escolha um número: \n");
    scanf("%i", &numero); // inserir um número

    int antecessor = numero - 1; // calculo do antecessor
    int sucessor = numero + 1; // calculo do sucessor

    printf("Seu antecessor é: %i \n", antecessor); // resultados
    printf("Seu sucessor é: %i \n", sucessor);

    return (0);
}