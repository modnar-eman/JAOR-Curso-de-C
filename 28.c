#include <stdio.h>
int main ()
{

	printf("Curso de C\n");
	printf("Clase 28 - sentencia while \n\n");

	char cNumero=0;

	printf ("imprimiendo los números del 0 al 99 \n");

		while (cNumero<100)
			printf("[%d]",cNumero++);
	printf("\n\n");

	printf("Imprimiendo la tabla de multiplicar del 7 \n");

	cNumero=0;
		while (cNumero<=10)
			printf("7 x %2d = %2d \n", cNumero++,cNumero*7);

	printf("imprimiendo la tala de multiplicar del número 7\n");
	cNumero=0;
		do
			printf("7 x %02d = %02d \n", cNumero++,cNumero*7);
		while(cNumero<=10);

	printf("presiona la tecla s....\n");
		while(getc(stdin)!='s')
	printf("Has presionado la tecla s \n");


	do 
		printf("presiona la tecla x...\n");
	while (getc(stdin)!='x');

	return 0;
}
