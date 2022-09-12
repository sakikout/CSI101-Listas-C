// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 3

#include<stdio.h>
#include<math.h>
int main(){ 
 
 int num, positive, negative, n;
 int i;

 printf("Insert the amount of numbers to count: ");
 scanf("%i", &n);

 positive = 0;
 negative = 0;

 for(i=1; i<= n;i++){
    printf("\nInsert the %dº number: ", i);
    scanf("%i", &num);

    if(num > 0){
        positive += 1;
    } else if(num < 0){
        negative += 1;
    }}


 printf("\nThe amount of positive numbers is: %d", positive);
 printf("\nThe amount of negative numbers is: %d", negative);
 
 return 0;
}