#include <stdio.h>

int main(){
	
	int l1[3][3], l2[3][3], total[2][3];
	
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			scanf(" %d", &l1[i][j]);
		}
	}
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			scanf(" %d", &l2[i][j]);
		}
	}
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			if(i == 0){
				total[i][j] = l1[j][0] + l1[j][1] + l1[j][2];
			}
			else{
				total[i][j] = l2[j][0] + l2[j][1] + l2[j][2];
			}
			
		}
	}
	
	printf("\n loja 1: \n");
	
	for(int i = 0; i < 3; i++){
		printf("\n");
		
		for(int j = 0; j < 3; j++){
			
			printf("%d ", l1[i][j]);
		}
	}
		
	printf("\n loja 2: \n");
	
	for(int i = 0; i < 3; i++){
		printf("\n");
		
		for(int j = 0; j < 3; j++){
			
			printf("%d ", l2[i][j]);
		}
	}
	
		
	printf("\n total: \n");
	
	for(int i = 0; i < 2; i++){
		printf("\n");
		
		for(int j = 0; j < 3; j++){
			
			printf("%d ", total[i][j]);
		}
	}
	
	return 0;
}
