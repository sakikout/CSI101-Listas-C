// CSI101 - 2022.1: Programação de Computadores I
//*Nome....: Beatriz E. Dalfior
//*Matrícula....: 22.1.8012
//*Curso........: Sistemas de Informação
//*Exercícío....: Lista 3

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
int main(){ 

    float peso;
    double conta_peso;
    char resposta;
    int idade;
    int i;

        printf("Digite a idade e o peso:");
        printf("\nIdade: ");
        scanf(" %d", &idade); //o usuário irá inserir a idade, e se for menor que 30, o looping irá parar (ou nem começar).
        
        if (idade < 30 || isalpha(idade) == true){ // isalpha parar determinar se não foi inserido um caractere
            printf("Idade inválida para o cálculo.");
            } else{
        
            printf("\nPeso: ");
            scanf(" %f", &peso);
        
            conta_peso+= peso;
            printf("\nDeseja continuar inserindo? 's' para SIM e 'n' para NAO: "); //para a confirmação se o usuário continuará inserindo pesos
            scanf(" %c", &resposta);

            if (isalpha(resposta) == false || resposta != 's' && resposta != 'n'){ //confirmação se o usuário está digitando os caracteres informados
                printf("\nResposta invalida.\n\n");
                
                } else if (resposta == 's'){ //se a resposta for SIM, o looping continuará acontecendo e será somado os pesos.
                    while (idade >= 30){
                        printf("\nIdade: ");
                        scanf("%i", &idade);

                        printf("\nPeso: ");
                        scanf("%f", &peso);
                
                
                        conta_peso+= peso;
                        printf("\nValor da soma dos pesos: %f\n\n", conta_peso);
                        printf("\nDeseja continuar inserindo? 's' para SIM e 'n' para NAO: "); //para a confirmação se o usuário continuará inserindo pesos
                        scanf(" %c", &resposta);
                    
                        if (resposta== 'n'){ //se a resposta for NAO, o programa finalizará.
                            printf("Finalizado.");
                            return 0;
                        } else if if (isalpha(resposta) == false || resposta != 's' && resposta != 'n'){
                            printf("\nResposta invalida.\n\n");
                        }
                    }

                } else if (resposta== 'n'){ //se a resposta for NAO, o programa finalizará.
                    printf("Finalizado.");
                }
        }
    
    return 0;
}