#include <stdio.h>
#include <stdlib.h>

int main (void){

int num = 15;
int *pnum, **p2num, ***p3num;

/* pnum aponta para num */
pnum = &num;

/* p2num aponta para pnum */
p2num = &pnum;

/* p3num aponta para p2num */
p3num = &p2num;

num = num * 2;
printf("\n VALOR DE NUM \n Original = %d", num);

*pnum = *pnum + 1;
printf("\n Primeiro Ponteiro: %d", num);

**p2num = **p2num + 1;
printf("\n Segundo Ponteiro: %d", num);

***p3num = ***p3num + 1;
printf("\n Terceiro Ponteiro: %d", num);

getchar();

return 0;

}
