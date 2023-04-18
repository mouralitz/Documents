#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int opcao;
	float preco, precokm, consumo, quilometragem, litros;
	char sair = 's'; 
	
	while(sair == 'S' || sair == 's'){
		printf("Informe o gasto a ser calculado:\n");
		printf("Digite '1' para medir os gastos veiculares de combustível.\n");
		scanf(" %d", &opcao);
		
		if(opcao == 1){
			printf("Digite o consumo do seu veículo. (Ex: Se o veículo consome 14km/litro, digite '14')\n");
			scanf(" %f", &consumo);
			printf("Favor informar o preço atual do combustível. (Utilize vírgula!)\n");
			scanf(" %f", &preco);
			printf("Informe agora a quilometragem a ser percorrida.\n");
			scanf(" %f", &quilometragem);
			system("cls");
			
			litros = quilometragem / consumo;
			precokm = litros * preco;
			
			printf("O seu veículo consumirá um total de %.2f litros.\n", litros);
			printf("Com o custo do combustível a R$:%.2f, você pagará R$:%.2f por %.2f litros.\n", preco, precokm, litros);
		}
		printf("Gostaria de calcular algo novo? 'S' Para Sim, e qualquer coisa para Não.\n");
		scanf(" %c", &sair);
	}	
	system("cls");
	printf("Obrigado por escolhera MouraLitz consultoria, até a próxima!");
	Sleep(2000);
	return 0;
}
