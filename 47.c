#include <stdio.h>
#include <stdlib.h>
#define CR printf("\n");

void sbTablaDelCinco()
{
	int iCuenta=0;
		for(iCuenta=1;iCuenta<=10;iCuenta++)
			{
			printf("5x%i=%i\n",iCuenta,5*iCuenta);
			}
	CR
}

void sdTablaDelSiete()
{
	int iCuenta=0;
	for(iCuenta=1;iCuenta<=10;iCuenta++)
		{
		printf("7x%i=%i\n",iCuenta,iCuenta*7);
		}
	CR
return;
}

int sbImprimeTabla(int iNumero)
{
	int iCuenta=0;
	for(iCuenta=1;iCuenta<=10;iCuenta++)
		{
			printf("%ix%i=%i\n",iNumero,iCuenta,iCuenta*iNumero);
		}

}
int main ()
{
	int x=3;
	printf("Curso de C\n");
	printf("Clase 47 - Funciones\n\n");
	sbTablaDelCinco();
	sdTablaDelSiete();
	CR
	sbImprimeTabla(x);
	CR
	sbImprimeTabla(6);

return 0;
}
