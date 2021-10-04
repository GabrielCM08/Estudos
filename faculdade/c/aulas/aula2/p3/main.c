#include <stdio.h>
#include <stdlib.h>

// Funções que não retornam valor e que retornam

int main(int argc, char *argv[]) {
	
	
	// PROCEDURES ou procedimentos ( função que não retorna valor )
	
	naoretorna();
	
	// FUNÇÃO (são funções que retornam valores)
	
	int g = teste();
	
	printf("\n%d", g);
	return 0;
}


void naoretorna()
{
	printf("Ola");
}


int teste()
{
	return 5;
}
