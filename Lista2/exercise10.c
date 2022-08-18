// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 2

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

float Divisao1(int a, int b){ //essa divisao é para caso b (valor2) > a (valor1)
    float resultado1;
    resultado1 = (float)a / (float)b;
    return resultado1;
}
float Divisao2(int a, int b){ // ja essa divisao é para caso a (valor1) > b (valor2)
    float resultado2;
    resultado2 = (float)b / (float)a;
    return resultado2;
}

int main (void){

    int valor1, valor2;
do{
    printf("\nInsira dois número entre 1 e 10:");
    printf("\nA: ");
    scanf(" %d", &valor1);
    printf("\nB: ");
    scanf(" %d", &valor2);

    if ( (valor1 + valor2) < 8){
        float resultado;
        resultado = (valor1 + valor2)/2;
        printf("A média dos números é igual a %f\n\n", resultado);
    } else if ((valor1 + valor2) == 8){
        float resultado;
        resultado = valor1 * valor2;
        printf("O produto dos números é igual a %f\n\n", resultado);
    } else if ((valor1 + valor2) > 8){
        if (valor1 > valor2){
            float resultado1;
            resultado1 = Divisao2(valor1, valor2);
            printf("A divisão dos números é igual a %f\n\n", resultado1);            
        } else if (valor1 < valor2) {
            float resultado2;
            resultado2 = Divisao1(valor1, valor2);
            printf("A divisão dos números é igual a %f\n\n", resultado2);
        } } else{
            printf("Invalido.\n\n");
        }
    } while (valor1 != 0 || valor2 !=0);
    return 0;
}