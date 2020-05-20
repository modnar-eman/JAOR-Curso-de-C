#include <stdio.h>

#define Windows 0
#define Linux 	0
#define Mac 	0

#if Windows
	#warning Aplicación para ejecutar en windows
#elif Linux
		#warning Aplicación para ejecutar en Linux
	#else 
		#if Mac
		#warning Aplicación para ejecutar en Macintosh
	#endif
#endif

int main(int argc, char *argv[], char *env[])
{
	printf("Curse de lenguaje C \n");
	printf("Clase 59 -Directiva if,else, elif. Clase final del Curso\n\n");

	#if Windows
		printf("Aplicación para windows\n");
		#else
			#if Linux
			printf("Aplicación para Linux1\n");
			#elif Mac
			printf("Aplicación para Macintosh\n");
			#endif

	#endif

if (Windows)
	printf("Aplicación para Windows\n");
else
	if(Linux)
		printf("Aplicación para linux\n");
	else
		if (Mac)
			printf("Aplicación para Macintosh\n");
		else
			printf("Sistema operativo no detectado\n");
return 0;
}



















