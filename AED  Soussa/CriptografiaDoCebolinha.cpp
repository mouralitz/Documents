#include <stdio.h>
#include <string.h>

int main(void){
	
	char frase[100], letra;
	printf("\nDigite a frase a ser criptografada de forma ultra secreta:\n");
	scanf(" %[^\n]s", frase);
	
	for (int i = 0; i < strlen(frase); i++){
		if (frase[i] == 'R'){
			frase[i] = 'L';
		}
		if (frase[i] == 'r'){
			frase[i] = 'l';
		}
		
	}
	letra =  frase[0];
	frase[0] = frase[strlen(frase) - 1];
	frase[strlen(frase) - 1] = letra;
	
	
	printf("%s", frase);		
	
	return 0;
}
