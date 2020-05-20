#include <stdio.h>

int main()
{

	int iCuenta;
	printf("Curso de C\n");
	printf("Clase 30 - Sentencia break y continue \n\n");

		while (1)
		{
		printf("Entro al While....\n");
			break;
		printf("Esta sentencia ya no se ejecutará");
		}
		printf("Salí del while....\n");

	printf("Imprimiendo los Números del 1 al 10 \n");

		for(iCuenta=1;iCuenta<=10;iCuenta++)

			if(iCuenta==5)
			{
			printf("Salí del ciclo con break\n");
			break;
			}
		else
			printf("[%d]",iCuenta);

	printf("\n");

	printf("Imprimiendo los números del 1 al 10 \n");

		for(iCuenta=1;iCuenta<=10;iCuenta++)
			if(iCuenta==5)
			{
				printf("[%d]",iCuenta);
				continue;
				printf("Esto ya no se ejecuta\n");
			}
			else 
				printf("%d",iCuenta);
			printf("\n");
	printf("Probando continue con while\n");
	iCuenta=0;
		while(iCuenta<5)
		{
			printf("[%d]",iCuenta);
			iCuenta++;
			continue;
		}
	printf("\n");
return 0;
}
