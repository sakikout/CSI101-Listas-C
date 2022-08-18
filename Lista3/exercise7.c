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
    int numero, val_positivo, val_negativo, val_total;
    float media, percentual_negativo, percentual_positivo, num_soma;
    int i;
    
    val_positivo = 0;
    val_negativo = 0;

    printf("Insira o 1º numero para o calculo da média aritmética (deve ser diferente de 0): "); //o usuario insere o 1º numero
    scanf("%d", &numero);
        val_total = 1; //para garantir que esse numero não vai ser esquecido
        i = 1;
        num_soma += numero;
        if(numero > 0){
            val_positivo += 1; // toda hora que um numero for positivo, irá somar 1 na quantidade de numeros positivos
           

        } else if (numero < 0){
            val_negativo += 1; // toda hora que um numero for negativo, irá somar 1 na quantidade de numeros negativos
          
        }

        
        if (numero == 0){
            printf("Finalizado.");
            return 0;
        } else {
    
            do{
            for(i = 1; i++;){
                printf("Insira o %dº numero para o calculo da média aritmética: ", i); // o usuario insere o 2ºnumero em diante
                scanf("%d", &numero);
                if (numero == 0){
                    printf("Finalizado.");
                    return 0;
                }

        
                val_total += 1; // a cada número, o total de numeros inserido vai aumentar 1 vez
                num_soma += numero; //a cada numero, irão ser somados os valores dos numeros na soma
                media = num_soma / val_total; //a soma será dividida pela quantidade de numeros inseridos
                printf("%d\n", val_total);
                printf("%f\n", num_soma);

                if(numero > 0){
                    
                    val_positivo += 1; // toda hora que um numero for positivo, irá somar 1 na quantidade de numeros positivos
                    percentual_positivo = ((float)val_positivo / ((float)val_total)) * 100; // calculo do percentual

                } else if (numero < 0){
                    
                    val_negativo += 1; // toda hora que um numero for negativo, irá somar 1 na quantidade de numeros negativos
                    percentual_negativo = ((float)val_negativo / ((float)val_total)) * 100; // calculo do percentual
                }

            printf("A média aritmética dos números inseridos é: %.3f\n", media);
            printf("O total de numeros negativos é: %d e o percentual de números negativos inseridos é %.3f\n", val_negativo, percentual_negativo);
            printf("O total de numeros positivos é: %d e o percentual de números positivos inseridos é %.3f\n\n", val_positivo, percentual_positivo);
            }
        
            } while (numero != 0); //se for inserido zero, o looping irá parar (ou nem começará)
        }
}