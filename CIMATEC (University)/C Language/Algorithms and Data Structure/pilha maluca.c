#include <stdio.h>
#include "PilhaLE.h"

int main(void){
    tp_pilha *pilha;
    tp_item e;

    pilha = inicializa_pilha();

    push(pilha, 10);
    push(pilha, 20);
    push(pilha, 30);
    push(pilha, 40);

    imprime_pilha(pilha);

    pop(pilha, &e);
    imprime_pilha(pilha);

}