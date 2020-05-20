#include <stdio.h>
#define CR ("\n");
#include <stdlib.h>

int main(int argc,char *argv[], char *env[])
/*********************************************************************************************************
estos son los parámetros de la función main, por convención tienen esos nombres,se pueden cambiar los nombres, 
pero el tipo no se puede cambiar, el argc es el nombre y la ruta de nuestro programa
el segundo son los parámetros que le pasamos en la terminal, el tercero son las variables de entorno
**********************************************************************************************************/

{
	printf("Curso de C\n");
	printf("Clase 52 - parametros de la función main \n\n");
	int iCuenta;
	printf("el valor de argc es %d\n",argc);
		for(iCuenta=0;iCuenta<argc; iCuenta++)
			printf("El argumento %d es:  %s\n", iCuenta,argv[iCuenta]);//para que recorra e imprima el nombre de cada una de los parámetros que le pasamos desde la termina


		if(argc==1) // si hay sólo  un argumento o sea el nombre del programa
		{
			printf("indique la operación que desea realizar\n");
			printf("Para ayuda agregue H \n");
		}
		else
		if (argc==2) //si hay dos y el segundo es la H
		{
			if(strcmp(argv[1],"H")==0)// compara  que sean iguales
			{
				printf("Operación Ver 1.0\n");
				printf("Ayuda \n");
				printf("El programa le permite realizar operaciones de la siguiente forma\n");
				printf(" 'Numero' 'Operación' 'Numero' \n");
				printf("Donde número es cualquier valor y operación puede ser +,-,*,/\n");
				printf("Ejemplo\n");
				printf("5+5\n");
			}
			else
				printf("Argumento desconocido\n");// y si no son iguales
		}
		else if (argc==4)// si pasan los 4 parámetros necesarios para realizar una operación
		{
//metemos el valor de los parámetros en estas variables
			int iValor1;
			int iValor2;
			int iResult;
			char cOperador;

			iValor1=atoi(argv[1]);// argument to integer
			iValor2=atoi(argv[3]);
			cOperador=*argv[2];// argv es un apuntador y se tiene que declarar como tal, toma sólo el primer caracter, si se le ponen otras cosas, las descartará

				switch(cOperador) //Dependiendo del caso realiza la operación
				{
					case'+':iResult=iValor1+iValor2;
						printf("El resultado de es %i\n",iResult);
						break;

					case'-':iResult=iValor1-iValor2;
                                                printf("El resultado de es %i\n",iResult);
                                                break;

					case'*':iResult=iValor1*iValor2;
                                                printf("El resultado de es %i\n",iResult);
                                                break;

					case'/':iResult=iValor1/iValor2;
                                                printf("El resultado de es %i\n",iResult);
                                                break;
					default : printf("ERROR OPERADOR INCORRECTO\n");
						break;
				}
		}
		else
			printf("Error en argumentos\n");
return 0;
}

