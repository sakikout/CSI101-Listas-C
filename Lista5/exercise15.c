#include <stdio.h>
#include <string.h>

void strins (char str[], char c, int pos){
    int i, j = 0, tam = strlen(str) + 1;
    char nova_string[tam];

    for (i = 0; i < tam; i++, j++){
        nova_string[j] = str[i];

        if (i = pos){
            nova_string[j] = c;
            j--;
        }
    }

    printf("A nova palavra é:");
    puts(nova_string);

}

int main (void){
    char string[11], caractere;
    int posicao;

    printf("Insira uma palavra: ");
    fgets(string, 11, stdin);

    printf("Insira um caractere: ");
    scanf("%c", &caractere);

    printf("Insira a posição para inserção do caractere: ");
    scanf("%d", &posicao);
    

    strins(string, caractere, posicao);


return 0;
}