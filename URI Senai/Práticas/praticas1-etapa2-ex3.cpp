#include <stdio.h>
#include <string.h>

int main(void){
	
	char a[100];
	int b, c = 0;
	
	
	printf("Digite o numero desejado: \n");
	scanf("%s", &a);
	b = strlen(a);
	
	for (int i=0; i<=b; i++){
		if(a[i]=='1'){
			c+=1;
		
		}
	}
	printf("%d", c);
	
	return 0;
}
