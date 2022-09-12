#include <stdio.h>
#include <string.h>

int Palindromo(char str[]){
    int i, count = 0;
    int tamanho = strlen(str) - 1;
    char str2[tamanho];

     for(i = 0; i <= tamanho; i++){
        str2[i] = str[tamanho - i - 1];
        //printf("%c", str2[i]);
    }
    
    int tamanho2 = strlen(str2) - 1;
    //printf("\nTamanho da string invertida: %d\n", tamanho2);
    
    for(i = 0; i < tamanho; i++){
        if(str[i] == str2[i]){
            //printf("\nEq: %c, %c\n", str[i], str2[i]);
            count += 1;
        } else {
            //printf("\nDif: %c, %c\n", str[i], str2[i]);
            count -= 1;
        
        }
    }

    return count;
}


void removeEspacos(char vetor1[], char vetor2[]){
    int i, j, tam = strlen(vetor1);

    for(i = 0, j = 0; i < tam; i++, j++){
        if (vetor1[i] != ' '){
            vetor2[j] = vetor1[i];
           
        } else {
            j--;
        }
    }
    vetor2[j] = 0;
    
}

int main (void){
    int resultado_palindromo, i;
    char string[101], string_copia[101];

    printf("Insira uma frase curta ou palavra: ");
    fgets(string, 101, stdin);
    
    removeEspacos(string, string_copia);
    printf("%s", string_copia);
    
    resultado_palindromo = Palindromo(string_copia);
    
    if (resultado_palindromo > 0){
        printf("\nÉ palindromo.\n");
        
    } else{
        printf("\nNao é palindromo.\n");
    }
    
    
    return 0;
}