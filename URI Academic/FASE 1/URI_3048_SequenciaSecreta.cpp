#include <stdio.h>

int main(){
	int n, cont = 0, comparador;
	
	scanf(" %d", &n);
	
	int v[n];
	
	for (int i = 0; i < n; i++){
		scanf("%d", &v[i]);
	}

	for (int i = 0; i < n; i++){
		if(i == 0){
			cont ++;
			comparador = v[i];
		}
		else{
			if(v[i] != comparador){
				cont++;
				comparador = v[i];

			}
		}
	}
	
	printf("%d\n", cont);
	
	return 0;
}
