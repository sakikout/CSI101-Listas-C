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

    int i, numero, pares, impares, val_total, num_soma, sum_pares;
    float media, media_pares;

    pares = 0;
    media_pares = 0;
    sum_pares = 0;
    num_soma = 0;
    impares = 0;
    val_total = 0; // total de numeros inseridos

    printf("Insira o 1º numero positivo para o calculo da média aritmética (deve ser diferente de 0 e maior que zero): "); //o usuario insere o 1º numero
    scanf("%d", &numero);

    val_total += 1; // 1 numero inserido
    i = 1; //indice do 1º numero
    num_soma += numero; //primeiro numero adicionado a soma

        if (numero % 2 == 0){
            pares += 1;
            sum_pares += numero;
        } else if (numero % 2 != 0){
            impares += 1;
        }

        if (numero <= 0){
            printf("\nInvalido.");
        } else {
            while (numero != 0){
                for(i=1; i++;){
                printf("Insira o %dº numero positivo para o calculo da média aritmética: ", i );
                scanf("%d", &numero);

                val_total += 1;
                num_soma += numero;
                media = (float)num_soma / (float)val_total;

                printf("\nNumeros inseridos: %d", val_total);
                printf("\nSoma: %d", num_soma);

                
                    if (numero % 2 == 0){
                        pares += 1;
                        sum_pares += numero;
                        media_pares = (float)sum_pares / (float)pares;

                    } else if (numero % 2 != 0){
                        impares += 1;
                    }

                printf("\nOs numeros impares inseridos são %d", impares);
                printf("\nOs numeros pares inseridos são %d", pares);
                printf("\nA média aritmética dos numeros inseridos é %.3f", media);
                printf("\nA média aritmética dos numeros pares inseridos é %.3f\n\n", media_pares);

                    if (numero == 0){
                        printf("\nFinalizado.");
                        break;
                    }

                }
            }


        }

    return 0;

}