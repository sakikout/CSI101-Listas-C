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

int main (void){
    
    float salario, maior_salario;
    int i, i_reset;
    
    i_reset = 0;

        printf("Insira os salários: ");
        printf("\nPara verificar o maior salário inserido, digite -999.");
        printf("\n 1º Salário: ");
        scanf("%f", &salario);

        maior_salario = salario;
        i = 1;
        

        if (maior_salario <= salario){
            maior_salario = salario;
        }

    while (salario){
        for (i = 1; i++;){
            printf("\n %dº Salário: ", i - (i_reset));
            scanf("%f", &salario);
            

            if (maior_salario <= salario){
            maior_salario = salario;
            }

            if (salario == -999){
                printf("\nMaior salário: %.3f\n\n", maior_salario);
                i_reset = 1;
                break;
            }

        }
    }

    if (salario == -999){
        printf("\nMaior salário: %.3f\n\n", maior_salario);
        return 0;

    }
}