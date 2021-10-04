#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //colocar acentuação no prompt

int main (void){
	//aceitar acentuação no prompt
	setlocale(LC_ALL, "Portuguese");
	
	
/* Declaração e Atribuição de valores */
int num = 10; double numf = 25.4; char letra = 'a';

// o uso de * mostra que a variavel é um ponteiro

int *pnum; double *pnumf; char *pletra;

/*pegando o endereço das variaveis */
pnum = &num; pnumf = &numf; pletra = &letra;


printf("----------------------: pnum - pnumf - pletra");
printf("\n Valores das Variáveis: %d - %f - %c", num, numf, letra);
printf("\n Valores dos Ponteiros: %d - %f - %c", *pnum, *pnumf, *pletra);
printf("\n Endereço dos Ponteiros: %p - %p - %p", pnum, pnumf, pletra);

/* mudando valores dos ponteiros */
*pnum = 5;

// %p imprime o ENDEREÇO do ponteiro ou variável
printf("\n Valores de NUM :%d ", num);
printf("\n Valores PNUM : %d ", *pnum);
printf("\n ENDEREÇO PNUM : %p ", pnum);	

getchar();
return 0;
}

