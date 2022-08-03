#include <stdio.h>
      
    //para calcular o total gasto no restaurante
    int Total (float num1, float num2){
        float resultado;
        resultado = num1 + num2;
        return resultado;
    }
    // para calcular a gorjeta
    int Gorjeta (float num){
        float resultado;
        resultado = num * 0.10;
        return resultado;
    }

int main (void){
    
    float comida, gorjeta, total;

    printf("Gastos no Restaurante: \n");
    printf("Insira o gasto em comida: \n"); //se eu fizesse de um modo que poderia selecionar cada comida e seu valor, demoraria mais, mas seria possível.
    scanf("%f", &comida);
    printf("Comida: %f \n", comida); // valor da comida

    gorjeta = Gorjeta(comida);
    printf("Gorjeta: %f \n", gorjeta); // valor da gorjeta usando a função

    total = Total(comida, gorjeta);
    printf("Total: %f \n", total); // valor total da conta = Comida + Gorjeta;

    
    return 0;
}