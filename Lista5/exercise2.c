#include <stdio.h>

float Media(int vt[], int tam){
    int i, soma_numeros;
    float media;

    for (i = 0; i <tam; i++){
        soma_numeros += vt[i];
    }

    media = (float)soma_numeros / tam;

    return media;
}

void Abaixo_Media(int vetor[], int tamanho, float media_vetor){
    int i;

    printf("\nNumeros abaixo da media do vetor: ");

    for (i = 0; i < tamanho; i++){
        if( vetor[i] < media_vetor){
            printf("%d ", vetor[i]);
        }
    }
}

int main (void){

    int v[20], i;
    float media_res;

    printf("Insira 20 numeros para o vetor: ");

    for (i = 0; i < 20; i++){
        printf("\nNumero %d: ", i + 1);
        scanf("%d", &v[i]);

        if(v[i] < 0){
            printf("\nInsira um numero positivo.");
            printf("\nNumero %d: ", i);
            scanf("%d", &v[i]);
        }
    }
    printf("\nVetor contém:");
    for (i = 0; i < 20; i++){
        printf(" %d ", v[i]);
    }

    media_res = Media(v, 20);
    
    printf("\nMedia do vetor: %.3f", media_res);
    
    Abaixo_Media(v, 20, media_res);

    return 0;
}