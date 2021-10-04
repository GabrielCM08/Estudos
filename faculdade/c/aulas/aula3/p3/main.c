#include <stdio.h>
#include <stdlib.h>

int main (void){
	
int vnum[5];
int *pvnum;
	
int i=0;
	
printf("ORIGINAL \n");
for(i=0;i<5;i++)
{
	vnum[i]=i;
	printf("\n valor de %d = %i",i,vnum[i]);
}
	
	
pvnum = &vnum[0];
	
for (i=0;i<5;i++)
	*(pvnum+i) = 0; // ATRIBUIÇÃO de 0 no vetor
	
printf("\n\nMUDADO PELO PONTEIRO\n");
*pvnum = 5;			// atribui 5 em <=> vnum[0] = 5;
*(pvnum+1) = 5;		// atribui 5 em <=> vnum[1] = 5;
*(pvnum+2) = 5;		// atribui 5 em <=> vnum[2] = 5;

for(i=0;i<5;i++)
	printf("\n valor de %d = %i",i,vnum[i]);
	
	
getchar();

return 0;

}
