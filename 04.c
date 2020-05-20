#include <stdio.h>
int main ()
{
	char	xChar=-1;
	unsigned char yChar= -1;

	int		xInt = 32767;
	unsigned int yInt = -1;
	short	zInt = 32768;

	printf("Curso de C \n");
	printf("clase 04 - los tipos de datos y modificadores \n\n" );

	printf("El valor de xChar como char: %c \n", xChar);
	printf("El valor de xChar como integer: %d \n \n", xChar );

	printf(" El valor de yChar como char: %c \n", yChar);
	printf("El valor de yChar como integer: %d \n", yChar);

	printf("El valor de xInt: %d \n", xInt);
	printf("El valor de yInt: %d \n", yInt);
	printf("El valor de yInt: %u\n", yInt);
	printf("El valor de zInt: %d \n",zInt);

	return 0;
}
