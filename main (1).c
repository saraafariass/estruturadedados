/* Implemente as funções "ler_pessoa( )" e "mostrar_pessoa( )", as quais devem
receber e mostrar os dados de uma determinada pessoa.*/

#include <stdio.h>
#include <string.h>

// Definindo a estrutura para representar uma pessoa
struct Pessoa {
    char nome[50];
    int idade;
    float altura;
    char telefone[20];

};

//Função para limpar o buffer de entrada
void limpar_entrada(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

// Função para ler os dados de uma pessoa
void ler_pessoa(struct Pessoa *pessoa) {
    printf("Digite o nome da pessoa: ");
    fgets(pessoa->nome, 50, stdin);
    printf("Digite a idade da pessoa: ");
    scanf("%d", &pessoa->idade);
    printf("Digite a altura da pessoa: ");
    scanf("%f", &pessoa->altura);
    printf("Digite o telefone da pessoa: ");
    limpar_entrada();
    fgets(pessoa->telefone, 20, stdin);
}

// Função para mostrar os dados de uma pessoa
void mostrar_pessoa(struct Pessoa pessoa) {
    printf("Nome: %s", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Altura: %.2f\n", pessoa.altura);
    printf("Telefone: %s\n", pessoa.telefone);
}

int main() {
    struct Pessoa pessoa;

    ler_pessoa(&pessoa);  // Chama a função para ler os dados da pessoa

    printf("\nDados da pessoa:\n");
    mostrar_pessoa(pessoa);  // Chama a função para mostrar os dados da pessoa

    return 0;
}