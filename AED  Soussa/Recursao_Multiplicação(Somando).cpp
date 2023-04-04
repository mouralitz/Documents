#include <stdio.h>

int recursao (int n, int vezes){
	int a = n;
	int b = vezes;
	if (vezes == 0){
		return vezes;
	}
	else 
		return n + recursao(n, vezes - 1);
	}

int main(){
	
	int n, vezes;
	printf("%d", scanf("%d %d", &n, &vezes) * recursao(n, vezes) / 2);
	
	
	return 0;
}
