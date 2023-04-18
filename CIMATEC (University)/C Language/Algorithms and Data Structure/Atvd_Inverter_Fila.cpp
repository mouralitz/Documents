#include <stdio.h>
#include "fila.h"
#include "pilha.h"

tp_fila inverte_fila(tp_fila fila){
	tp_pilha pilha;
	tp_item e;
	inicializa_pilha(&pilha);
	
	
	while(!fila_vazia(&fila)){
		remove_fila(&fila, &e);
		push(&pilha, e);
	}
	while(!pilha_vazia(&pilha)){
		pop(&pilha, &e);
		insere_fila(&fila, e);
	}
	return fila;
}

int main(){
	tp_fila fila;
	inicializa_fila(&fila);
	
	int n;
	scanf(" %d", &n);
	
	tp_item e;
	
	//Preenchendo a fila!
	for (int i = 0; i < n;  i++){
		scanf(" %d", &e);
		insere_fila(&fila, e);
	}
	printf("A fila antes era: \n");
	imprime_fila(fila);
	printf("\nA sua fila agora eh: \n");
	fila = inverte_fila(fila);
	imprime_fila(fila);
	
	return 0;
}
