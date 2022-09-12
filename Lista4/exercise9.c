#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int dado (){
    int num;
    srand((unsigned) time(NULL));
    num = (rand() % 6) + 1;

    return num;

}

int main (void){

    int i, tecla;
    
    printf("Numero de 1 a 6 sorteado: ");
    
       for ( i = 0; i <= 1; i++){
           tecla =  dado();
       }
        
        printf("%d\n", tecla);
        

    return 0;

}