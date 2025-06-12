#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main(){

    int torre = 5;
    int bispo = 5;
    int rainha = 8;
    int i = 0;
    
    printf("PEÇAS DE CHADREZ\n");

    printf("\n");

    printf("TORRE:\n");

    printf("\n");

    for(int j = 0; j < torre; j++){
        printf("direita\n");
    }
    printf("\n");

    printf("BISPO:\n");

    printf("\n");

    while(i < bispo){
        printf("cima, direita\n");

        i++;
    }
    printf("\n");

    printf("RAINHA:\n");

    printf("\n");

    i = 0;

    do{
        printf("esquerda\n");

        i++;
    }while(i < rainha);

    return 0;
}
