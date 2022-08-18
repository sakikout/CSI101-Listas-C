// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 1

#include <stdio.h>

int main (void){
    
    int idade;
    printf("Insira sua idade:");
    scanf("%i", &idade);

    int meses;
    meses = idade * 12;

    printf("%i anos serão equivalentes a %i meses.", idade, meses);

    int dias, horas, minutos, segundos;
    dias = meses * 30;
    horas = dias * 24;
    minutos = horas * 60;
    segundos = minutos * 60;

    printf("\n%i meses são equivalentes a %i dias, %i horas, %i minutos e %i segundos.", meses, dias, horas, minutos, segundos);


    return 0;

}