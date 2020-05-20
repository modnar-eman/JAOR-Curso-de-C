#include <stdio.h>
#include <string.h>
#define CL printf("\n")

int main()
{
	printf("Curso de C \n");
	printf("Clase 34 - Punteros y arreglos\n\n");

	char iCuenta=0;

	char 	xChar1='A';
	char 	xChar2='B';
	char 	xChar3='C';

	char*	pChar;

	char 	sCadena[5]="JAOR";

	pChar = sCadena;
	printf("Dirección de pChar :%p\n",pChar);

	pChar = &sCadena;
	printf("Dirección de pChar :%p\n",pChar);

	pChar = &sCadena[0];
        printf("Dirección de pChar :%p\n",pChar);

	CL;

	printf("1)Imprimimos la cadena del arreglo\n");
 		for(iCuenta=0;iCuenta<5;iCuenta++)
			printf("%c",sCadena[iCuenta]);
	CL;

	printf("2)Imprimimos la cadena desde el vector como apuntador\n");
		for(iCuenta=0;iCuenta<5;iCuenta++)
			printf("%c",*(sCadena+iCuenta));
	CL;

	 printf("3)Imprimimos la cadena desde el vector como arreglo\n");
                for(iCuenta=0;iCuenta<5;iCuenta++)
                        printf("%c",pChar[iCuenta]);
        CL;

	 printf("4)Imprimimos la cadena desde el apuntador\n");
                for(iCuenta=0;iCuenta<5;iCuenta++)
                        printf("%c",*(pChar+iCuenta));
        CL;

	//Modificamos desde el aputador
	strcpy(pChar,"soft");

	printf("5)Imprimimos la cadena modificada con strcpy desde el arreglo\n");
                for(iCuenta=0;iCuenta<5;iCuenta++)
                        printf("%c",pChar[iCuenta]);
        CL;

	printf("6)Imprimimos la cadena modificada  desde el apuntador como arreglo\n");
                for(iCuenta=0;iCuenta<5;iCuenta++)
                        printf("%c",pChar[iCuenta]);
        CL;

	*(pChar+0)='A'; //no es necesario poner "+0"
	*(pChar+1)='B';
	*(pChar+2)='C';
	*(pChar+3)='D';
	*(pChar+4)='\0';

	printf("7)Imprimimos la cadena modificada  uno a uno desde el apuntador como arreglo\n");
                for(iCuenta=0;iCuenta<5;iCuenta++)
                        printf("%c",pChar[iCuenta]);
	CL;

	printf("8)Imprimimos la cadena modificada uno a uno desde el apuntador\n");
                for(iCuenta=0;iCuenta<5;iCuenta++)
                        printf("%c",*(pChar+iCuenta));
	pChar[0]='W';
	pChar[1]='X';
	pChar[2]='Y';
	pChar[3]='Z';
	pChar[4]='\0';

	CL;
	printf("9)Imprimimos la cadena modificada  uno a uno desde el apuntador como arreglo\n");
                for(iCuenta=0;iCuenta<5;iCuenta++)
                        printf("%c",pChar[iCuenta]);
	CL;
return 0;
}
