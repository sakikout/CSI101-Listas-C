// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 1

#include <stdio.h>

    int Salarios_Minimos (float num){
        float resultado;
        resultado = num / 622.0 ;
        return (resultado);
    }

int main (void){

    float salario, salariosmin;  // declaração das variáveis 

    printf("Salário mínimo: R$622,00\n"); // informando o valor do salário mínimo
    printf("Insira seu salário:\n"); // atribuir um valor a salario
    scanf("%f", &salario);

    salariosmin = Salarios_Minimos(salario);
    printf("Sua renda é de: %f salários mínimos.", salariosmin); // resultado do calculo dos salários mínimos

    
    return 0;
}