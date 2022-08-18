// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 1

#include <stdio.h>

    float Desconto (float num){ // operação do desconto
        float resultado;
        resultado = num * 0.91;
        return (resultado);
    }

int main (void){

    float produto, total;  // declaração da variável 

    printf("Insira o valor do produto desejado:\n");
    scanf("%f", &produto);
    
    total = Desconto(produto);
    printf("Valor com o desconto: %f", total);

    
    return 0;
}