// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 2

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (void){
    int codigo;
    char *cargo;

    printf("\nDigite um código para a busca de Cargo.");
    printf("\nCódigos disponíveis: 101 - 106\n");
    scanf("%d", &codigo);

    switch(codigo){
        case 101:
        
        cargo = "Vendedor";
        printf("\n\nO cargo correspondente é %s\n\n", cargo);
        break;

        case 102:
        
        cargo = "Atendente";
        printf("\n\nO cargo correspondente é %s\n\n", cargo);
        break;

        case 103:
        
        cargo = "Auxiliar Tecnico";
        printf("\n\nO cargo correspondente é %s\n\n", cargo);
        break;

        case 104:
        
        cargo = "Assistente";
        printf("\nO cargo correspondente é %s\n\n", cargo);
        break;

        case 105:
        
        cargo = "Coordenador de Grupo";
        printf("\nO cargo correspondente é %s\n\n", cargo);
        break;

        case 106:
        
        cargo = "Gerente";
        printf("\nO cargo correspondente é %s\n\n", cargo);
        break;

        default:
        printf("\nInvalido\n\n");

    }


    return 0;
}
