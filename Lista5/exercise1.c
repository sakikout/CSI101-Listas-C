#include <stdio.h>

void Impares_Pares(int vt[], int tam){
    int i, impares = 0, pares = 0;

    for (i = 0; i <tam; i++){
        if(vt[i] %2 == 0){
            pares += 1;
        } else if (vt[i] %2 != 0){
            impares += 1;
        }
    }

    printf("\nNumeros pares: %d\nNumeros impares: %d\n\n", pares, impares);
}

int main (void){

    int v[20], i;

    printf("Insira 20 numeros para o vetor: ");

    for (i = 0; i < 20; i++){
        printf("\nNumero %d: ", i + 1);
        scanf("%d", &v[i]);
    }
    printf("\nVetor contém:");
    for (i = 0; i < 20; i++){
        printf("%d, ", v[i]);
    }

    Impares_Pares(v, 20);

    return 0;
}