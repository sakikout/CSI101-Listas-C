#include <stdio.h>

int contaimpar(int n1, int n2){

    int i, n = 0;
    if (n1 < n2){   
        for (i = n1; i <= n2; i++){
            if (i %2 == 0){
                continue;
            } else {
                n += 1;
            }
        }   
    } else if (n1 > n2){
        for (i = n2; i <= n1; i++){
            if (i %2 == 0){
                continue;
            } else {
                n += 1;
            }
        }  
    }

    return n;

}

int main (void){

    int numA, numB, resultado;

        printf("\nInsira o intervalo para contar os impares: ");
        printf("1º Numero: ");
        scanf("%d", &numA);

        printf("2º Numero: ");
        scanf("%d", &numB);

        resultado = contaimpar(numA, numB);

        printf("Numero de impares no intervalo (%d, %d): %d\n", numA, numB, resultado);
       


    return 0;

}