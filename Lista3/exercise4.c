// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 3

#include<stdio.h>
int main(){ 
    int i;
    int numero, tabuada;

    printf("Insira um número para o cálculo da tabuada: ");
    scanf("%d", &numero);

    for(i=0; i <= 9; i++){
        tabuada = numero * i;
        printf("\n%d x %i = %d\n", numero, i, tabuada);
    }

    return 0;
}