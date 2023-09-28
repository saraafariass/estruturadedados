#include <stdio.h>

int main (void){

    struct ficha_aluno // tipo de dado
    {
        char nome [50];
        float nota;
        int numero;

    };// definição struct

    struct ficha_aluno aluno;
    
    printf("\n -------------- Cadastro de alunos ------------ \n\n");

    printf("Nome do aluno: ");
    fgets(aluno.nome, 40, stdin);

    printf("Digite o número do aluno: ");
    scanf("%d", &aluno.numero);

    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno.nota);

    printf("\n----------EXIBIÇÃO DOS DADOS-------------\n\n");
    printf("Nome: %s", aluno.nome);
    printf("Número: %d \n", aluno.numero);
    printf("Nota: %.2f \n", aluno.nota);


    return 0;


    
}