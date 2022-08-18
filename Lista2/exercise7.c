// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 2

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (void){

    int escolha;
    float lado;
    float pi;
    pi = 3.14159;
 
    printf("Escolha um número de 1 a 6:");
    printf("\n1 - 2. Calculo da Area e do Perimetro do circulo inscrito em um quadrado;");
    printf("\n3 - 5. Calculo da Area e do Perimetro do circulo circunscrito em um quadrado;");
    printf("\n6. Calculo da area do triangulo equilátero.\n");
    scanf("%i", &escolha);

    if(escolha == 1 || escolha == 2){
        printf("Insira a medida do lado do quadrado: ");
        scanf("%f", &lado);

        float area, perimetro, radius;
        radius = lado / 2;
        area = pow(radius, 2) * pi;
        perimetro = 2 * pi * radius;

        printf("A área do círculo é %f e o seu perímetro é %f.", area, perimetro);
        
        } else if (escolha == 3 || escolha == 4 || escolha == 5){
            printf("Insira a medida do lado do quadrado: ");
            scanf("%f", &lado);

            float area, perimetro, potencia, diametro, radius;
            potencia = pow(lado, 2) + pow(lado, 2);
            diametro = sqrt(potencia);
            radius = diametro / 2;
            area = pow(radius, 2) * pi;
            perimetro = diametro * pi;

            printf("A área do círculo é %f e o seu perímetro é %f.", area, perimetro);

        } else if (escolha >= 6){
            printf("Insira a medida do lado do triangulo: ");
            scanf("%f", &lado);

             float area, alt, potencia;
             potencia = pow(lado,2) - pow((lado/2),2);
             alt = sqrt(potencia);
             area = (lado * alt) / 2;
             printf("A área do triangulo equilátero é %f e o sua altura é %f.", area, alt);
        } else {
            printf("\nInvalido.");
        }

    return 0;
}