#include <stdio.h>

float Fahrenheint (float num){
    float resultado;
    resultado = (9 * num + 160) / 5;
    return (resultado);
}

int main (void){
    float tempC;

    printf("Insira a temperatura em graus Centígrados:\n");
    scanf("%f", &tempC);

    float tempF = Fahrenheint(tempC);

    printf("A temperatura %f °C em Fahrenheint será %f °F graus.\n", tempC, tempF);

    return 0;

}