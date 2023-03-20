#include <stdio.h>

int main(){
	int n, m, comparador, cont = 0, posicaon, posicaom, tempoi = 0, tempof = 0, tempototal = 0;
	
	scanf("%d %d", &n, &m);
	
	int a[n], b[m];
	
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	for (int i = 0; i < m; i++){
		scanf("%d", &b[i]);
	}
	
	for(int i = 0; i < m; i++){
		comparador = b[i];
		
		for (int j = 0; j < n; j++){
			if(a[j] != comparador){
				cont++;
				
			}
		}
	}

	printf("%d\n", cont/2);
		
		
	
	
	return 0;
}
