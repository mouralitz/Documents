#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	char nome1[30], nome2[30];
	
	printf("Informe o nome do jogador 1: \n");
	scanf(" %s", &nome1);
	printf("Informe o nome do jogador 2: \n");
	scanf(" %s", &nome2);
	
	system("pause");
	system("cls");
		
	printf("*** J O G O  D A  V E L H A ***\n");
	printf("*******************************\n");
	printf("Nome do Jogador 1: %s\n", nome1);
	printf("Nome do Jogador 2: %s\n\n\n", nome2);
	printf("Boa sorte jogadores %s e %s!\n", nome1, nome2);
	printf("*******************************\n");


	

	
	return 0;
}
