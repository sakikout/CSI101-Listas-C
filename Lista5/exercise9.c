#include <stdio.h>
#include <string.h>

int strichr(char str[],char c){
    int i, pos = 0, tam = strlen(str);
    
    for(i = 0; i < tam; i++){
        if(str[i] == c){
            pos = i;
            break;
        } else{
            pos = -1;
        }
    }

    return pos;
}

int main (void){
    int ocorrencia;
    char string[51], caractere = 'c';

    printf("Insira uma frase curta ou palavra: ");
    fgets(string, 51, stdin);
    //printf("\n%s", string);
    
    ocorrencia = strichr(string, caractere);
    //printf("%d\n", ocorrencia);

    if (ocorrencia >= 0){
        printf("\nPosiçao de ocorrencia do caractere %c: string[%d]\n", caractere, ocorrencia);
    } else {
        printf("\nNão há ocorrencia do caractere %c na string fornecida.\n", caractere);
    }
    
    /*
    if(strchr(string, caractere) != NULL){
        printf("\nHá ocorrencia do caractere %c na string fornecida.\n", caractere);
    }
    */

    return 0;
}