#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

void push(int i);
int pop(void);

int *tos, *p1, stack[SIZE];

void main(){
    printf("Ola MUndo\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=\n");
    int escolha;

    printf("Escolha:\n[ 1 ] - Exemplos Ponteiros\n[ 2 ] - Exemplo Comparação Ponteiro/ Par de Rotinas de Pilha ");
    scanf("%i", &escolha);
    if(escolha == 1){
        ponteiro();
        ponteiro2();
    } else if(escolha == 2){

        int value;
        tos = stack; // Faz tos conter o topo da pilha
        p1 = stack; // Inicializa p1

        do
        {
            printf("Digite o valor: ");
            scanf("%d", &value); // value recebe o valor digitado pelo usuário
            if(value != 0 ) push(value);
            else printf("valor do topo é %d\n", pop());
        } while (value != -1);
        

    }


}

void ponteiro(){
    float x, y;
    int *p;
    // O Próximo commando faz com que p (que é ponteiro para inteiro) aponte para um float
    p = &x; // p recebe o endereço de x

    // Próximo comando não funciona como esperado
    y = *p;

}

void ponteiro2() {

    int x;
    int *p1, *p2;

    p1 = &x; // Recebe o endereço de X
    p2 = p1; // p2 recebe o conteúdo de p1, que recebe o endereço de X

    printf("%p\n", p2); //Printa o endereço de memória de P2, que recebe o Endereço de memória de P1, que recebeu o Endereço de memória de X

}

/*

-- Resumo
existem apenas duas operações aritméticas que podem ser usadas com ponteiros:
adição e subtração. Para entender o que ocorre na aritmética de ponteiro, consideremos p1 um ponteiro para um inteiro com o valor atual de 2000.
Arruma, também, que os inteiros são de 2 bytes, após a expressão:

p1++;

p1 contém 2002, não 2001. Cada vez que p1 é incrementado, ele aponta para o próximo inteiro. O mesmo é verdade nos decrementos. Por exemplo, assumindo que p1 tem o valor 
de 2000, a expressão:

p1--;

faz com que p1 receba o valor de 1998

*/

void push(int i){

    p1++;
    if(p1==(tos+SIZE)) {
        printf("Estourou a Pilha!!");
        exit(1);
    }
    *p1 = i;
}

pop(void){
    if(p1==tos) {
        printf("Estourou a Pilha");
        exit(1);
    }
    p1--;
    return *(p1+1);
}

