#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int idade[10];
	char nome[10][30];
	
	for (int i = 0; i < 10; i++){
		printf("Informe sua idade: \n");
		scanf(" %d", &idade[i]);
		if (idade[i] < 0){
			i = 10;
		}
		else{
			printf("Agora me diga o seu belo nome:\n");
			scanf(" %s", &nome[i]);
		}
	}
	for (int i = 0; i < idade[i]; i++){
		if(idade[i] < 12){
			printf("%s %d - Criança\n", nome[i], idade[i]);
		}
		else if(idade[i] >= 12 && idade[i] < 18){
			printf("%s %d - Jovem\n", nome[i], idade[i]);
		}
		else {
			printf("%s %d - Adulto\n", nome[i], idade[i]);

		}
	}
	
	return 0;
}
