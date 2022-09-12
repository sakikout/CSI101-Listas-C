#include <stdio.h>

int Somatorio(int a){
    int sum_result = 0, i;

    for (i = 1; i < a; i++){ //this repetition will asure it will do the math to all numbers behind the given number in our parameter (int a);
        sum_result += i; // this var will keep the value of i and will sum all others i values to itself till the given number.
    }

    return sum_result; // our function will return the value of the sum.
}

int main (void){

    int numero, resultado_1;

    printf("Insira um numero para o calculo do somatorio: "); //we're asking the user to give us a number, so we will sum all former numbers until the number given.
    scanf("%d", &numero);

    resultado_1 = Somatorio(numero);
    printf("Resultado: %d", resultado_1);

    return 0;
}