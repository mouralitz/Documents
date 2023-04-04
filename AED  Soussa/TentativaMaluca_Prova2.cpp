#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
	char expressao[1000], operador;
	int resultado = 0;
	int num1, num2;
	
	printf("Digite a expressao:\n");
	scanf("%[^\n]s", &expressao);
	for (int i = 0; i < strlen(expressao); i++){
		if(expressao[i] == '/' || expressao[i] == '+' || expressao[i] == '-' || expressao[i] == '*'){
			expressao[i] = operador;
			expressao[i-1] = num1;
			expressao[i+1] = num2;
			
			if(operador == '/'){
				resultado = num1 / num2;
				resultado = num1;
			}
			else if(operador == '+'){
				resultado = num1 + num2;
				resultado = num1;
			}
			else if(operador == '-'){
				resultado = num1 - num2;
				resultado = num1;
			}
			else if(operador == '*'){
				resultado = num1 * num2;
				resultado = num1;
			}
		}
	}
	
	printf("\n%d\n", resultado);
}
