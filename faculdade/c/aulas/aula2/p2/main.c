#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	imprimir();
	printf("\nVALOR: %d", soma(4));
	
	return 0;
}

// BLOCO
// TIPAGEM    NOME       ARGUMENTO
    void     imprimir       ()
{// inicio do bloco
	printf("oi");
}// fim do bloco

int soma (int a)
{
	return a + 1;
}
