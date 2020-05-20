#include <stdio.h>

int main ()

{
	int iValor=10;

	printf("curso de C \n");
	printf("clase 14 operadores artimeticos precedencia \n \n");

	printf("5+3*4    : %d \n", 5+3*4);
	printf("(5+3)*4  : %d \n", (5+3)*4);
	printf("5+3+4    : %d \n", 5+3+4);
	printf("-5+3+4   : %d \n", -5+3+4);
	printf("-5+(3+4) : %d \n", -5+(3+4));
	printf("-5*3/4)  : %d \n", -5*3/4);
	printf("-(5*3/4) : %d \n",-(5*3/4));
	printf("5+3%2    : %d \n", 5+3%2);
	printf("(5+3)%3  : %d \n\n", (5+3)%3);



	printf("iValor: %d \n",iValor);
	printf(" ++iValor+3+4: %d \n",++iValor+3+4);
	iValor = 10;
	printf("iValor++ +3 + 4 : %d \n", iValor++ +3+4);
	iValor = 10;
	printf("++iValor +3 * 4 : %d \n", ++iValor+3*4);
	iValor=10;
	printf("iValor++ +3 * 4 : %d \n", iValor++ +3*4);

	return 0;
}
