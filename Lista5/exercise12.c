#include <stdio.h>
#include <string.h>


char copiaString(char vetor1[], char vetor2[]){
    int i, tam = strlen(vetor1);

    for(i = 0; i < tam; i++){
        vetor2[i] = vetor1[i];
    }
    return *vetor2;

}

int main (void){
    char string[101], string_copia[101];

    printf("Insira uma frase curta ou palavra: ");
    fgets(string, 101, stdin);

    string_copia[101] = copiaString(string, string_copia);

    printf("A frase/palavra inserida foi: %s", string_copia);
    
    
    return 0;
}