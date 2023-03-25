#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int tam;
	int x, y;
	char nome1[30], nome2[30], simbolo1, simbolo2;
	
	printf("Informe o nome do jogador 1: \n");
	scanf(" %[^\n]s", &nome1);
	printf("%s, qual símbolo você gostaria de utilizar? \n", nome1);
	scanf(" %c", &simbolo1);

	
	printf("Informe o nome do jogador 2: \n");
	scanf(" %[^\n]s", &nome2);
	printf("%s, qual símbolo você gostaria de utilizar? \n", nome2);
	scanf(" %c", &simbolo2);
	
	//Definindo tamanho do tabuleiro.
	printf("Qual o tamanho do tabuleiro, que desejam jogar? \n");
	scanf(" %d", &tam);
	
	char tabuleiro[tam][tam];
	
	//Anulando deslocamentos da matriz.
	for(int i = 0; i < tam; i++){
		for (int j = 0; j < tam; j++){
			tabuleiro[i][j] = ' ';
		}
	}
	
	system("pause");
	system("cls");
		
	printf("*** J O G O  D A  V E L H A ***\n");
	printf("*******************************\n");
	printf("Nome do Jogador 1: %s\n", nome1);
	printf("Nome do Jogador 2: %s\n\n", nome2);
	printf("Boa sorte jogadores %s e %s!\n", nome1, nome2);
	printf("*******************************\n");
	

	for(int i = 0; i < tam*tam; i++){
		printf(" ");
		for(int a = 0; a < tam; a++)
		printf("  %d  ", a);
		printf("\n");
		for(int j = 0; j < tam; j++){
			printf("%d", j);
			for(int k = 0; k < tam-1; k++){
				printf("  %c |", tabuleiro[j][k]);
			}
			printf("\n  ");
			if(j < tam-1)
			for(int z = 0; z < tam; z++)
			printf("---*");
			if(j < tam-1)
			printf("---");
			printf("\n");
		}
	printf("Digite as coordenadas\n");
	scanf(" %d %d",&x, &y);
		if(i % 2 == 0){
		tabuleiro[x][y] = simbolo1;
	}
		else{
		tabuleiro[x][y] = simbolo2;
	}
	
	
	}
	
	return 0;
}
