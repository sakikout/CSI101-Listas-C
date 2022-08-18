// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 3

#include<stdio.h>
int main(){ 
    int i, intervalo, fora_intervalo;
    int numero;
    intervalo = 0;
    fora_intervalo = 0;

    for(i=0; i <10; i++){
        printf("Insira o %dº numero: ", i+1);
        scanf("%d", &numero);

        if (numero >= 10 && numero <= 20){
            intervalo += 1;
        } else if (numero < 10 || numero > 20){
            fora_intervalo += 1;
        }
    }
    printf("\n%d numeros estao entre o intervalo [10,20]", intervalo);
    printf("\n%d numeros estao fora do intervalo [10,20]\n\n", fora_intervalo);

        return 0;
}