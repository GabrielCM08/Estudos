#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// VARIAVEL - espa�o em memoria que cont�m
	// UM TIPO - NOME - VALOR
	
	int a = 1; 		// valores sem pontos - QUANTIDADE, IDADE
	float b = 2.5;	// numeros com pontos - DINHEIRO, PESO, ALTURA
	
	//vetor - VARIAVEL COM V�RIAS POS��ES DE MEM�RIAS -
	char nome[] = "Gabriel de Campos Martins"; // textos, palavras, frases
				 //0123456789............
	
	printf("  a=%d   b=%f   c=%s ",a,b,nome);
	
	return 0;
}

