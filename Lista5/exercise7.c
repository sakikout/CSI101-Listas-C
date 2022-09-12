#include <stdio.h>

void Notas(float vt1[], float vt2[], int tam){
   int i;
   printf("Insira as notas");

    for (i = 0; i < tam; i++){
        printf("\nAluno %d: ", i + 1);
        printf("\nNota 1: ");
        scanf("%f", &vt1[i]);

        printf("Nota 2: ");
        scanf("%f", &vt2[i]);
    }

}

void Medias(float vetor1[], float vetor2[], float vetor3[], int tamanho){
    int i;
    for (i = 0; i < tamanho; i++){
        vetor3[i] = (vetor1[i] + vetor2[i]) / 2;
    }

}

void Resultados(float vetor1[], float vetor2[], float vetor3[], int tamanho){
    int i;
    for (i = 0; i < tamanho; i++){
        printf("\nAluno %d:", i + 1);
        printf("\nNota 1: %.3f\nNota 2: %.3f\nMedia %.3f\n", vetor1[i], vetor2[i], vetor3[i]);
    }

}

int main (void){

    int i;
    float nota1[10], nota2[10], medias[10];

    Notas(nota1, nota2, 10);
    Medias(nota1, nota2, medias, 10);
    Resultados(nota1, nota2, medias, 10);

    return 0;
}