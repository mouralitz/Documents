#ifndef PILHA_H
#define PILHA_H
#include <stdio.h>
#define MAX_PILHA 100
//Tipo Abstrato de Dado

typedef int tp_item;

typedef struct{
int topo;
tp_item item [MAX_PILHA];
}tp_pilha;

//inicializando a pilha
void inicializa_pilha(tp_pilha *p){
p->topo = -1;
}

//verificando se a pilha está vazia
int pilha_vazia(tp_linha *p){
if (p->topo == -1) return 1;
return 0;
}

//verificando se a pilha está cheia
int pilha_cheia(tp_pilha *p){
if (p->topo == (MAX_PILHA - 1)) return 1;
return 0;

}

#endif
