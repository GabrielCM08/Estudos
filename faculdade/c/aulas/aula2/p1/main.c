#include <stdio.h>
#include <stdlib.h>

// FUN��O

// tipo de retorno - IDENTIFICA��O - argumentos
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
