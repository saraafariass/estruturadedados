// exemplo de listas 


#include <stdio.h>
#include <stdbool.h>

#define MAX 100 // tamanho máximo da lista

int lista[MAX];
int tamanho = 0;

bool listaCheia(){

    return tamanho >= MAX;

}

bool listaVazia(){
    
    return tamanho == 0;
}

void insereFinal(int valor){
    if(!listaCheia()){
        lista[tamanho] = valor;
        tamanho++;

    } else {

        printf("A lista está cheia");
    }

}

void removeFinal(){

    if (!listaVazia()){

        tamanho--;

    } else {

        printf("A lista está vazia.\n");
    }
}

void mostraLista(){

    printf("lista: ");
    
    for (int i = 0; i < tamanho; i++){

        printf("%d", lista[i]);

    }

    printf("\n");


}

int encontraElemento(int valor){

    for (int i = 0; i < tamanho; i++){

        if (lista[i] == valor){

            return i;
        }
    }

    return -1; // elemento não encontrado
}

int main (){

    insereFinal(10);
    insereFinal(20);
    insereFinal(30);

    mostraLista();

    int valor_buscado = 10;
    int index = encontraElemento(valor_buscado);

    if (index != -1){

        printf("O elemento %d foi encontrado no índice %d.\n", valor_buscado, index);

    } else {

        printf("O elemento %d não foi encontrado na lista.\n", valor_buscado);


    }

    return 0;
}