#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int fatorial (int n){
	if (n == 0){
		return 1;
	}
	
	else{
	return n * fatorial(n-1);
	}
}
int main(){
	int x;
		
	scanf("%d", &x);
	x = fatorial(x);
	printf("%d\n", x);
}
