#include <stdio.h>
#include <stdlib.h>

typedef struct {
	
	int num1;
	int num2;
} compra ;

int main (void) {
	compra c1, *pc1;
	
	// & endereço de c1
	pc1 = &c1; // ponteiro pc1 recebe a instancia c1 de compra
	
	c1.num1=5; // C1 atribui valores para os atributos
	c1.num2=6;
	
	// ponteiro imprime os valores de C1
	// duas formas de acessar (*ponteiro).atributo ou ponteiro->Atributo
	printf("Impressao compra \n num1 : %d \n num2 : %d", (*pc1).num1, pc1->num2);
	
		return 0;
}
