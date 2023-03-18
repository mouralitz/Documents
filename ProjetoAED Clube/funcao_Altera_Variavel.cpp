#include <stdio.h>

void altera_valor(int *x, int *y){
	*x = *y;
}

int main(){
	int x =0, y=0;

	
	
	printf("Digite o valor de x: \n");
	scanf(" %d", &x);
	printf("Digite o novo valor de x: \n");
	scanf(" %d", &y);
	printf("O valor de x antes era: %d\n", x);
	
	altera_valor(&x, &y);
	printf("O valor de x agora eh: %d\n", x);
	
	return 0;
}
