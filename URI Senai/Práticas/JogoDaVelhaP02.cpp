#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	char nome1[30], nome2[30], tabuleiro[3][3];
	
	for(int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			tabuleiro[i][j] = '\0';
		}
	
	}
	
	printf("Informe o nome do jogador 1: \n");
	scanf(" %s", &nome1);
	printf("Informe o nome do jogador 2: \n");
	scanf(" %s", &nome2);
	
	system("pause");
	system("cls");
		
	printf("*** J O G O  D A  V E L H A ***\n");
	printf("*******************************\n");
	printf("Nome do Jogador 1: %s\n", nome1);
	printf("Nome do Jogador 2: %s\n\n", nome2);
	printf("Boa sorte jogadores %s e %s!\n", nome1, nome2);
	printf("*******************************\n");

	
	
	
		
		printf("  0  1  2\n");
		printf("0  %c | %c | %c\n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
		printf("  ---------\n");
		printf("1  %c | %c | %c\n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
		printf("  ---------\n");
		printf("2  %c | %c | %c\n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);

		

	
	return 0;
}
