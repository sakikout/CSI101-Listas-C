// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 2

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (void){

    int numero;

    printf("Insira um numero de 1 a 10000:");
    scanf("%i", &numero);

    
        if (numero >= 0 && numero < 10){
            printf("\nO numero %i pertence ao primeiro grupo (0 - 10).", numero);
        }
        else if(numero >= 10 && numero < 100){
            printf("\nO numero %i pertence ao segundo grupo (10 - 100).", numero);
        }
        else if (numero >= 100 && numero < 1000){
            printf("\nO numero %i pertence ao terceiro grupo (100 - 1000).", numero);
        }
        else if (numero >= 1000 && numero < 10000){
            printf("\nO numero %i pertence ao quarto grupo (1000 - 1000).", numero);
        }
        else if (numero > 10000){
            printf("\nO numero %i nao se encaixa em nenhum grupo.", numero);
        }
        else{
            printf("\nO numero %i nao se encaixa em nenhum grupo.", numero);
        }   
        
    

    return 0;
}