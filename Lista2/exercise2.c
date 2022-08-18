// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 2

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float countA (float a, float b, float c, float d, float e, float f){
    float result;
    result = (a * (c + d))/ (b * (e + f));
    return result;
}

float countB (float a, float b, float c, float d, float e, float f){
    float result, sum;
    sum = b + c;
    result = ((pow(a, sum) / (e + f)) + d);
    return result;
}

float countC (float a, float b, float c, float d, float e, float f){
    float result, sum;
    sum = c + d;
    result = ((a + (pow(sum, 2)/ pow(b, 2)) - d) * (1/c));
    return result;
}

float countD (float a, float b, float c, float d, float e, float f){
    float result;
    result = (((-b) + sqrt((pow(b,2) - (4 * a * c)))) / (2 * a));
    return result;
}


int main (void){

    float A, B, C, D, E, F, resultadoA, resultadoB, resultadoC, resultadoD;
    A = 1.5;
    B = 4;
    C = 2;
    D = 3;
    E = 1.2;
    F = 4.3;


    printf("Serão realizadas as seguintes operações para A = 1.5, B = 4, C = 2, D = 3, E = 1.2 e F = 4.3:");

    printf("\nOperação A: A x ( C + D) / B x (E + F)");
    resultadoA = countA(A, B, C, D, E, F);
    printf("\nResultado: %f", resultadoA);
    
    printf("\nOperação B: A^(B+C) / (E + F) + D");
    resultadoB = countB(A, B, C, D, E, F);
    printf("\nResultado: %f", resultadoB);

    printf("\nOperação C: A + (C + D)^2 / (B)^2 - D");
    resultadoC = countC(A, B, C, D, E, F);
    printf("\nResultado: %f", resultadoC);

    printf("\nOperação D: -B + RAIZ(B^2 - 4 x A x C) / 2 x A");
    resultadoD = countD(A, B, C, D, E, F);
    printf("\nResultado: %f", resultadoD);

    char resp;
    printf("\n\nDeseja tentar com outros valores? S (SIM) ou N (NAO): ");
    scanf("%c", &resp);

    if(resp = "S"){
        float newA, newB, newC, newD, newE, newF, newResultB, newResultA, newResultC, newResultD;
        printf("\nA:");
        scanf("%f", &newA);

        printf("\nB:");
        scanf("%f", &newB);

        printf("\nC:");
        scanf("%f", &newC);

        printf("\nD:");
        scanf("%f", &newD);

        printf("\nE:");
        scanf("%f", &newE);

        printf("\nF:");
        scanf("%f", &newF);

        printf("\nOperação A: A x ( C + D) / B x (E + F)");
        newResultA = countA(newA, newB, newC, newD, newE, newF);
        printf("\nResultado: %f", newResultA);
    
        printf("\nOperação B: A^(B+C) / (E + F) + D");
        newResultB = countB(newA, newB, newC, newD, newE, newF);
        printf("\nResultado: %f", newResultB);

        printf("\nOperação C: A + (C + D)^2 / (B)^2 - D");
        newResultC = countC(newA, newB, newC, newD, newE, newF);
        printf("\nResultado: %f", newResultC);

        printf("\nOperação D: -B + RAIZ(B^2 - 4 x A x C) / 2 x A");
        newResultD = countD(newA, newB, newC, newD, newE, newF);
        printf("\nResultado: %f", newResultD);
    } else if (resp = "N") {
        printf("Finalizado.");
    }

        return 0;
}