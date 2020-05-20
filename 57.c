#include <stdio.h>

#define CR 				printf("\n")
#define SALIDA			return 0
#define	ENTERO			int
#define Si 				if
#define DeOtroModo		else
#define Escribe			printf
#define TRUE			1
#define FALSE			0
#define MIN(a,b)		(a<b) ? a : b
#define DIVISIBLE(a,b) 	(a%b)==0

int main (int argc, char *argv[], char *env[])
{

	ENTERO iValor=19;

	Escribe("Curso de Lenguaje C \n");
	Escribe("Clase 57-Directiva define\n\n");

	Si (iValor > 10)
		Escribe ("El valor :%d es Mayor que 10 \n", iValor);
	DeOtroModo
		Escribe ("El valor :%d es Menor que 10 \n", iValor);

	Escribe ("el valor menor de 10 y 15 es %d \n",MIN(10,15));
	Si (DIVISIBLE(10,3))
		Escribe("Es Divisible\n");
	DeOtroModo
		Escribe("No es divisible\n");

	CR;
	SALIDA;
}



