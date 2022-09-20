#include <stdio.h>

void Multiplicar(int vt1[], int vt2[], int vt3[], int tam){
    int i;

    printf("\nMultiplicando Vetor 1 e Vetor 2..");

    for (i = 0; i < tam; i++){
        vt3[i] = vt1[i] * vt2[i];
    }

    printf("\nVetor resultante: ");
    for (i = 0; i < tam; i++){
        printf(" %d ", vt3[i]);
    }
    
}

int main (void){

    int v1[10], v2[10], v3[10], i;

    printf("Insira 10 numeros para o vetor 1: ");

    for (i = 0; i < 10; i++){
        printf("\nNumero %d: ", i + 1);
        scanf("%d", &v1[i]);
    }

    printf("\nInsira 10 numeros para o vetor 2: ");

     for (i = 0; i < 10; i++){
        printf("\nNumero %d: ", i + 1);
        scanf("%d", &v2[i]);
    }

    printf("\nVetor 1 contém:");
    for (i = 0; i < 10; i++){
        printf(" %d ", v1[i]);
    }

    printf("\nVetor 2 contém:");
    for (i = 0; i < 10; i++){
        printf(" %d ", v2[i]);
    }

    Multiplicar(v1, v2, v3, 10);

    return 0;
}
