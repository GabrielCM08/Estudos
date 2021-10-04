#include <stdio.h>
#include <stdlib.h>

// FUNÇÃO

// tipo de retorno - IDENTIFICAÇÃO - argumentos
// int             - main       -  (int argc, char *argv[])


int main(int argc, char *argv[]) {
	
	int i = 0;
	for (i=0;i<5;i++)
		imprimir();
		
	return 0;
}

void imprimir ()
{	
	printf("oi\n");
}
