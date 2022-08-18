// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 2

#include <stdio.h>

int main (void){
    
    float distancia, velocidade, tempo;

    printf("Informe os valores para o cálculo do Movimento Retilíneo Uniforme:\n");

    printf("Informe a Distância (em km):");
    scanf("%f", &distancia);
    printf("\nInforme a Velocidade (em km/h):");   
    scanf("%f", &velocidade);
    printf("\nInforme o Tempo (em horas):");
    scanf("%f", &tempo);

    if (distancia == 0){
        distancia = velocidade * tempo;
    } else if(velocidade == 0){
        velocidade = distancia / tempo;
    } else if(tempo == 0){
        tempo = distancia / velocidade;
    }

    printf("\nA distância é %f km, a velocidade é %f km/h e o tempo é %f horas.", distancia, velocidade, tempo);

    return 0;
}