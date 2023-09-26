/*Defina uma variável do tipo registro que tenha dois campos, sendo o
primeiro um vetor de três elementos inteiros e o segundo um valor inteiro.
Faça um programa que:
 Preencha por leitura os valores do primeiro campo (o vetor);
 Imprima os valores contidos nesse campo;
 Some os valores contidos no primeiro campo e preencha o segundo campo com o
resultado da soma;
 Imprima o valor contido no segundo campo*/


#include <stdio.h>
#include <stdlib.h>

struct Registro
{
    int vet[3];
    int soma;
};

int main()
{
    struct Registro valores;

    printf("Digite 3 valores inteiros para realizar a soma:\n");

    for(int i = 0; i <= 2; i++)
    {
        scanf("%d", &valores.vet[i]);
    }

    printf("Valores que serão somados: ");
    for(int i = 0; i <=2; i++)
    {
        printf("%d ", valores.vet[i]);
        if (i < 2){
            printf("+ ");
        }
    }

    valores.soma = 0;

    for (int i = 0; i <= 2; i++)
    {
        valores.soma += valores.vet[i];
    }

    printf("\nResultado da soma: %d", valores.soma);

    return 0;
}