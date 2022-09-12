#include <stdio.h>

int Dias(int a, int m){
    int resultado_anos, resultado;
    resultado_anos = (a * 12); //converting years to months
    resultado = (resultado_anos + m) * 30; // converting montgs to days
    return resultado;
    
}

int main (void){

    int anos, meses, dias, resultado_final;

    printf("Insira sua idade em anos, meses e dias:");
    printf("Anos: ");
    scanf("%d", &anos);
    printf("Meses: ");
    scanf("%d", &meses);
    printf("Dias: ");
    scanf("%d", &dias);

    resultado_final = Dias(anos, meses) + dias; //using the conversion function (that will return days) and summing it with the days given.

    printf("Idade expressa em dias: %d", resultado_final);

    return 0;
}