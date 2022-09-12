#include <stdio.h>

void Troca_Vetor(int vt[], int tam){
    int i, j;

    for (i = 0; i < tam; i++){
         vt[i] = vt[tam - i];
    }

    printf("\nNovo vetor: ");

     for (j = 0; j < tam; j++){
        printf("%d ", vt[j]);
    }
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

    Troca_Vetor(v, 20);


    return 0;
}