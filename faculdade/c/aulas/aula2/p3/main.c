#include <stdio.h>
#include <stdlib.h>

// Fun��es que n�o retornam valor e que retornam

int main(int argc, char *argv[]) {
	
	
	// PROCEDURES ou procedimentos ( fun��o que n�o retorna valor )
	
	naoretorna();
	
	// FUN��O (s�o fun��es que retornam valores)
	
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
