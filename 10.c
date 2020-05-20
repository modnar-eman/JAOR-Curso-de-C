#include <stdio.h>

int main ()
{
		printf("curso de c \n");
		printf("Clase 10 - cadenas \n\n");

		int intDato1,intDato2,intDatosLeidos;
		char chrCaracter;
		char strCadena[10];

		printf("Capture un numero:");
		scanf("%d%*c", &intDato1);
		printf("Dato leido: Entero:%d \n", intDato1);

		printf("Capture un caracter:");
		scanf ("%c%*c", &chrCaracter);
		printf("Dato leido: caracter: %c %d \n", chrCaracter, chrCaracter);

		printf("Capture un numero");
		scanf("%d", &intDato2);
		printf(" pusiste este : %d", intDato2);
 	return 0;
}
