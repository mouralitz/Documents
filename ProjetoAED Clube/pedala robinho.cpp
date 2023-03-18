#include <stdio.h>
#include <stdlib.h>

void altera_nota( float *notas){
  *notas = 7;
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
	
	for (int i = 0; i < qtd; i++){
		printf("A %dª nota era: %.2f\n",i+1, notas[i]);
	}
	
  for (int i = 0; i < qtd; i++){
  	altera_nota(&notas[i]);
		printf("A %dª nota agora eh: %.2f\n",i+1, notas[i]);
	}
	
	return 0;
}
