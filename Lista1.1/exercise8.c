// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 1

#include <stdio.h>

float Celsius (float num){
    float result;
    result = (5 * num - 160) / 9;
    return (result);
}

int main (void){
    float tempF;

    printf("Insert the temperature in Fahrenheit degrees:\n");
    scanf("%f", &tempF);

    float tempC = Celsius(tempF);

    printf("The temperature %f °F in Celsius will be %f °C degrees.\n", tempF, tempC);

    return 0;

}