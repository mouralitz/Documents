#ifndef FILA_H
#define FILA_H
#include <stdio.h>
#define MAX 100

typedef int tp_item;

typedef struct {
	tp_item item[MAX];
	int ini, fim;
	// int tam; /*(N�o � uma boa estrat�gia.)*/
}tp_fila;

void inicializa_fila(tp_fila *f){
	f->ini = f->ini = MAX - 1;
	
}

int fila_vazia(tp_fila *f){
	if(f->ini == f->fim) return 1;
	return 0;
}

int proximo (int pos){
	if(pos == MAX - 1) return 0;
	return ++pos;
}

int fila_cheia(tp_fila *f){
	if(proximo(f->fim) == f->ini)
		return 1;
	return 0;
}

int insere_fila(tp_fila *f, tp_item e){
	if(fila_cheia(f))
		return 0; //N�o foi poss�vel adcionar a fila
	f->fim = proximo(f->fim);
	f->item[f->fim] = e;
	return 1;
}

int remove_fila(tp_fila *f, tp_item *e){
	if(fila_vazia(f))
		return 0; //N�o foi poss�vel remover a fila
	f->ini = proximo(f->ini);
	*e = f->item[f->ini];
	return 1;
}

void imprime_fila (tp_fila f){
	tp_item e;
	while(!fila_vazia(&f)){
		remove_fila(&f, &e);
		printf("\n%d", e);
	}
}

int tamanho_fila(tp_fila *f){
	if(fila_vazia(f)) return 0;
	if(f->ini < f->fim) return f->fim - f->ini;
	return MAX - 1 - f->ini + f->fim + 1;
}

#endif
