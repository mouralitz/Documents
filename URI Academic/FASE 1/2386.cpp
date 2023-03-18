#include <stdio.h>

int main(void) {
	
	int a, n, f=0, v[10000];
	
	scanf("%d %d", &a, &n);
	
	for (int i=1; i<=n; i++) {
		scanf("%d", &v[i]);
		
		if(a*v[i]>=40000000){
			f+=1;
		}
	}
	
	printf ("%d\n", f);
	
	
	return 0;
}

