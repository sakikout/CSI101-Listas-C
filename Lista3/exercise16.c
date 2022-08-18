// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 3

#include <stdio.h>

// Construa um programa que exiba na tela todas as possíveis jogadas para três dados normais, com faces de 1 a 6

int Jogadas(){

    int i, j, c, count;
    int dado1[6] = {1, 2, 3, 4, 5, 6};
    int dado2[6] = {1, 2, 3, 4, 5, 6};
    int dado3[6] = {1, 2, 3, 4, 5, 6};
    
    count = 0;
    for (i = 0; i < 6; i++){
        for (j = 5; j >= 0; j--){
            for (c = 5; c >= 0; c--){
                printf("%d + %d + %d\n", dado1[i], dado2[j], dado3[c]);
                count += 1;
            }
        }
        
       if (i == 5){
           printf("\n\nJogadas possíveis: %d", count);
       } 
    }
}

int main(void){

    printf("Todas as possíveis jogadas com 3 dados com faces de 1 a 6:\n");
    Jogadas();


    return 0;
}