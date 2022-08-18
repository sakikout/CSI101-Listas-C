// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 2

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main (void){
    int nota;
    char nome[9];

    printf("\nDigite seu nome e a sua nota (de 0 a 10).");
    printf("\nNome: ");
    fgets(nome, 9, stdin);
    printf("\nNota: ");
    scanf("%d", &nota);

    if (nota < 5){
        printf("\n%s é um aluno de conceito D.\n\n", nome);
    } else if (nota == 6 || nota == 5){
        printf("\n%s é um aluno de conceito C.\n\n", nome);
    } else if (nota == 8 || nota == 7){
        printf("\n%s é um aluno de conceito B.\n\n", nome);
    } else if( nota == 10 || nota == 9){
        printf("\n%s é um aluno de conceito A.\n\n", nome);
    } else {
        printf("\nInvalido.\n\n");
    }
    
    return 0;
}