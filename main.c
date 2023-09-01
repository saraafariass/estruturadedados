/*Uma estrutura descreve os veículos de uma determinada montadora,
utilizando os campos a seguir:
 marca;
 ano de fabricação;
 cor;
 preço
• Escreva um programa com a estrutura "Carro";
• Atribua valores aos campos;
• Imprima na tela um relatório com os dados entrados */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Carro
{
    char marca[20];
    int anoDeFabricacao;
    char cor[15];
    float preco;
};

int main ()
{
    char resposta;
    char modelo[20];

    struct Carro uno;

    strcpy(uno.marca, "Fiat");
    uno.anoDeFabricacao = 2008;
    strcpy(uno.cor, "Prata");
    uno.preco = 20000;

    printf("\n\n**EXIBICAO DOS DADOS DO 'UNO' **\n");
    printf("\n  Marca: %s", uno.marca);
    printf("\n  Ano de fabricacao: %d", uno.anoDeFabricacao);
    printf("\n  Cor: %s", uno.cor);
    printf("\n  Preco: R$%.2f\n", uno.preco);

    printf("\nDeseja registrar outro modelo(s/n)? ");
    scanf("%c", &resposta);

    do{

        struct Carro novoModelo;

        printf("\nModelo: ");
        scanf("%s", modelo);
        printf("Marca: ");
        scanf("%s", novoModelo.marca);
        printf("Ano de fabricacao: ");
        scanf("%d", &novoModelo.anoDeFabricacao);
        printf("Cor: ");
        scanf("%s", novoModelo.cor);
        printf("Preco: ");
        scanf("%f", &novoModelo.preco);

        printf("\n\n**EXIBICAO DOS DADOS DO '%s' **\n", modelo);
        printf("\n  Marca: %s", novoModelo.marca);
        printf("\n  Ano de fabricacao: %d", novoModelo.anoDeFabricacao);
        printf("\n  Cor: %s", novoModelo.cor);
        printf("\n  Preco: R$%.2f\n", novoModelo.preco);

        printf("\n\nDeseja registrar outro modelo(s/n)? ");
        scanf(" %c", &resposta);

    }while (resposta == 's' || resposta == 'S');

        printf("\nFim!");

    return 0;

}