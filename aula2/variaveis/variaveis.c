#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	Estudo das vari�veis
	@author Jos� Fernando
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	printf("	 / \ / \ / \ / \ / \ / \ / \ / \   / \ / \ / \ / \ / \ / \ / \ \n");
	printf("	( A | C | A | D | E | M | I | A ) ( F | I | T | N | E | S | S )\n");
	printf("	 \_/ \_/ \_/ \_/ \_/ \_/ \_/ \_/   \_/ \_/ \_/ \_/ \_/ \_/ \_/ \n");
	// Tipos de vari�veis
	char professor[30] = {"Jos� Fernando"}; //[30] -> m�ximo de 30 caracteres
	char personal = 's';
	int periodo = 1;
	float cargaHoraria = 30.5;
	double salario = 3500.65;
	printf("ACADEMIA FITNESS \n");
	printf("_____________________________\n");
	// %s -> Ler o tipo de vari�vel
	// , (v�rgula) conectar(unir) um texto com o conte�do da vari�vel
	printf("Professor: %s\n", professor);
	printf("Personal Trainer(s/n): %c\n", personal);
	printf("Per�odo: %d\n", periodo);
	// .1 antes de %f arredonda para 1 casa decimal
	printf("Carga hor�ria semanal: %.1f\n", cargaHoraria);
	printf("Sal�rio: R$ %.2lf\n", salario);
	printf("_____________________________\n");
	system("pause");
	system("cls");
	// Entrada de dados
	char aluno[50];
	char sexo;
	int idade;
	float peso, altura;
	printf("CADASTRO DE ALUNO \n\n");
	printf("Nome do aluno(a): \n\n");
	printf("Digite o seu peso em Kg: \n\n");
	scanf("%f",&peso);
	printf("Digite a sua altura em metros: \n\n");
	scanf("%f",&altura);	
	// o comando gets � usado especificamente para capturar String (char[])
	gets(aluno);
	printf("Sexo(M/F): ");
	// o comando scanf � usado para capturar as demais vari�veis
	// o s�mbolo &(amper) � usado para referenciar a mem�ria
	scanf("%c",&sexo);
	printf("Idade: ");
	scanf("%d", &idade);
	printf("Peso(kg): ");
	// ATEN��O! Para capturar um n�mero n�o inteiro usar (,) v�rgula
	scanf("%f", &peso);
	printf("Altura(m): ");
	scanf("%f", &altura);
	printf("\n");
	system("pause");
	system("cls");
	printf("Ficha do aluno(a):\n");
	printf("______________________________\n");
	printf("Aluno: %s\n", aluno);
	printf("Sexo: %c\n", sexo);
	printf("Idade: %d\n", idade);
	printf("Peso: %.2f\n", peso);
	printf("Altura: %.2f\n", altura);
	printf("______________________________\n");
	system("pause");
	return 0;
}
