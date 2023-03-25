#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int tam;
	int linha, coluna, nJogadores;
	
	
	//Preenchendo informações a respeito dos jogadores.
	
	printf("Informe a quantidade de jogadores:\n");
	scanf(" %d", &nJogadores);
	
	char nomes[nJogadores][100];
	char simbolos[nJogadores];
	
	for(int i = 0; i < nJogadores; i++){
	printf("Informe o nome do jogador %d: \n", i + 1);
	scanf(" %[^\n]s", nomes[i]);
	printf("%s, qual símbolo você gostaria de utilizar? \n", nomes[i]);                                                                                             
	scanf(" %c", &simbolos[i]);
	}	//.
	
	
	//Definindo tamanho do tabuleiro.
	printf("Qual o tamanho do tabuleiro, que desejam jogar? \n");
	scanf(" %d", &tam);
	
	char tabuleiro[tam][tam];	//.
	
	//Anulando deslocamentos da matriz.
	for(int i = 0; i < tam; i++){
		for (int j = 0; j < tam; j++){
			tabuleiro[i][j] = ' ';
		}
	}	//.
	
	system("pause");
	system("cls");
		
	printf("*** J O G O  D A  V E L H A ***\n");
	printf("*******************************\n");
	for (int i = 0; i < nJogadores; i++){
	printf("Nome do Jogador %d: %s\n", i+1, nomes[i]);	
	}
	printf("Boa sorte jogadores ");
	for (int i = 0; i < nJogadores - 1; i++){
		printf("%s e ", nomes[i]);
	}
	printf("%s!!!\n", nomes[nJogadores - 1]);
	printf("*******************************\n");
	
	//Printando o tabuleiro.
	for(int i = 0; i < tam*tam; i++){
		printf(" "); // i = max de jogadas para o tamanho do tabuleiro escolhido. 
		for(int a = 0; a < tam; a++)
		printf("  %d  ", a); // a = número das posições referentes as colunas.
		printf("\n");
		for(int j = 0; j < tam; j++){
			printf("%d", j); // int j =  numero das posições referentes as linhas.
			for(int k = 0; k < tam; k++){
				printf("  %c |", tabuleiro[j][k]);
			}
			printf("\n  ");
			if(j < tam-1)
			for(int z = 0; z < tam; z++)
			printf("---*");
			if(j < tam-1)
			printf("---");
			printf("\n");
		}	//.
		
		//Preenchedo tabuleiro.
	printf("Digite as coordenadas\n");
	scanf(" %d %d",&linha, &coluna);
		
		tabuleiro[linha][coluna] = simbolos[i % nJogadores];
		
	system("cls");
	
	
	}	//.
	
	return 0;
}
