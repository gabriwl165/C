#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lerMatriz(int *pont[10]){
    for(int i = 0; i <= 9; i++){
        for(int j = 0; j <= 9; j++){
            printf("[%i]", pont[i*10 + j]);
        }
        printf("\n");
    }
}

void preencherZero(int *pont[]){
    for (int j = 0; j <= 9 ; j++){
        for (int i = 0; i <= 9; i++){
            
            pont[j*10 + i] = 0;
        }
    }
}

void preencher(int *pont[]) {
    int valor = 99;
    for (int j = 0; j <= 9 ; j++){
        for (int i = 0; i <= 9; i++){
            //printf("%i\n", valor);
            pont[j*10 + i] = valor;
            valor-=1;
        }
    }
}


void main(){
    int matriz[10][10];
    printf("Carregou aqui!\n");
    preencherZero(matriz);
    lerMatriz(matriz);
    preencher(matriz);
    lerMatriz(matriz);
}