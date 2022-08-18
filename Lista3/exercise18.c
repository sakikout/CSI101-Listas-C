 // CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 3

#include <stdio.h>

 
 //Explique as diferenças entre as instruções de repetições while e for

int main(void){

    int i, numA, numB, soma;
    char resposta;

    printf("O comando WHILE irá repetir enquanto uma instrução for verdadeira.\n");
    printf("Por exemplo: insira 's' se você quer iniciar o programa e 'n' caso não queira: ");
    scanf(" %c", &resposta);

        while(resposta == 's'){
            printf("\nInsira o primeiro numero: ");
            scanf("%d", &numA);

            printf("\nInsira o segundo numero: ");
            scanf("%d", &numB);

            soma = numA + numB;

            printf("\nSoma de %d e %d é %d", numA, numB, soma);
            printf("\nDeseja continuar? 's' para SIM 'n' para NAO: ");
            scanf(" %c", &resposta);


        }
        
    if (resposta =='n'){

        int n, numC, soma2;

        printf("\nA resposta 'n' irá sair do comando WHILE ou nem entrar nele, pois 'resposta' deixou de ser verdadeiro!\n\n");
        printf("\nAgora, o comando FOR irá repetir pelo menos 1 vez até um determinado numero de vezes.\nPor exemplo: Insira a quantidade de numeros a partir de 0 que você deseja somar: ");
        scanf("%d", &n);
        
        numC = 0;
        soma2 = 0;

        for (i = 0; i <= n; i++){
            numC = i;
            soma2 += numC;
        }

        printf("\nA soma de 0 a %d é igual a %d\nE a repetição FOR parou e não continuará\nDiferente da WHILE que poderia continuar\n\n", n, soma2);

    }


    return 0;
}