#ifndef JOGODAVELHA_H
#define JOGODAVELHA_H
#include <stdio.h>

void inicializa_matriz(int tam, char *tabuleiro){
	for(int i = 0; i< tam*tam; i++, tabuleiro++){
		*tabuleiro = '\0';
	}
}

void imprime_matriz(int tam, char *tabuleiro){
	for(int a = 0; a < tam; a++){
		printf("  %d  ", a);
		} // a = número das posições referentes as colunas.
		printf("\n");
		for(int j = 0; j < tam; j++){
			printf("%d", j); // int j =  numero das posições referentes as linhas.
			for(int k = 0; k < tam; k++, tabuleiro++){
				if(*tabuleiro == '\0'){
					printf("    ");
				}
				else {
					printf("  %c ", *tabuleiro);
				}
				if(k < tam-1){
					printf("|");
				}
			}
			printf("\n  ");
			if(j < tam-1)
			for(int z = 0; z < tam; z++)
			printf("----");
			if(j < tam-1)
			printf("---");
			printf("\n");
		}	
	}
	
int vertical(int tam, char *tabuleiro, int vitoria){
	int cont = 0;
    char *teste;
    for(int i = 0 ; i < tam ;i++){
            cont = 0;
        for(int j = 0 ; j < tam ;j++){
            if(j > 0)
            teste = tabuleiro - tam;
            if(j > 0)
            if(*tabuleiro != '\0'){
                if(*tabuleiro == *teste){
                    cont++;
                }
            }
            else{
                cont=0;
            }
            tabuleiro += tam;
            if(cont == vitoria - 1){
            return 1;
            }
        }
        tabuleiro -= tam*(tam-1);
        tabuleiro++;
    }
    return 0;
}


int horizontal(int tam, char *tabuleiro, int vitoria){
	int cont = 0;
    char *teste;
    for(int i = 0 ; i < tam ;i++){
            cont = 0;
        for(int j = 0 ; j < tam ;j++){
            if(j > 0)
            tabuleiro = tabuleiro-1;
            if(j > 0)
            if(*tabuleiro!='\0'){
                if(*tabuleiro == *teste){
                    cont++;
                }
            }
            else{
                cont=0;
            }
            tabuleiro++;
            if(cont == vitoria-1){
            return 1;
            }
        }
    }
    return 0;
}


int diagonal_principal(int tam, char *tabuleiro, int vitoria){
    int cont = 0;
    char *teste;
    for(int i = 0 ; i < tam*tam; i++){
            cont = 0;
        for(int j = 0; j < tam; j++){
            if(j > 0)
            teste = tabuleiro - (tam+1);    
            if(j > 0)
            if(*tabuleiro != '\0'){
                if(*tabuleiro == *teste){
                    cont++;
                }
            }
            else{
                cont = 0;
            }
            tabuleiro += tam+1;
            if(cont == vitoria-1){
            return 1;
            }
        }
        tabuleiro -= tam * (tam-1);
        tabuleiro++;
    }
    return 0;
}


int diagonal_secundaria(int tam, char *tabuleiro, int vitoria){
    int cont = 0;
    char *teste;
    for(int i = 0; i < tam*tam; i++){
            cont = 0;
        for(int j = 0; j < tam; j++){
            if(j > 0)
            teste = tabuleiro - (tam-1);    
            if(j > 0)
            if(*tabuleiro != '\0'){
                if(*tabuleiro == *teste){
                    cont++;
                }
            }
            else{
                cont = 0;
            }
            tabuleiro += (tam-1);
            if(cont == vitoria-1){
            return 1;
            }
        }
        tabuleiro -=tam * (tam-1);
        tabuleiro++;
    }
    return 0;
}

#endif
