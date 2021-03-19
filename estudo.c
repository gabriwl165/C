#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char letra(char *p);

void main(){
    char frase[100];
    char fraseRefeita[100];
    char *endLetra;
    printf("Digite um frase de até 100 Carcteres(minuscula)");
    fgets(frase, sizeof(frase), stdin);
    for(int i = 0; i < sizeof(frase); i++){
        if( frase[i] != "\0") {
            endLetra = &frase[i];
            char let;
            let = letra(endLetra);
            fraseRefeita[i] == let;
        } else {
            break;
        }   
    }
    printf("%s", fraseRefeita);
}

char letra(char *p) {
    char *endLetra;
    char l = *p;
    char letraRetorno = "a";
    int num = 0;
    if ((l == 'a') && (num == 0)){
        letraRetorno = 'u';

    } else if((l == 'e') && ( num == 0 )){
        letraRetorno = 'o';
        num = 1;

    } else if((l == 'i') && ( num == 0 )){
        letraRetorno = 'u';
        num = 1;

    } else if((l == 'o') && ( num == 0 )){
        letraRetorno = 'a';
        num = 1;

    } else if((l == 'u') && ( num == 0 )){
        letraRetorno = 'e';
        num = 1;

    } else if (num == 0){
        letraRetorno = l;
    }
    printf("%c", letraRetorno);
    return letraRetorno;

}