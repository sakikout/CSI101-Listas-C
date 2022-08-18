 // CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 3

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/* 

Um triângulo retângulo pode ter lados cujos comprimentos são todos inteiros. 
O conjunto de três valores inteiros para os comprimentos dos lados de um triângulo retângulo é chamado de tripla de Pitágoras.
(a, b, c);
(3, 4, 5); -- inteiros
Os comprimentos dos três lados devem satisfazer a relação de que a soma dos quadrados de dois dos lados é igual ao quadrado da hipotenusa. 
a^2 + b^2 = c^2
Escreva um aplicativo para localizar os triplos de Pitágoras para lado1, lado2 e hipotenusa, todos não maiores que 500.
lado1 = raiz de (c^2 - b^2);
lado2 = raiz de (c^2 - a^2);
hipotenusa = raiz de (a^2 + b^2);
lado1, lado2, hipotenusa < 500;
Utilize um loop for triplamente aninhado (encadeado) que tenta todas as possibilidades. 
Esse é um método de computaçãode “força bruta”. 
Você aprenderá futuramente que há muitos problemas interessantes para os quais não há abordagem algorítmica conhecida, a não ser utilizar a pura força bruta.

*/

int main(void){

    int lado1, lado2, hipotenusa, a, b, i, j, c, val_a, val_b;
    //int t_primitivo_1, t_primitivo_t2, t_primitivo_t3;

    printf("Insira o valor de A e B para encontrar os ternos pitagóricos: ");
    printf("\nA: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);
    
    for (i = a; i > 0; i--){
        
        for (j = b; j > 0; j--){
           
            
            val_a = i;
            val_b = j;
                
            lado1 = 2 * val_a * val_b;
            if (a > b || val_a > val_b){
                lado2 = pow(val_a,2) - pow(val_b,2);
            } else {
                lado2 = pow(val_b,2) - pow(val_a,2);
            }
    
            hipotenusa = pow(val_a,2) + pow(val_b,2);
            printf("%d + %d = %d\n", lado1, lado2, hipotenusa);
            
        }
        
    }
    return 0;
}