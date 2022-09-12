#include <stdio.h>
#include <string.h>
#include <ctype.h>

void inserir_Vogais(char vetor1[]){
    int i, tam = strlen(vetor1);
    char string_p[tam];
    
    for(i = 0; i < tam; i++){
        if (isupper(vetor1[i])){
            if (vetor1[i] == 'A' || vetor1[i] == 'E' || vetor1[i] == 'I' || vetor1[i] == 'O' || vetor1[i] == 'U'){
                string_p[i] = 'p';

            } else{
                string_p[i] = vetor1[i];
            }

        } else if (islower(vetor1[i])){
            if (vetor1[i] == 'a' || vetor1[i] == 'e' || vetor1[i] == 'i' || vetor1[i] == 'o' || vetor1[i] == 'u'){
                string_p[i] = 'p';

            } else{
                string_p[i] = vetor1[i];
            }
        }
    }

    printf("\nA nova string na linguagem P é: %s", string_p);

}

int main (void){
    char string[101];

    printf("Insira uma frase curta ou palavra: ");
    fgets(string, 101, stdin);

    inserir_Vogais(string);
    
    
    return 0;
}