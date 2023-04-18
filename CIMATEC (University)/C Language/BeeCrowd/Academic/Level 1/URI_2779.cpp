#include <stdio.h>

int main(void){
	int n[100] = {0}, m, x, a, cont = 0;
	
	scanf(" %d", &a);
	
	scanf(" %d", &m);
	for (int i=0; i<m; i++){
		scanf(" %d", &x);
		n[x-1] = 1;
	}
	for (int i=0; i < a; i++){
		if(n[i] == 1){
			cont++;
		}
		
	}
	
	printf("%d\n", a-cont);
	
	
	return 0;
}
