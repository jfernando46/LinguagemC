#include <stdio.h>
#include <stdlib.h>
#include  <locale.h>

/* 
    C�lculo do IMC
    @author Jos� Fernando
*/      
int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	printf(" ________  ________  \n");
	printf("|_   _|  \\/ /  __ \ \n");
	printf("  | | | .  . | /  \\ \n");
	printf("  | | | |\\/|| |     \n");
	printf(" _| |_| |  | | \\__/ \n");
	printf(" \\_/\\_|  |_/\____/ \n");
    //vari�veis
	float imc,peso,altura;
	//entrada
	printf("Digite o seu peso em Kg: ");
	scanf("%f",&peso);
	printf("Digite a sua altura em metros: ");
	scanf("%f",&altura);         
	//processamento
	imc = peso / (altura + altura);
	//saida
	printf("IMC: %.2f\n", imc);
	system("pause");
	return 0;
}
