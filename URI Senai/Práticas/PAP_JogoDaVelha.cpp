#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "JOGODAVELHA.h"

int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int tam = 3, opcao, grav = 0, venceu = 0;
	int linha, coluna, nJogadores = 2, vitoria = 3;
	
	//Menu
	for(int i = 0; i != 1; ){
		printf("*** J O G O  D A  V E L H A ***\n");
		printf("*******************************\n");
		printf("Opcoes:\n");
		printf("1:Iniciar Jogo\n");
		printf("2: Definir quantidade de jogadores (Definido : %d)\n", nJogadores);
		printf("3: Definir tamanho do tabuleiro (Definido : %d)\n", tam);
		printf("4: Ativar/Desativar gravidade");
		if(grav == 1){
			printf(" (Gravidade Ativada!!!)\n");
		}
		else{
			printf(" (Gravidade Desativada!!!)\n");
		}
		printf("5: Definir sequencia de vitoria (Definido : %d)\n", vitoria);
		scanf(" %d", &opcao);
		switch(opcao){
			case 1:{
				i = 1;
				break;
			}
			case 2:{
				printf("Quantos jogadores querem jogar?\n");
				scanf(" %d", &nJogadores);
				break;
			}
			case 3:{
				printf("Qual sera o tamanho do tabuleiro?\n");
				scanf(" %d", &tam);
				vitoria = tam;
				break;
			}
			case 4:{
				if(grav == 0){
					grav = 1;
				}
				else{
					grav = 0;
				}
				break;
			}
			case 5:{
				printf("Digite a nova sequencia de vitoria:\n");
				scanf(" %d", &vitoria);
				break;
			}
		}
		system("cls");
	}
	
	//Preenchendo informações a respeito dos jogadores.
	
	char nomes[nJogadores][100];
	char simbolos[nJogadores];
	
	for(int i = 0; i < nJogadores; i++){
	printf("Informe o nome do jogador %d: \n", i + 1);
	scanf(" %[^\n]s", nomes[i]);
	printf("%s, qual símbolo você gostaria de utilizar? \n", nomes[i]);                                                                                             
	scanf(" %c", &simbolos[i]);
	}	//.
	
	char tabuleiro[tam][tam];	//.
	
	inicializa_matriz(tam, tabuleiro[0]);
	
	
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
		
		printf("Vez de %s (%c)\n\n", nomes[i % nJogadores], simbolos[i % nJogadores]);
		imprime_matriz(tam, tabuleiro[0]); 
		
		//Preenchedo tabuleiro, e verificando se a posição é válida para a jogada.
		for( ; ;){
			printf("Digite as coordenadas\n");
			scanf(" %d %d",&linha, &coluna);
			if(tabuleiro[linha][coluna] == '\0' && grav == 0){
				tabuleiro[linha][coluna] = simbolos[i % nJogadores];
				system("cls");
				break;
			}
			else if(grav == 1 && ((linha == tam-1 && tabuleiro[linha][coluna] == '\0') || (tabuleiro[linha +1][coluna] != '\0'))){
				tabuleiro[linha][coluna] = simbolos[i % nJogadores];
				system("cls");
				break;	
			}
			else{
				printf("Posicao invalida!!!!!!!!!!!\nTente Novamente!\n");
			}
		}
		venceu = horizontal(tam, tabuleiro[0], vitoria);
        if(venceu == 0)
        venceu = vertical(tam, tabuleiro[0], vitoria);
        if(venceu == 0)
        venceu = diagonal_secundaria(tam, tabuleiro[0], vitoria);
        if(venceu == 0)
        venceu = diagonal_principal(tam, tabuleiro[0], vitoria);
        if(venceu != 0){
        	//system("cls");
        	imprime_matriz(tam, tabuleiro[0]);
        	printf("\n\tGanhador : %s!!!\n", nomes[i % nJogadores]);
        	break;
        }
	}	//.
	

	return 0;
}
