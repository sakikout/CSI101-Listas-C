#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ContarVogais(char str[]){
    int i, tam = strlen(str), count_vogais = 0;

    for(i=0; i<= tam; i++){
        if (isupper(str[i])){
         if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
                count_vogais += 1;
            }
        } else if (islower(str[i])){
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
                count_vogais += 1;
            }
        }
    }
    
    return count_vogais;
}


void strinsP(char str[], char c){
    int i, tam = strlen(str), vogais;

    vogais = ContarVogais(str);
    
    char nova_string[tam + vogais];
    int tam2 = strlen(nova_string);

    for (i=0; i <= tam2; i++){
        if (isupper(str[i])){
         if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
                nova_string[i] = c;
                nova_string[i + 1] = str[i];
                i++;
            } else {
                nova_string[i] = str[i];
            }
        } else if (islower(str[i])){
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
                nova_string[i] = c;
                nova_string[i + 1] = str[i];
                i++;
            } else {
                nova_string[i] = str[i];
            }
        }
    }

    printf("A nova palavra é: %s", nova_string);
    

}

int main (void){
    char string[101], caractere = 'p';

    printf("Insira uma frase curta ou palavra: ");
    fgets(string, 101, stdin);
    
    strinsP(string, caractere);
    
    
    return 0;
}