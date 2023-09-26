/*Escreva um programa de agenda de telefones. Para cada pessoa, devem ser
declarados os seguintes dados:
 nome;
 e-mail;
 telefone;
• O programa deve apresentar um menu de opções que indique o campo a ser
mostrado na tela (saída-padrão).*/



#include <stdio.h>
#include <string.h>

// Definição da estrutura Contato
struct Contato
{
    char nome[50];
    char email[50];
    char telefone[20];
};

int main()
{
    int numContatos = 0;
    struct Contato agenda[100]; // Pode ser ajustado para o número máximo de contatos desejado

    int opcao;
    do
    {
        printf("\nMenu de Opcoes:\n");
        printf("1. Adicionar contato\n");
        printf("2. Mostrar contatos\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            if (numContatos < 100)
            {

                printf("Informe o nome: ");
                scanf("%s", agenda[numContatos].nome);
                printf("Informe o email: ");
                scanf("%s", agenda[numContatos].email);
                printf("Informe o telefone: ");
                scanf("%s", agenda[numContatos].telefone);

                numContatos++;

                printf("Contato adicionado com sucesso!\n");
            }
            else
            {
                printf("A agenda esta cheia. Nao e possivel adicionar mais contatos.\n");
            }
            break;

        case 2:
            if (numContatos > 0)
            {
                printf("\nLista de Contatos:\n");
                for (int i = 0; i < numContatos; i++)
                {
                    printf("Contato %d:\n", i + 1);
                    printf("Nome: %s\n", agenda[i].nome);
                    printf("Email: %s\n", agenda[i].email);
                    printf("Telefone: %s\n", agenda[i].telefone);
                    printf("--------------------------\n");
                }
            }
            else
            {
                printf("Nao ha contatos na agenda.\n");
            }
            break;

        case 3:
            printf("Saindo do programa.\n");
            break;

        default:
            printf("Opcao invalida. Escolha novamente.\n");
        }
    }
    while (opcao != 3);

    return 0;
}