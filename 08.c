#include <stdio.h>
int main ()
{
	char chrVocales[]={'a','e','i','o','u'};
	char strNombre[]="Juan Perez";
	char strApellido[10];

	strApellido[0]='p';
	strApellido[1]='e';
	strApellido[2]='r';
	strApellido[3]='e';
	strApellido[4]='z';
	strApellido[5]='\0';

	printf("curso de C \n");
	printf("clase 08 - cadenas \n\n");

	printf("Las Vocales:\n");
	printf("Edad 0: %c \n", chrVocales[0]);
	printf("Edad 1: %c \n", chrVocales[1]);
	printf("Edad 2: %c \n", chrVocales[2]);
	printf("Edad 3: %c \n", chrVocales[3]);
	printf("Edad 4: %c \n", chrVocales[4]);
	printf("El valor del Caracter 5 de vocales %d=%c \n",chrVocales[5], chrVocales[5]);

	printf("El nombre -> %s \n", strNombre);
	printf("El valor del caracter 10 del nombre %d \n", strNombre[9]);
	printf("El apellido -> %s\n", strApellido);
}