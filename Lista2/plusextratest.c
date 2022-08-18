
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main (void){

    int valor1;
do{
    printf("\nInsira um numero ou caractere:");
    printf("\nA: ");
    scanf("%d", &valor1);

    if (isalpha(valor1) == false){ // A função isalpha decide se o argumento representa uma letra (maiúscula ou minúscula).
        printf("\nÉ decimal!\n\n");
        break;
    } else{
        printf("\nNão é decimal.\n\n");
        break;
    }
        
    } while (valor1 != 0);
    
    return 0;
}