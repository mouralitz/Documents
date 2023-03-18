#include <stdio.h>
#include <stdlib.h>

void insere_vetor(float *notas, int qtd){
	for (int i = 0; i < qtd; i++){
		printf("%.2f\n", notas[i]);
	}
}

int main(){
	char nome[100];
	int qtd;
	float *notas = (float*) malloc (qtd *sizeof(float));

	
	printf("Qual seu nome?\n");
	scanf("%[^\n]s", nome);
	
	printf("Quantas notas deseja inserir?\n");
	scanf(" %d", &qtd);
	
	for (int i = 0; i < qtd; i++){
		scanf("%f", &notas[i]);
	}
	
	
	
	
	return 0;
}
