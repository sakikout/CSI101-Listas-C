#include <stdio.h>

int JurosS (float num1, float num2, int num3){
    float resultado;
    resultado = (num1 * num2 * num3)/ 100;
    return (resultado);
}

int main (void){

    float capital, taxa, juros, montante;
    int tempo;

    printf("Insira as seguintes informações para o cálculo de seu Juros Simples:\n");
    printf("\nCapital inicial:");
    scanf("%f", &capital);
    printf("\nPeríodo de tempo em meses:");
    scanf("%i", &tempo);
    printf("\nTaxa de juros mensal:");
    scanf("%f", &taxa);

    juros = JurosS(capital, taxa, tempo);
    printf("\nO seu juros é de %f reais.", juros);

    montante = juros + capital;
    printf("\nO seu montante é de %f reais.", montante);

    return 0;

}