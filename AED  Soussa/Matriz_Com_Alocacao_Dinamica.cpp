#include <stdio.h>
#include <stdlib.h>

int main(){
	int **M; //4 Linhas e 3 Colunas
	
	M = (int**)malloc (4 * sizeof (int *));
	
	for(int i = 0; i < 4; i++){
		*(M + i) = (int *)malloc(3 * sizeof (int));
		
		for (int j = 0; j < 3; j++){
			*(*(M + i) + j) = (i * 3) + j + 1;
			printf("%d\t", *(*(M + i) + j));
		}
	}
	printf("\n");
	
	for (int i = 0; i < 4; i++)
		free(M[i]);
	
	free(M);
	M=NULL;	
}
