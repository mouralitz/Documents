#include <stdio.h>
using namespace std;

int main(void) {
	
	int N, ab;
	ab=7;
	
	
	scanf("%d", &N);
	
	for (int i=1; i<=N; i++){
		if(i>= 11 && i<=30){
			ab+=1;
		}
		 if(i>=31 && i<=100){
		ab+=2;
		}
		 if(i>= 101){
			ab+=5;
		}
	}
	
	printf ("%d\n", ab);
	
	return 0;
}
