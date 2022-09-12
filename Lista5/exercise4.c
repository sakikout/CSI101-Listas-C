#include <stdio.h>
#include <limits.h>

void Maior_Menor(int vt[], int tam){
    int i, maior = INT_MIN, menor = INT_MAX, indice_menor, indice_maior;

    for (i = 0; i < tam; i++){
        if(vt[i] > maior){
            maior = vt[i];
            indice_maior = i;
        }
        if (vt[i] < menor){
            menor = vt[i];
            indice_menor = i;
        }
    }

    printf("\nMaior numero do vetor: %d[%d]\nMenor numero do vetor: %d[%d]\n\n", maior, indice_maior, menor, indice_menor);
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

    Maior_Menor(v, 20);

    return 0;
}