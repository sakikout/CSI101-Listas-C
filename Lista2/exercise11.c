// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 2

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (void){

    int valor_mes;
do{
    printf("Insira um valor de 1 a 12: ");
    scanf("%d", &valor_mes);

    switch(valor_mes){
        case 1:
        printf("\nJaneiro.\n\n");
        break;
        
        case 2:
        printf("\nFevereiro.\n\n");
        break;
        
        case 3:
        printf("\nMarço.\n\n");
        break;
        
        case 4:
        printf("\nAbril.\n\n");
        break;
        
        case 5:
        printf("\nMaio.\n\n");
        break;
        
        case 6:
        printf("\nJunho.\n\n");
        break;
        
        case 7:
        printf("\nJulho.\n\n");
        break;
        
        case 8:
        printf("\nAgosto.\n\n");
        break;
        
        case 9:
        printf("\nSetembro.\n\n");
        break;
        
        case 10:
        printf("\nOutubro.\n\n");
        break;
        
        case 11:
        printf("\nNovembro.\n\n");
        break;
        
        case 12:
        printf("\nDezembro.\n\n");         
        break;
        
        default:
        printf("\nInvalido.\n\n");
        break;
                
    }

    
    } while (valor_mes != 0);
    
    return 0;
}