#include <stdio.h>
#include <stdlib.h>
#define CR printf("\n");

int main()
{
	int 	xInt=-10;
	long	xLint=-2147483647;
	char	sFloat[]="3.1416Hola";
	float 	xFloat=0;

	printf("Curso de lenguje C\n");
	printf("Clase 46 - funciones varias\n");
	CR
	printf("Evaluando abs %d:\n",abs(xInt));
	printf("Evaluando labs %li:\n",labs(xLint));
	CR
	printf("Evaluando atoi 14965chan\n");
	printf("%d \n", atoi("14965chan"));
	CR
        printf("Evaluando atol -114965dke\n");
        printf("%d \n", atol("-114965dke"));
	CR
	printf("Evaluando atof(%s):",sFloat);
	xFloat = atof(sFloat);
	printf("%f\n",xFloat);
	CR
	printf("ejecutando ls\n");
	int xResult=0;
	xResult=system("ls");
	printf("Result:%d\n",xResult);
	CR
	printf("Saliendo con exit \n");
	exit (5);
}
