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

int Fibonacci (int n) {                                          
int i; 
long int numA, numB, soma; 
    numA = 1;
    numB = 1;
    if (n == 1){
       return 1;

    } else if (n == 2){
        return 1;

    } else if(n == 0){
        return 0;

    } else {
        for (i = 3; i <= n; i++) {                                        
            soma = numA + numB;                    
            numA = numB;                           
            numB = soma;                           
        }                                        
        return numB;    
    }                         
}   

int main (void){

    int n, i;
    long int resultado;

    printf("Insira a quantidade de numeros da sequência de Fibonacci: ");
    scanf("%d", &n);

    
    for (i = 0; i < n; i++){
        printf("%d\n", Fibonacci((n - i)));
    }

    return 0;

}