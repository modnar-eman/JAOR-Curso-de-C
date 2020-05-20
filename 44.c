#include <stdio.h>
#include <string.h>
#define CR printf("\n");

int main()
{
	printf("Curso de C \n");
	printf("Clase 44 Funciones de cadena");
	CR
	char sNombre[]="Juan";
	char sPaterno[]="Perez";
	char sMaterno[]="Rodriguez";
	char sCompleto[50]="";
	char sAux[50]="";

	strcpy(sCompleto,sNombre);
	printf("Completo %s\n",sCompleto);

	strcat(sCompleto, " Jose");
	printf("Completo %s\n", sCompleto);

	strcat(sCompleto," ");
	strcat(sCompleto,sPaterno);
	strcat(sCompleto," ");
	strcat(sCompleto,sMaterno);
	printf("Completo %s",sCompleto);
	CR
	CR
	printf("Busca la primera ocurrencia de Ro y devuelve el resto\nes: %s\n",strstr(sCompleto,"Ro"));
	strcpy(sAux,strstr(sCompleto,"Perez"));
	printf("Búsqueda: %s\n",sAux);

	int iResult=0;
	strcpy(sAux,"JUAN");
	iResult=strcmp(sNombre,sAux);

	if (iResult <0)
		printf("%s es menor que %s",sNombre,sAux);
	else if (iResult>0)
		printf("%s es mayor que %s",sNombre,sAux);
	else
		printf("%s es igual a %s",sNombre,sAux);
	CR

	iResult=0;
        strcpy(sAux,"juana");
        iResult=strcmp(sNombre,sAux);

        if (iResult <0)
                printf("%s es menor que %s",sNombre,sAux);
        else if (iResult>0)
                printf("%s es mayor que %s",sNombre,sAux);
        else
                printf("%s es igual a %s",sNombre,sAux);
        CR
        strcpy(sNombre,"0");
	strcpy(sAux,"1");
        iResult=strcmp(sNombre,sAux);

        if (iResult <0)
                printf("%s es menor que %s",sNombre,sAux);
        else if (iResult>0)
                printf("%s es mayor que %s",sNombre,sAux);
        else
                printf("%s es igual a %s",sNombre,sAux);
        CR

	strcpy(sNombre,"juan");
        strcpy(sAux,"juan");
        iResult=strcmp(sNombre,sAux);

        if (iResult <0)
                printf("%s es menor que %s",sNombre,sAux);
        else if (iResult>0)
                printf("%s es mayor que %s",sNombre,sAux);
        else
                printf("%s es igual a %s",sNombre,sAux);
        CR
	printf("La longitud del nombre: 	 %d\n", strlen(sNombre));
	printf("La longitud del apellido: 	 %d\n", strlen(sPaterno));
	printf("La longitud del apellido materno:%d\n", strlen(sMaterno));
	printf("La longitud del nombre completo: %d\n", strlen(sCompleto));
	CR
	printf("Nombre completo %s\n",sCompleto);
	printf("Primer token 	%s\n",strtok(sCompleto," "));
	printf("Segundo token	%s\n",strtok(NULL," "));
	printf("Tercer token	%s\n",strtok(NULL," "));
	printf("Cuarto token	%s\n",strtok(NULL," "));
	CR
return 0;
}
