#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	Fundamentos da Linguagem C
	@author Professor Jos� de Assis
*/

int main(int argc, char *argv[]) {
	//a linha abaixo configura o idioma para portugu�s
	setlocale(LC_ALL, "Portuguese");
	//a linha abaixo modifica a cor do background(fundo) e do texto do prompt
	//color 1� fundo 2� texto
	system("color 1E"); 
	printf("Professor Jos� de Assis\n");
	system("pause");
	//a linha abaixo "Limpa" a tela do prompt de comando
	system("cls");
	system("color F0");
	printf("C�digo de cores:\n\n");		
	printf("0 � preto\n");
	printf("1 - azul\n");
	printf("2 - verde\n");
	printf("3 - verde �gua (azul esverdeado)\n");
	printf("4 - vermelho\n");
	printf("5 - roxo\n");
	printf("6 - amarelo\n");
	printf("7 - branco\n");
	printf("8 - cinza\n");
	printf("9 - azul claro\n");
	printf("A - verde claro\n");
	printf("B - verde �gua claro\n");
	printf("C - vermelho claro\n");
	printf("D - lil�s\n");
	printf("E - amarelo claro\n");
	printf("F - branco brilhante\n");
	system("pause");
	return 0;
}
