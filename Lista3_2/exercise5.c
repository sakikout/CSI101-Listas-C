// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 3
#include<stdio.h>

int main(){ 
 
 int n, i, j;

    printf("Insert the amount of numbers from the serie: ");
    scanf("%d", &n);
    
    i = 1;

    for (j = 4; j <= n; j ++){
        printf("%d, %d, %d\n", i, j, j);
        i++;
        

    }
 
 return 0;
}