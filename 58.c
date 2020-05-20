#include <stdio.h>
#include <stdbool.h>

#define MAX_FILES 50

//Así se verifica si está definida
#ifndef MAX_FILES
#error No se ha definido el numero maximo de archivos
#endif

//Así de elimina la definición
//#undef MAX_FILES

//volvemos a verificar
#ifndef MAX_FILES
#error No se ha definido el numero maximo de archivos 2
#endif

#ifdef VERDADERO
#define VERDADERO -1
#endif

#ifndef FALSO
#define FALSO 0
#endif

#ifndef VERDADERO
#define VERDADERO -2
#endif

#ifndef FALSO
#define FALSO 2
#endif

#ifndef true
#define true 10
#endif

int main (int argc, char *argv[], char *env[])
{
	printf(" Curso de Lenguaje C\n");
	printf("Clase 58 - Directiva undef, error, ifdef, ifndef\n");

	printf("Número maximo de archivos de :%d \n", MAX_FILES);
	printf("VERDADERO: 	%d\n", VERDADERO);
	printf("FALSO:		%d\n",FALSO);
	printf("true:  		%d\n",true);

return 0;
}


