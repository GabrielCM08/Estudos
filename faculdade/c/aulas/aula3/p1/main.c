#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //colocar acentua��o no prompt

int main (void){
	//aceitar acentua��o no prompt
	setlocale(LC_ALL, "Portuguese");
	
	
/* Declara��o e Atribui��o de valores */
int num = 10; double numf = 25.4; char letra = 'a';

// o uso de * mostra que a variavel � um ponteiro

int *pnum; double *pnumf; char *pletra;

/*pegando o endere�o das variaveis */
pnum = &num; pnumf = &numf; pletra = &letra;


printf("----------------------: pnum - pnumf - pletra");
printf("\n Valores das Vari�veis: %d - %f - %c", num, numf, letra);
printf("\n Valores dos Ponteiros: %d - %f - %c", *pnum, *pnumf, *pletra);
printf("\n Endere�o dos Ponteiros: %p - %p - %p", pnum, pnumf, pletra);

/* mudando valores dos ponteiros */
*pnum = 5;

// %p imprime o ENDERE�O do ponteiro ou vari�vel
printf("\n Valores de NUM :%d ", num);
printf("\n Valores PNUM : %d ", *pnum);
printf("\n ENDERE�O PNUM : %p ", pnum);	

getchar();
return 0;
}

