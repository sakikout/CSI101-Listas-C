#include <stdio.h>

char Conceito(int a){ // this fuction will set the student concept according to their average in 0 - 100 range.
    char conceito_aluno;

    if (a < 49){ // if it's less than 49, the student will have an D concept.
        conceito_aluno = 'D';
    } else if (a > 49 && a < 69){ // if it's more than 49, but less than 69, the student will have an C concept.
        conceito_aluno = 'C';
    } else if (a > 69 && a < 89){ // if it's more than 69, but less than 89, the student will have an B concept.
        conceito_aluno = 'B';
    } else if (a > 89 && a < 100){ // if it's more than 89, the student will have an A concept.
        conceito_aluno = 'A';
    } else {
        conceito_aluno = 'N'; // if it's the parameter didn't fit the range, it will give a N as an answer.
    }

    return conceito_aluno; // it'll return the character.
}

int main (void){

    int nota;
    char resultado, resposta;

    printf("Insira sua media.");

    do{
    printf("\nNota (de 0 a 100): "); // the user will insert a number between 0 and 100.
    scanf("%d", &nota);

    resultado = Conceito(nota); // we're give the value of Conceito to a variable, since Conceito returns an integer (char).
    printf("Seu conceito é: %c", resultado);

    printf("\nContinuar inserindo notas? 'S' para SIM e 'N' para NAO: "); // the repetition will continue till the user type N to "no".
    scanf(" %c", &resposta);

    } while (resposta == 'S');

    printf("\nFinalizado.\n\n");

    return 0;

}