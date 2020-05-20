#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CR ("\n");
char fnChrHexadecimal(int xValor);
int fnIntNumeroPotencia(int xValor, int xPotencia);
char *fnStrDiaSemana(int iDia);

int fnIntNumeroAlCuadrado(int xValor)

{

	int iResult=xValor*xValor;
//	printf("Cuadrado %i\n",iResult);
	return iResult;
}





int main()

{

	int xNumero;
	char xChar;
	char strCadena[50];
	
	xNumero=fnIntNumeroAlCuadrado(5);
	xChar=fnChrHexadecimal(13);
	fnStrDiaSemana(2);
	strcpy(strCadena,fnStrDiaSemana(0));
	printf("%i\n",xNumero);
	xNumero = fnIntNumeroPotencia(4,3);
	printf("%i\n",xNumero);
	printf("%c\n",xChar);
	printf("%s\n",strCadena);
return 0;
}

int fnIntNumeroPotencia(int xValor, int xPotencia)
{
	int iCuenta;
	int iResult;

		if (xPotencia==0)
			iResult=1;
			else
				if(xPotencia==1)
					iResult=xValor;
					else
						if(xPotencia==2)
							iResult=fnIntNumeroAlCuadrado(xValor);
		else
		{	
		if(xPotencia>2)
			iResult=xValor;
			for(iCuenta=1;iCuenta<xPotencia;iCuenta++)
				iResult=iResult*xValor;
//				printf("%i\n",iResult);
		}
	return (iResult);
}

char *fnStrDiaSemana(int iDia)
{
static char strResult[50]; //static para que no devuelva basura
		switch (iDia)
		{
			case 1: strcpy(strResult,"Lunes");
			break;
			case 2: strcpy(strResult,"Martes");
			break;
			case 3: strcpy(strResult,"Miercoles");
			break;
			case 4: strcpy(strResult,"Jueves");
			break;
			case 5: strcpy(strResult,"Viernes");
			break;
			case 6: strcpy(strResult,"Sabado");
			break;
			case 7: strcpy(strResult,"Domingo");
			break;
			default: strcpy(strResult,"???");
			break;
		}


//	printf("dia de la semana %s\n", strResult);
	return (strResult);

}

char fnChrHexadecimal(int xValor)
{
	char xResult;
		switch(xValor)
		{
		case 0: xResult='0';
		break;
		case 1: xResult='1';
		break;
		case 2: xResult='2';
		break;
		case 3: xResult='3';
		break;
		case 4: xResult='4';
		break;
		case 5: xResult='5';
		break;
		case 6: xResult='6';
		break;
		case 7: xResult='7';
		break;
		case 8: xResult='8';
		break;
		case 9: xResult='9';
		break;
		case 10: xResult='A';
		break;
		case 11: xResult='B';
		break;
		case 12: xResult='C';
		break;
		case 13: xResult='D';
		break;
		case 14: xResult='E';
		break;
		case 15: xResult='F';
		break;
		default: xResult='?';
		break;
		}
//		printf("Valor hexadecimal %c\n",xResult);
return (xResult);
}
