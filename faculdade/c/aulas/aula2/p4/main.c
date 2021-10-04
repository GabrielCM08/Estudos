#include <stdio.h>
#include <stdlib.h>

// Parãmetros com valor e por referência

int main(int argc, char *argv[]) {
	
	imprimir(5);
	
	//int x = soma(5,6);
	//printf("\nsoma: %d ", x));
	
	// valor
	printf("soma: %d \n", soma(15,20));
	// referência
	printf("soma ref: %d \n", somaref(*5,6));
	
	
	
	return 0;
}

void imprimir(int a)
{
	int d = 0;
	for(d=0;d< a;d++)
		printf("Oi - %d\n", d);
}

// função 

int soma (int a, int b)
{
	return (a + b);
}

// tipagem NOME argumento ( )
// Bloco


// Parametro por referência(endereço) de dados
// com * pegamos o endereço da variavel
// sem o * pegamos o valor da variavel

int somaref(int *a, int b)
{
	return *a+b;
}



