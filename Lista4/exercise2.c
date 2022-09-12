#include <stdio.h>

struct Variables(){
    int i, j; // global variables;
    int i, k, ra, p; //local variables from main();
    int q, c, soma; // local variables from soma1();
    int ra, k;  //local variables from soma2();
}


int main (void){

    /* repetition (3) --> 
        k = soma1(5, 10) --> 10 + 5 + 10 (i) = 25; ra = soma2(25) --> k = 20 + 25 --> 45;
        k = soma1(45, 10) --> 45 + 5 + 10 (i) = 60; ra = soma2(60) --> k = 60 + 20 --> 80;
        k = soma1(80, 10) --> 80 + 5 + 10 (i) = 95; ra = soma2(95) --> k = 95 + 20 --> 115;

        Output:
            45, 25
            80, 60
            115, 95

    */

    return 0;
}