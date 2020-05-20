#include <stdio.h>
#include "54.c"
extern int glNumero;
extern char strMensaje[];
/*
void sbMensaje()

{
	char strMensaje[]="Mensaje en variable local";
	static int iMensajeNumero=0;
	iMensajeNumero++;

	printf("Mensaje %d: %s \n", iMensajeNumero, strMensaje);
	printf("Mensaje %d: %s \n", glNumero++,strMensaje);
	printf("\n");
}
*/
int main (int argc, char *argv[], int *env[])
{

	printf("Curso de C\n");
	printf("Clase 54 - Ámbito y Variables Static\n\n");


	sbMensaje();
	sbMensaje();
	sbMensaje();

	printf("Desplegando el Mensaje Global:%s \n",strMensaje);
	printf("Desplegando Variable Numérica Global: %d\n",glNumero);

	return 0;
}

