#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	char nome[100]="0";
	
	printf("Digite seu nome: \n");
	scanf("%s", &nome);
	printf("As quatros primeiras letras do seu nome são: \n");
	
	for (int i=0; i<4 && nome[i]!='\0'; i++){
		printf("%c\n", nome[i]);
		
	}
	
	
	return 0;
}
