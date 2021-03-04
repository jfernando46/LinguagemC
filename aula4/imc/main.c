#include <stdio.h>
#include <stdlib.h>
#include  <locale.h>

/* 
    Cálculo do IMC
    @author José Fernando
*/      
int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	printf("8888888888b     d888 .d8888b.\n");  
 	printf("888  8888b   d8888d88P  Y88b \n");  
	printf("888  88888b.d88888888    888 \n");  
	printf("888  888Y88888P888888        \n");  
	printf("888  888 Y888P 888888        \n");    
	printf("888  888  Y8P  888888    888 \n");   
	printf("888  888   ''   888Y88b  d88P\n");   
	printf("8888888888       888  Y8888P \n");    
    //variáveis
	float imc,peso,altura;
	//entrada
	printf("Digite o seu peso em Kg: ");
	scanf("%f",&peso);
	printf("Digite a sua altura em metros: ");
	scanf("%f",&altura);         
	//processamento
	imc = peso / (altura * altura);
	//saida
	printf("IMC: %.2f\n", imc);
	//Status de acordo com a tabéla do IMC
	if (imc < 17){
		printf("Muito abaixo do peso\n");
	} else if(imc < 18.5){
		printf("Abaixo do peso\n");
	} else if(imc < 25){
		printf("Peso normal\n");
	} else if(imc < 30){
		printf("Acima do peso\n");
	} else if(imc < 35){
		printf("Obesidade I\n");
	} else if(imc < 40){
		printf("Obesidade II (severa)\n");
	} else {
		printf("Obesidade III (mórbida)\n");
	}
	system("pause");
	return 0;
}
