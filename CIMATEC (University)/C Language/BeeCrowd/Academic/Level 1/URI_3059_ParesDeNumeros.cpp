#include <stdio.h>

int main(){
    int n, i, f, comparador = 0, cont = 0;

    scanf("%d %d %d", &n, &i, &f);

    int v[n];
    
    for (int x = 0; x < n; x++){
    	scanf("%d", &v[x]);
	}

    for (int x = 0; x < n; x++){
        //comparador = v[x];
        for(int y = 0; y < n; y++){
        	if(x != y){
        		if(v[x] + v[y] <= f && v[x] + v[y] >= i ){
        			cont++;
				}
			}
		}
    }
	
	printf("%d\n", cont/2);

    return 0;
}
