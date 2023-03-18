#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int i;
	char n[100], s[100];
	
	printf("Por favor, informe seu nome, sexo e idade: \n");
	scanf(" %s %s %d", &n, &s, &i);
	
	if (strcmp(s, "feminino") ==0 && i<25){
		printf("%s ACEITA", n);
	}
	else{
		printf("%s NÃO ACEITA", n);
	}
	
	return 0;
}
