// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 2

#include <stdio.h>
#include <math.h>

void divisao (float num1, float num2) {
    printf ("\nO resultado é %f.", num1 / num2);
}
void multiplicacao(int num1, int num2){
    printf ("\nO resultado é %i.", num1 * num2);
}
void soma(int num1, int num2){
    printf ("\nO resultado é %i.", num1 + num2);
}
void subtracao(int num1, int num2){
    printf ("\nO resultado é %i.", num1 - num2);
}

int main (void){
    int num1; int num2; char operacao; int resultado;
    
        printf("\nInsira o caractere da operação desejada (soma, multiplicacao, subtraçao ou divisao):");
        scanf("%c", &operacao);
        printf("\nInsira o primeiro número:");
        scanf("%i", &num1);
        printf("\nInsira o segundo número:");
        scanf("%i", &num2);
    

        printf("\nCalculando: %i %c %i...", num1, operacao, num2);


        switch (operacao){
            case '+' :  
                soma(num1, num2);
                break;
            case '-': 
                subtracao(num1, num2);
                break;
            case '*': 
                multiplicacao(num1, num2);
                break;
            case '/': 
                if (num2 != 0){
                    divisao(num1, num2);
                } else{
                    printf("\nNão é possível dividir por zero.");
                }
                break;
            default: 
                printf("\nInvalido.");
                break;
        }
   
    return 0;
}