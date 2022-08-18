// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 3

#include<stdio.h>
int main(){ 
    int i;
    int numero, maior, menor;

    printf("Insira o 1º valor: ");
    scanf("%i", &numero);

    maior = numero;
    menor = numero;

    for(i= 1; i < 6; i++){
        printf("Insira o %dº valor: ", i+1);
        scanf("%i", &numero);

        if (numero > maior){
            maior = numero;
        } else if (numero < menor){
            menor = numero;
        }
    }

    printf("\nO menor numero inserido e: %d", menor);
    printf("\nO maior numero inserido e: %d", maior);

    return 0;
}