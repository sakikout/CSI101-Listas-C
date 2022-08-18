// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 2

#include <stdio.h>
#include <math.h>

int main (void){
    
    int codigo, tamanho, tipo, chave;

    printf("Preencha os requisitos para gerar a chave criptografada:\n");

    printf("Insira o código:");
    scanf("%i", &codigo);

    printf("\nInsira o tipo:");
    scanf("%i", &tipo);

    printf("\nInsira o tamanho:");
    scanf("%i", &tamanho);
    
    if(tipo == 3 && codigo % 2 != 0){
        chave = pow(codigo, 13) + 23 * tamanho + 257;

    } else if(tipo == 5 && codigo % 2 == 0){
        chave = 19 * pow(codigo, 47) + (tamanho - 179);

    } else {
        chave = pow((codigo + tamanho), 29) + 17 * codigo + (tamanho - 127) +1;

    }

    printf("Sua chave é %i.", chave);
    
    return 0;
}