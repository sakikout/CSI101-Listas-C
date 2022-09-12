// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 3

#include<stdio.h>
#include<math.h>
#include <limits.h>

int main(){ 
 
 int num, largest, smallest, n;
 int i;

 printf("Insert the amount of numbers: ");
 scanf("%i", &n);

 largest = INT_MIN;
 smallest = INT_MAX;

 for(i=1; i<= n;i++){
    printf("\nInsert the %dº number: ", i);
    scanf("%i", &num);

    if(num > largest){
        largest = num;
    } else if(num < smallest){
        smallest = num;
    }}


 printf("\nThe greatest number is: %d", largest);
 printf("\nThe smallest number is: %d", smallest);
 
 return 0;
}