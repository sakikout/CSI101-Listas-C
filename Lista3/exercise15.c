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

int Menu(){

    int codigo;

    printf("Insira o codigo da repeticao ou saida:\nCodigo 1 - Repeticao 1\nCodigo 2 - Repeticao 2\nCodigo 3 - Repeticao 3\nCodigo 4 - Repeticao 4\nCodigo 5 - Repeticao 5\nCodigo 6 - Sair\n\nCodigo: ");
    scanf("%d", &codigo);

    switch(codigo){
        case 1: Loop1();
        break;

        case 2: Loop2();
        break;

        case 3: Loop3();
        break;
        
        case 4: Loop4();
        break;
 
        case 5: Loop5();
        break;

        case 6: 
        printf("\nFinalizado.\n\n");
        return 0;
        break;

        default: printf("\nInvalido.\n\n");
        break;
    }
}

int Loop1(){
    int x;
    
    for (x = 2; x <= 13; x += 2){
        printf("%d\n", x);
    }


}

int Loop2(){
    int x;

    for (x = 5; x <= 22; x += 7){
        printf("%d\n", x);
    }
}

int Loop3(){
    int x;

    for (x = 3; x <= 15; x += 3){
        printf("%d\n", x);
    }
}

int Loop4(){
    int x;

    for (x = 1; x <= 5; x += 7){
        printf("%d\n", x);
    }
}

int Loop5(){

    int x;

    for (x = 12; x >= 2; x -= 3){
        printf("%d\n", x);
    }
    
}



int main() {

    Menu();

    return 0;
}