 /*Prova Realizada por Breno Moura e Leonardo Andrade*/
#include <stdio.h>
#include <locale.h>
#include "pilha.h">

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	tp_pilha x, y, z;
	inicializa_pilha(&x);
	inicializa_pilha(&y);
	inicializa_pilha(&z);

	int qtpilha;
	
	printf("Quantos elementos serão empilhados?\n");
	scanf(" %d", &qtpilha);
	
	tp_item e[qtpilha];
	
	for (int i = 0; i < qtpilha; i++){
	printf("Informe o peso do %dº palete, em tonelada EX:(9, 6, 4)\n", i+1);
	scanf(" %d", &e[i]);
	if (e[i] != 9 && e[i] != 6 && e[i] !=4){
		printf("Valor inválido! Reinicie o programa e tente novamente.\n");
		return 0;
	}	
}
	
	
	for (int i = 0; i < qtpilha; i++){	
			if(e[i] == 4){
				push(&z, e[i]);
			}
			else if(e[i] == 6){
				push(&y, e[i]);
			}
			else if(e[i] == 9){
				push(&x, e[i]);
			}
	}
	printf("A Pilha X era antes:\n");
	imprime_pilha(x);
	printf("\n");
	printf("\n");
	printf("A Pilha Y era antes:\n");
	printf("\n");
	imprime_pilha(y);
	printf("\n");
	printf("A Pilha Z era antes:\n");
	printf("\n");	
	imprime_pilha(z);
	printf("\n");
	
	for (int i = 0; i <qtpilha; i++){
		if(e[i] == 6){
			pop(&y, &e[i]);
			push(&x, e[i]);
		}
	}
	for (int i = 0; i < qtpilha; i++){
		if(e[i] == 4){
			pop(&z, &e[i]);
			push(&x, e[i]);
		}
	}
	printf("A sua Pilha é:\n");
	imprime_pilha(x);
return 0;
}
