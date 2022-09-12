#include <stdio.h>
#include <string.h>
#include <ctype.h>

int Vogais(char vetor1[]){
    int i, tam = strlen(vetor1), count_vogais = 0;
    

    for(i = 0; i < tam; i++){
        if (isupper(vetor1[i])){
            if (vetor1[i] == 'A' || vetor1[i] == 'E' || vetor1[i] == 'I' || vetor1[i] == 'O' || vetor1[i] == 'U'){
                count_vogais += 1;

            } else{
                continue;
            }

        } else if (islower(vetor1[i])){
            if (vetor1[i] == 'a' || vetor1[i] == 'e' || vetor1[i] == 'i' || vetor1[i] == 'o' || vetor1[i] == 'u'){
                count_vogais += 1;

            } else{
                continue;
            }
        }
    }

    return count_vogais;

}

int main (void){
    char string[101];
    int res_vogais;

    printf("Insira uma frase curta ou palavra: ");
    fgets(string, 101, stdin);

    res_vogais = Vogais(string);

    printf("A quantidade de vogais na string é: %d", res_vogais);
    
    
    return 0;
}