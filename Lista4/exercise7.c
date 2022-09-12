#include <stdio.h>

int somaintervalo (int n1, int n2){

    int i, n = 0;
    if (n1 < n2){   
        for (i = n1; i <= n2; i++){
            n += i;
        }   
    } else if (n1 > n2){
        for (i = n2; i <= n1; i++){
            n += i;
        }  
    }

    return n;

}

int main (void){

    int numA, numB, resultado;

        printf("\nInsira o intervalo para contar a soma: ");
        printf("1º Numero: ");
        scanf("%d", &numA);

        printf("2º Numero: ");
        scanf("%d", &numB);

        resultado = somaintervalo(numA, numB);

        printf("Soma dos numeros no intervalo (%d, %d): %d\n", numA, numB, resultado);
       


    return 0;

}