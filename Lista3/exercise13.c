// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 3

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, n;

    printf("Insira o numero de asteriscos na base (numeros impares): ");
    scanf("%d", &n);
    
    /* altura = base (n) - i 
        1º linha = espaço == base ,, ast = 2char
        2º linha = espaço == base - 2 ,, ast = 2char + 4char ...
    */
    
    char asteriscos;
    char espacos;
    espacos =' ';
    asteriscos = '*';

    for(i = 0; i <= (n - i); i++){ // o looping inicial é crescente e irá imprimir até alcançar n

        /*
        para fazer um triangulo com bases impares, a altura precisa ser a base - o index (sempre que aumenta n na altura, aumenta a altura atual + altura anterior na base)
        ex.: altura = 2, base =3
             altura = 3, base = 3 + 2 = 5
             altura = 4, base = 4 + 3 = 7
             altura = 5, base = 5 + 4 = 9 ...
        */
        for(j = n - (2*i); j >= 1; j--)  
            printf("%c", espacos); 
        /*
        vai imprimir os espaços, e o x2 é porque o proximo print tem 2 caracteres!
        */

        for(j = 0; j <= i; j++) 
            printf("%c%c", asteriscos, espacos); 

        /*
        esse print irá imprimir 1 vez na primeira linha, 2 vezes na segunda, 3 na terceira, etc..
        completando a linha com n(altura) + 2 colunas
        pois os espaços ocuparão n na primeira, e os asteriscos+espaços ocuparao 2
        ja na segunda, os espaçoes ocuparão n-2, e os asteriscos ocuparao 4, etc
        */

        for(j = 1; j <= i; j++) 
            printf("%c%c", asteriscos, espacos);
        printf("\n"); // espaça as linhas

        /*
        esse print vai imprimir os caracteres restantes do triangulo
        o que impedirá o 2 looping de printar mais que 2, 4, 6, etc... nas linhas superiores
        mas que fará com que printe +2, +4, +6, etc nas linhas inferiores a partir da segunda!
        */
    }
    

    return 0;
}