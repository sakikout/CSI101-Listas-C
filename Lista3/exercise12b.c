// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 3

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, n;

    printf("Insira o numero de asteriscos: ");
    scanf("%d", &n);
    
    char asteriscos;
    char espacos;
    espacos =' ';
    asteriscos = '*';

    for(i = 1; i <= n; i++){ // o looping inicial é crescente e irá imprimir até alcançar n
        for(j = n - i; j >= 1; j--)  // o contador de espaços ira diminuir até a linha final. ele começa com -1 para iniciar o primeiro asterisco na primeira linha
            printf("%c", espacos); // imprime os espaços :)
        for(j = 1; j <= i; j++) // os asteriscos irão aumentar até chegar ao contador inicial (n) e começarao a ser printados depois dos espaços
            printf("%c", asteriscos); // imprime os *!
        printf("\n"); // espaça as linhas
    }
    
    /* ex.: (-) espaços (*) asteriscos
    n = 5
    espacos = 4 linhas ( +1 asterisco)
    asteriscos = 5 linhas (0 espaços)
    ----*
    ---**
    --***
    -****
    *****
    a cada linha: contador inicial +1 (mas as colunas ainda são igual a n = 5);
    */

    return 0;
}