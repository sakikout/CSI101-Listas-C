// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 2

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (void){

    char nome; int idade, peso;
    printf("Para doar sangue, é necessário ter entre 18 e 67 anos e pesar mais de 50kg.");

   do{ 
    
    printf("\nInsira a primeira letra de seu nome, peso (em kg) e idade.");
    printf("\nInicial: ");
    scanf(" %c", &nome);
    printf("\nPeso: ");
    scanf("%i", &peso);
    printf("\nIdade: ");
    scanf("%i", &idade);
    system("clear");

    if ( 18 > idade || idade > 67 && peso < 50){
        printf ("Não é possível doar sangue, %c. Peso e Idade não atendem os requisitos mínimos.", nome);
        
    } else if (18 > idade || idade > 67) {
        printf("Não é possível doar sangue, %c. A Idade não atende os requisitos mínimos.", nome);
        
    } else if (peso < 50){
        printf("Não é possível doar sangue, %c. O Peso não atende os requisitos mínimos.", nome);
        
    } else if (peso > 50 && idade > 18 || idade < 67){
        printf("%c pode doar sangue!", nome);
        
    } else {
        printf("\nInvalido.");
        
    }
   } while (nome != 0 && peso != 0 && idade != 0);

    return 0;
}