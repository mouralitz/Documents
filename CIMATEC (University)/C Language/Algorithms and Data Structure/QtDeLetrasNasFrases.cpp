#include <stdio.h>
#include <string.h>

int main (void){
	
	char frase[30], letra;
	int cont = 0;
	
	printf("Digite uma frase:\n");
	scanf(" %[^\n]s", &frase);
	printf("Agora, digite uma letra:\n");
	scanf(" %c", &letra);
	
	for (int i = 0; i < strlen(frase); i++){
			if (letra == frase[i])
			cont +=1;
		
	}
	
	printf("Existem %d letras %c na frase: '%s'", cont, letra, frase);
		
	return 0;
}
