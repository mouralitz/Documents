#include <stdio.h>

int recursao(int v[6], int pos){
	if (pos == 0) return v[0];
	else{
		int val = recursao(v, pos-1);
		if (val > v[pos]) return val;
		else return v[pos];
	}
}

int main(){
	int v[6];
	for (int i = 0; i < 6; i++){
		scanf(" %d", &v[i]);
	}
	printf("O maior valor digitado foi: %d", recursao(v, 5));
	
	
	return 0;
}
