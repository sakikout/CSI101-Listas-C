#include <stdio.h>
#include <math.h>

int main (int argc, char const *argv[]){

    int fatorial = 1, n, i;

    printf("Insert a number to calculate its fatorial: ");
    scanf("%d", &n);
    


    for (i = 1; i <=n; i++){
        fatorial = fatorial * i;
    }

    printf("The factorial of %d is %d.", n, fatorial);


    return 0;
}