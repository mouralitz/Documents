#include <stdio.h>

int main(){
	int n;
	char posicao, copo[3], troca = '\0';
	
	scanf(" %d %c", &n, &posicao);
	if(posicao == 'A'){
		copo[0] = 'm';
	}
	else if(posicao == 'B'){
		copo[1] = 'm';
	}
	else{
		copo[2] = 'm';
	}
	
	int v[n];
	
	for (int i = 0; i < n; i++){
		scanf(" %d", &v);
	}
	for (int i = 0; i < n; i++){
		if(v[i] == 1){
			troca = copo[0];
			copo[0] = copo[1];
			copo[1] = troca;
		}
		else if(v[i] == 2){
			troca = copo[1];
			copo[1] = copo[2];
			copo[2] = troca;
		}
		else{
			troca = copo[2];
			copo[2] = copo[0];
			copo[0] = troca;
		}
	}
	
	if(copo[0] == 'm'){
		printf("A\n");
	}
	else if(copo[1] == 'm'){
		printf("B\n");
	}
	else{
		printf("C\n");
	}
	
	return 0;
}
