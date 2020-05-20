#include <stdio.h>
int main()
{
	int iCuenta=0;

	printf("Curso de C\n");
	printf("Clase 31 - Sentencia goto \n\n");

		while (1)
		{

			printf("Inicio del ciclo While....\n");
				if(iCuenta>=10)
					goto FINAL;

			IN_WHILE:
			iCuenta++;
			printf("Inicio Etiqueta IN_WHILE %d...\n",iCuenta);

			goto ENMEDIO;

 			OUT_WHILE:
			printf("Inicio Etiqueta OUT_WHILE %d...\n",iCuenta);
			break;
		}

		iCuenta++;

		ENMEDIO:
			if(iCuenta<5)
 				goto OUT_WHILE;
			else
				if (iCuenta==5)
				goto IN_WHILE;
		goto FINAL;
		printf("Este código no se ejecuta\n");

		FINAL:
			printf("fin %d\n",iCuenta);
		return 0;

}


