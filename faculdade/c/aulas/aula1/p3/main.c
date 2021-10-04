#include <stdio.h>
#include <stdlib.h>

// ESTRUTURAS DE DECI플O E REPETI플O
int main(int argc, char *argv[]) {


/*	
	// ESTRUTURA DECI플O
	int idade = 20;
	
	printf ("Verificar idade: \n");
	
	
	// SIMPLES - IF/ELSE (TRUE/FALSE)
	// COMPOSTAS - IF/ELSE IF/ELSE (|| && 
	// ANINHADAS - {} VARIAS OP합ES (if dentro de if)
	
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



	// ESTRUTURA REPETI플O
	
	int i=1;
// inicializa寤a   ; CONDI플O ;      passo(CONTADOR)
	for(i=1;         i <= 10;         i++) // executa 10 vezes
	{
		printf("\n %d", i);
	}
	
	return 0;
}
