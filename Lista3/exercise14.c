// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 3

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

float Salario(){ //esse é o programa de salário e irá calcular a media, o percentual de salarios abaixo de 1000 e qual é o maior salario inserido

    int i, i_reset, sal_total, sal_soma;
    float salario, percentual_1000, media_percentual1000, maior_salario, media_salario;
    char resposta;

        printf("\n\nInsira os salários:");
        sal_total = 0;
        sal_soma = 0;
        percentual_1000 = 0;

        printf("\nInsira o 1º salario: ");
        scanf("%f", &salario);
        
        sal_soma += salario;
        sal_total += 1;
        maior_salario = salario; // o salario será armazenado inicialmente no maior salario
        i = 1;
        i_reset = 0;

    while (salario){ // enquanto salario for verdadeiro..
        for (i = 1; i++;){
            printf("\nInsira o %dº salario: ", i - (i_reset));
            scanf("%f", &salario);
            
            
            sal_total += 1;
            sal_soma += salario;
            media_salario = (float)sal_soma/(float)sal_total;

            if (salario > maior_salario){
            maior_salario = salario; // maior salario sera o novo salario inserido maior que o antigo
            }
            if (salario < 1000){
            percentual_1000 += 1; // contador para caso insirem um salario menor que 1000
            media_percentual1000 = (float)percentual_1000 / (float)sal_total; //percentual dos salarios inseridos que sao abaixode 1000 em relação ao total inserido
            }

            printf("Deseja continuar inserindo? 's' para SIM, 'n' para NAO e 'r' para RESET: "); // caso SIM , perguntará a cada novo salario inserido
            scanf(" %c", &resposta);

            if (resposta == 's'){
                continue; // irá continuar com a inserção. 
            
            } else if (resposta == 'n'){ // caso NAO, irá mostrar o resultado e retornará ao menu
                printf("\nMedia salarial: %.3f\n", media_salario);
                printf("Maior salário: %.3f\n", maior_salario);
                printf("Percentual de pessoas com salário até R$1000,00: %f\n\n", media_percentual1000);
                Menu(); // ira voltar para o MENU
                break;
            
            } else if (resposta == 'r'){ // caso RESET, irá reiniciar o calculo e o contador
                i_reset = i - (i-1); // irá fazer i ser igual a 1
                sal_total = 0;
                sal_soma = 0;
                percentual_1000 = 0;
                maior_salario = 0;
                break;

            } else {
                printf("\nInvalido.\n\n");
                break;
            }
        }
    }
}

float Filhos (){

    int i, i_reset;
    int filhos, soma_filhos, total_filhos;
    float media_filhos;
    char resposta_filhos;

    soma_filhos = 0;
    i_reset = 0;
    media_filhos = 0;
    total_filhos = 0;

    printf("\n\nInsira o número de filhos da 1º família: "); // inserção inicial dos fihos para que filho seja verdadeiro
    scanf("%d", &filhos);
    
    soma_filhos += filhos; // ira contabilizar na soma do looping
    total_filhos += 1;
    i = 1;

    while (filhos){
        for (i = 1; i++;){

            printf("\nInsira o número de filhos da %dº família: ", i - (i_reset));
            scanf("%d", &filhos);

            total_filhos += 1;
            soma_filhos += filhos;
            printf("\nSoma: %d\n", soma_filhos);
            printf("\nTotal: %d\n", total_filhos);
            media_filhos = (float)soma_filhos / (float)total_filhos;


            printf("\nDeseja continuar inserindo? 's' para SIM, 'n' para NAO e 'r' para RESET: ");
            scanf(" %c", &resposta_filhos);
            

            if (resposta_filhos == 's'){ // caso SIM ira prosseguir a contagem
                continue;
                
            } else if (resposta_filhos == 'n'){ // caso NAO ira mostrar o resultado da media de filhos
                printf("\nMédia de filhos da população: %f\n\n", media_filhos);
                Menu(); // ira voltar para o MENU
                break;

            } else if (resposta_filhos = 'r'){ // caso RESET ira reiniciar o calculo da media
                i_reset = i - (i-1);
                break;
            } else {
                printf("\nInvalido.\n\n");
                break;
            }
        }

    }
}

int Menu(){

    int codigo;

    printf("Insira o código do programa que deseja iniciar\n Código 1 - Média Salarial\n Código 2 - Média de Filhos\n Código 3 - Sair\n");
    printf("\nCódigo: ");
    scanf("%d", &codigo);

    switch(codigo){
        case 1: Salario(); // ira iniciar o programa SALARIO
        break;
        
        case 2: Filhos(); // ira iniciar o programa FILHOS
        break;
        
        case 3: printf("\nFinalizado.\n\n"); // ira FINALIZAR o programa
        return 0;
        break;

        default: printf("\nInvalido\n\n");
        return 0;
        break;
    }


}

int main() {

    Menu();    // ira iniciar com o MENU'

    return 0;
}