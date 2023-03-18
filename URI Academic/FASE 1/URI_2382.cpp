#include <stdio.h>
#include <math.h>

int main(void){
	
	int l, a, p, r, ac, ae;
	ae = 4 * 3.14159 * (r * r);
	ac = a * l * p ;
	
	scanf(" %d %d %d %d", &l, &a, &p, &r);
	
	/*if( ae > ac){
		printf("S\n");
	} */
	if(sqrt(l*l + a*a + p*p) > r * 2){
		printf("N\n");
	}
	else if( l * a > (2*r*3.14159*r) || a * p > (2*r*3.14159*r) || l * p > (2*r*3.14159*r)){
		printf("N\n");
	}
	else if(l > 2 * r || a > 2 * r || p > 2 * r){
		printf("N\n");
	}
	else if( ae > ac){
		printf("S\n");
	}
	else{
		printf("S\n");
	}
	
	return 0;
}
