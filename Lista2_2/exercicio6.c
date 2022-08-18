// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 2

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

void Triangulo (int a, int b, int c){
    bool resul1, resul2, resul3;

    if ((abs(b - c) > a || a > b + c) && (abs(a - c) > b || b > a + c ) && (abs(a - b) > c || c > a + b ) ){
        resul1 = false;
        resul2 = false;
        resul3 = false;
        printf("\nNão é possível formar um triângulo.");
        
    } else {
        printf("\nÉ possível formar um triângulo.");
    }
}

float P (int A, int B, int C){
    float resultado;
    resultado = (A + B + C) / 2;
    return resultado;
}

int main (void){
    int A, B, C, D, p, lados;
    int Area;
    printf("Insira o valor dos lados do triângulo:\n");
    scanf("%i", &A);
    scanf("%i", &B);
    scanf("%i", &C);
    scanf("%i", &D);

    p = P(A, B, C);
    Area = sqrt(p * (p - A) * (p - B) * (p - C));

    if (Area <= 0){
            switch(Area){
                case '1': 
                    Area = sqrt(p * (p - A) * (p - B) * (p - D));
                    break;
                case '2':
                    Area = sqrt(p * (p - A) * (p - D) * (p - C));
                    break;
                case '3':
                    Area = sqrt(p * (p - D) * (p - B) * (p - C));
                    break;
                default:
                    printf("N");
                    break;
            }
    } else {
        printf("S");
    }
    
    Triangulo(A,B,C);
    
    return 0;
}