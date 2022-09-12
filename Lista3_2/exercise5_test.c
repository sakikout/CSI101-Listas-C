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
    j = 4; 
    
    while (n > 0){
        printf("%d, ", i);
        n -= 1;
        i++;
        
        printf("%d, ",j);
        n -= 1;
        printf("%d\n",j);
        n -= 1;
        
        j++;

    }
 
 return 0;
}