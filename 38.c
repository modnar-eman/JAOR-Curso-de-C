#include <stdio.h>
#define CR printf("\n");

struct PANTALLA
{
	int iColumna;
	int iRenglon;
};

int main()

{


	printf("Curso de C \n");
	printf("Clase 38 - Estructuras \n\n");


	struct PANTALLA Pantalla1, Pantalla2;
	Pantalla1.iColumna=23;
	Pantalla1.iRenglon=12;

	Pantalla2=Pantalla1;
	
	printf("Los valores de pantalla 2\n");
	
	CR
	printf("Pantalla.iColumna:	%i\n",Pantalla2.iColumna); 
	printf("Pantalla.iRenglon:	%i\n",Pantalla2.iRenglon);

	CR

	struct PANTALLA *pPantalla=&Pantalla2;
	printf("Los valores de Pantalla 2 desde el apuntador\n");
	printf("pPantalla,iColumna:	%i\n", pPantalla->iColumna);	
	printf("pPantalla.iRenglón:	%i\n", (*pPantalla).iRenglon);
	CR

	(*pPantalla).iColumna=5;
	pPantalla->iRenglon=12;

	printf("Pantalla2.iColumna:	%i\n", Pantalla2.iColumna);
	printf("Pantalla2.iRenglón:	%i\n", Pantalla2.iRenglon);

	
return 0;
}
