#include <stdio.h>

int ConversionM (int num){
    int resultado;
    resultado = num * 60;
    return (resultado); 
}

int main (void){

    int horas, minutos, horasM, minutosT;
    printf("Insira um horário (24 horas):\n");
    printf("Horas:");
    scanf("%d", &horas);
    printf("Minutos:");
    scanf("%d", &minutos);

    horasM = ConversionM(horas);
    minutosT = horasM + minutos;
    printf("\nSe passaram %d minutos desde o início do dia (0hrs).", minutosT);

    return 0;

}