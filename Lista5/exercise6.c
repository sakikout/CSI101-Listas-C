#include <stdio.h>

void altera_Vetor(int vt[], int tam){
    int i;
    for (i = 0; i < tam; i++){
        if (i <= 3){
            vt[i] = -1;
        }

        if(i = 10){
            vt[i] = -10;
        }

        if(i >= 17){
            vt[i] = -1;
        }
        
        else {
            vt[i] = vt[i];
        }
    }
}

int main (void){

    int i, tamanho;

    printf("Insira a quantidade de numeros do vetor: ");
    scanf("%d", &tamanho);
    
    int v[tamanho];

    for (i = 0; i < tamanho; i++){
        printf("\nNumero %d: ", i + 1);
        scanf("%d", &v[i]);
    }
    
    printf("\nVetor contém:");
    for (i = 0; i < tamanho; i++){
        printf("%d ", v[i]);
    }

    altera_Vetor(v, tamanho);

    printf("\nVetor novo contém: ");
    for (i = 0; i < tamanho; i++){
        printf("%d, ", v[i]);
    }

    return 0;
}