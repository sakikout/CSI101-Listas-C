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

    int i, j, n;

    printf("Insira o número de asteriscos: ");
    scanf("%d", &n);

    char asteriscos;
    asteriscos = '*';
    

    for (i = n; i >= 0; i--){ //o contador começará o 2ºFOR e depois irá printar a quebra de linha
         for (j = 0; j <= i; j++){ // esse contador irá printar asteriscos até alcançar o valor de i(n), que será 0;
            printf("%c", asteriscos);
        }
        printf("\n"); //esse espaço será printado depois que os asteriscos no 2ºFOR for printado
    }
        
    return 0;

}