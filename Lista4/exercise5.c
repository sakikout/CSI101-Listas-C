#include <stdio.h>

void Estacao(int dia, int mes){

   if (mes == 12 && dia > 21 || mes == 1 && dia < 31|| mes == 2 && dia < 30|| mes == 3 && dia < 21){
    printf("\nData: %d, %d\nEstacao: Verao\n\n", dia, mes);

   } else if (mes == 3 && dia > 21 || mes == 4 && dia < 30 || mes == 5 && dia < 30 || mes == 6 && dia < 21){
    printf("\nData: %d, %d\nEstacao: Outono\n\n", dia, mes);

   } else if (mes == 6 && dia > 21 || mes == 7 && dia < 30 || mes == 8 && dia < 31 || mes == 9 && dia < 23){
    printf("\nData: %d, %d\nEstacao: Inverno\n\n", dia, mes);

   } else if (mes == 9 && dia > 23 || mes == 10 && dia < 30 || mes == 11 && dia < 30 || mes == 12 && dia < 21){
    printf("\nData: %d, %d\nEstacao: Primavera\n\n", dia, mes);

   } else {
    printf("\nInvalido.\n\n");
   }

}

int main (void){

    int dias, meses;

    do{
        printf("Insira o dia e mes para encontrar a estacao correspondente:");
        printf("\nDia: ");
        scanf("%d", &dias);

        printf("\nMes: ");
        scanf("%d", &meses);

        Estacao(dias, meses);

    } while(dias != 0 || meses != 0);

    return 0;

}
