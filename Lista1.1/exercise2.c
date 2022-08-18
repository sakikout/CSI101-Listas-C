// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 1

#include <stdio.h>

     int Multiplicar(int num1, int num2){ // funções para encontrar o resultado das operações
        int resultado1;
        resultado1 = num1 * num2;
        return (resultado1);
    }
        int Dividir(int num1, int num2){
        int resultado2;
        resultado2 = num1 / num2;
        return (resultado2);
    }

    int Subtrair(int num1, int num2){
        int resultado3;
        resultado3 = num1 - num2;
        return (resultado3);
    }

    int Somar(int num1, int num2){
        int resultado4;
        resultado4 = num1 + num2;
        return (resultado4);
    }

int main (void){

    int numero, numero2;  //declaração das variáveis

    printf("Escolha o primeiro número: \n");
    scanf("%i", &numero);
    printf("Escolha o segundo número: \n");
    scanf("%i", &numero2); // escolher o valor das variáveis globais
    
    int resultado1;
    resultado1 = Somar(numero, numero2);
    printf("%i + %i = %d \n", numero , numero2, resultado1 ); // resultado
    
    int resultado2;
    resultado2 = Subtrair(numero, numero2);
    printf("%i - %i = %d \n", numero , numero2, resultado1 );
    
    int resultado3;
    resultado3 = Multiplicar(numero, numero2);
    printf("%i * %i = %d \n", numero , numero2, resultado1 );

    int resultado4;
    resultado4 = Dividir(numero, numero2);
    printf("%i / %i = %d \n", numero , numero2, resultado1 );

    
    return 0;
}