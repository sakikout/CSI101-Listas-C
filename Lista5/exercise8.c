#include <stdio.h>

void Salario(int mat[], float sal[], int tam){
    int i;
    for (i = 0; i < tam; i++){
        printf("\nInsira a matrícula do funcionário %d: ", i + 1);
        scanf("%d", &mat[i]);
        printf("\nInsira o salário do funcionário %d: ", i + 1);
        scanf("%f", &sal[i]);
    }
}

void novoSalario(float novo[], int func[], float sal2[], int tam){
    int i;
     for(i = 0; i < tam; i++){
        if (func[i] %2 == 0){
            novo[i] = sal2[i] * 1.15;
        }
        else {
            novo[i] = sal2[i] * 1.2;
        }
    }
}

int main (void){

    int funcionarios_matricula[5];
    float salario[5], novo_salario[5];
    int i;

    Salario(funcionarios_matricula, salario, 5);
    novoSalario(novo_salario, funcionarios_matricula, salario, 5);

    for (i = 0; i < 5; i++){
        printf("\nFuncionario %d:", i + 1);
        printf("\nSalario base: %.3f", salario[i]);
        printf("\nMatricula: %d", funcionarios_matricula[i]);

        if (funcionarios_matricula[i] %2 == 0){
            printf("\nPercentual de aumento: 15");
        } else {
            printf("\nPercentual de aumento: 20");
        }

        printf("\nSalario corrigido: %.3f", novo_salario[i]);
    }

    return 0;
}