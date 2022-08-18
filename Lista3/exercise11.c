// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 3

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int Fatorial (int n){
    int i; 
    long int resultado;
    resultado = 1;

    for (i=1; i <= n; i++){
        resultado = resultado * i;
        printf("%ld\n", resultado);

    }
    
    return resultado;

}

int main (void){

    long int n, resultado;
    int i;

    printf("Insira um valor para o calculo do fatorial: ");
    scanf("%ld", &n);

    resultado = Fatorial(n);
    printf("Fatorial de %ld é %ld", n, resultado);
    
    return 0;

}