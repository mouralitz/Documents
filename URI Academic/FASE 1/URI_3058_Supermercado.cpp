#include <stdio.h>

int main(){
	int n, g;
	float p, precokg, menorpreco=0;
	
	scanf(" %d", &n);
	
	for (int i = 0; i < n; i++){
		scanf(" %f %d", &p, &g);
		precokg = (p*1000)/g;
		if(i == 0){
			menorpreco = precokg;
		}
		else if (precokg < menorpreco){
			menorpreco = precokg;
		}
	}

	printf("%.2f\n", menorpreco);
	
	
	return 0;
}
