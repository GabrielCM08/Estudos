#include <stdio.h>
#include <stdlib.h>

// ESTRUTURAS DE DECI��O E REPETI��O
int main(int argc, char *argv[]) {


/*	
	// ESTRUTURA DECI��O
	int idade = 20;
	
	printf ("Verificar idade: \n");
	
	
	// SIMPLES - IF/ELSE (TRUE/FALSE)
	// COMPOSTAS - IF/ELSE IF/ELSE (|| && 
	// ANINHADAS - {} VARIAS OP��ES (if dentro de if)
	
	if (idade >= 18 && idade <= 120){
		printf("Maior/");
		printf("%d", idade);
}
	else if(idade >= 120 || idade <=0){
		printf("Idade invalida/");
		printf("%d", idade);
}
	else {
		printf("Menor/");
		printf("%d", idade);
}
*/



	// ESTRUTURA REPETI��O
	
	int i=1;
// inicializa��a   ; CONDI��O ;      passo(CONTADOR)
	for(i=1;         i <= 10;         i++) // executa 10 vezes
	{
		printf("\n %d", i);
	}
	
	return 0;
}
