#include <stdio.h>
int main()
{
 	int iCuenta, iCuenta2;

	printf("Curso de C \n");
	printf("Clase 29 - Sentencia for \n\n");

	printf("Imprimendo los números del 1 al 100 \n1");

		for(iCuenta=1;iCuenta<=100;iCuenta++)
			printf("[%d] ", iCuenta);
	printf("\n");

		for (iCuenta=1;iCuenta<=10;iCuenta++)
			printf("7 x %02d = %02d \n", iCuenta, 7*iCuenta);

	iCuenta=1;
		for (;iCuenta<=10;)
			printf("8 x %02d = %02d \n",iCuenta++,8*iCuenta);
	printf("\n");

	iCuenta=10;
		for (;iCuenta>0;)
			printf("5 x %02d = %02d \n",iCuenta--,5*iCuenta);
	printf("\n");

	iCuenta=1;
		for(;;)
		{
			printf("9 x %02d = %02d \n",iCuenta++,9*iCuenta);
				if(iCuenta==10)
				break;
		}

	printf("\n");

	printf("Numeros pares Positivos y Negativos del 10 hasta el 2\n");
		for(iCuenta=0,iCuenta2=10;iCuenta2>iCuenta;iCuenta++,iCuenta2--)
		{
			printf("%04d\n",iCuenta2-iCuenta);
			printf("%04d\n",iCuenta-iCuenta2);
		}
	printf("\n");

	printf("Numeros pares Positivos y Negativos del 10 hasta el 2 mayores de 7\n");
		for(iCuenta=0,iCuenta2=10;iCuenta2>iCuenta && iCuenta2>7;iCuenta++, iCuenta2--)
		{
			printf("%04d\n",iCuenta2-iCuenta);
			printf("%04d\n",iCuenta-iCuenta2);
		}


	printf("Numeros pares Positivos y Negativos del 10 hasta el 2 mayores de 7\n");
		for(iCuenta=0,iCuenta2=10;iCuenta2>iCuenta && iCuenta2>7;iCuenta++,iCuenta2--);
		{
			printf("%d\n",iCuenta2-iCuenta);
			printf("%d\n",iCuenta-iCuenta2);
		}
	printf("\n");

	printf("Imprime coordenadas de una matriz\n");
		for(iCuenta=1;iCuenta<10;iCuenta++)
		{
			for(iCuenta2=1;iCuenta2<10;iCuenta2++)
				printf("%d-%d",iCuenta,iCuenta2);
			printf("\n");
		}


	char cTecla;
	printf("Presiona Q parafinalizar el programa\n");
		for(;getc(stdin)!='Q';);
return 0;
}
