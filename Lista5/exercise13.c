#include <stdio.h>
#include <string.h>


char eliminarEspacos(char vetor1[], char vetor2[]){
    int i, j, tam = strlen(vetor1);

    for(i = 0, j = 0; i < tam; i++, j++){
        if (vetor1[i] != ' '){
            vetor2[j] = vetor1[i];
           
        } else {
            j--;
        }
    }
    vetor2[j] = 0;
    
    return *vetor2;
}

int main (void){
    char string[101], string_copia_semespacos[101];

    printf("Insira uma frase curta ou palavra: ");
    fgets(string, 101, stdin);

    string_copia_semespacos[101] = eliminarEspacos(string, string_copia_semespacos);

    printf("A frase sem espacos é: %s", string_copia_semespacos);
    
    
    return 0;
}