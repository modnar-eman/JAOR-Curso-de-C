#include <stdio.h>
	int main()
{
	int x=4,y=0,z=0;

	printf("curso de C\n");
	printf("clase 23 - Operadores Otros Precedencia \n\n");

	printf(" Evaluando 2*sizeof (char) :%d\n",2*sizeof(char));
	
	char xChar;
	
	printf("desplegando los tamaños de las variables definidas\n\n");
	printf("Evaluando sizeof(xChar) 		:%d \n", sizeof(xChar));
	printf("Evaluando sizeof(xChar++)		:%d \n", sizeof(xChar++));
	printf("Evaluando sizeof(xChar++)*2             :%d \n", sizeof(xChar++)*2);
	
	sizeof(xChar)+0 ? printf("True \n") : printf("False\n");
	sizeof(xChar)-1 ? printf("True \n") : printf("false\n");

	sizeof(xChar)+0 ? printf("True ->"), printf("%d ->",x), x=x+1, printf("%d \n",x) : printf("False \n");
	sizeof(xChar)-1 ? printf("True \n"): printf("False ->"), printf("%d ->",y), y+=5, printf("%d \n", y);
return 0;
}

