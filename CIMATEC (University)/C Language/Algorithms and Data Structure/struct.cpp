#include <stdio.h>
#include <locale.h>

typedef struct
{
    int dd, mm, aaaa;

} DATA;

typedef struct
{
    char nome[50];
    float salario;
    DATA nascimento;

} PESSOA;

int main()
{
    PESSOA dados;
    setlocale(LC_ALL, "Portuguese_Brazil");

    // entrada de dados:

    printf("Informe o seu nome: \n");
    scanf(" %[^\n]s", &dados.nome);

    printf("Informe o seu salário:\n");
    scanf(" %f", &dados.salario);

    printf("E por último, informe a sua data de nascimento (DD MM AAAA)\n");
    scanf(" %d %d %d", &dados.nascimento.dd, &dados.nascimento.mm, &dados.nascimento.aaaa);

    // saída de dados:

    printf("\n");
    printf("O nome informado foi: %s.\n%s recebe um valor de R$:%.2f em salário.\nE %s nascceu em: %d %d %d.\n", dados.nome, dados.nome, dados.salario, dados.nome, dados.nascimento.dd, dados.nascimento.mm, dados.nascimento.aaaa);

    return 0;
}