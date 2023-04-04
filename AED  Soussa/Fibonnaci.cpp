#include <stdio.h>

int fibonacci(int n){
	if (n == 1 || n == 2){
		return 1;
	}
	else {
		return fibonacci(n-2) + fibonacci(n-1);
	}
}

int main(void){
	int x;
	scanf("%d", &x);
	x = (fibonacci(x));
	printf("Progresso Aurea: %d", x);
}
