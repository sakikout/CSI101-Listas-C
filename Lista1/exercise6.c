#include <stdio.h>

    char Trocar(char um, char dois){ //tentativa de trocar o valor de um para ser o de dois;
        if (um != dois){
            int resultado;
            resultado = dois;
            return (resultado);
        }
    }
       

int main (void){

    char A, B;  // declaração das variáveis 
    
    printf("Selecione o valor de A: \n");
    scanf("%c", &A);

    printf("Selecione o valor de B: \n");
    scanf("%c", &B);
    
    int resultado1;
    resultado1 = Trocar(A, B);
    printf("O valor de A antes era %c, agora é %c.", A, resultado1);

    int resultado2;
    resultado2 = Trocar(B, A);
    printf("O valor de B antes era %c, agora é %c.", B, resultado2);


    
    return 0;
  
}