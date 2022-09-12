// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 3
#include<stdio.h>
#include<math.h>
#include <limits.h>

int main(){ 
 
 int num, even = 0, odd = 0, even_sum = 0, general_sum = 0, num_sum = 0;
 float even_average = 0, general_average = 0;
 int i = 0;

    do{ 
        printf("Insert the %dº number (type '0' to stop): ", i+1);
        scanf("%d", &num);
        i++;

        num_sum += 1;
        general_sum += num;

        if (num %2 == 0){
            even += 1;
            even_sum += num;
        } else {
            odd += 1;
        }

        general_average = (float)general_sum / num_sum;
        even_average = (float)even_sum / even;

    } while (num != 0);

    printf("\nThe total of even numbers inserted is %d\nThe total of odd numbers inserted is %d\nThe average is %.3f\nThe even average is %.3f", even, odd, general_average, even_average);
 
 return 0;
}