#include <stdio.h>
#define CR printf("\n")
int main()
{

	printf("curso de C \n");
	printf("Clase 35 - punteros y arreglos\n\n");

	CR;
	int 	iEdad 	=40;
	int* 	piEdad 	= &iEdad;
	int** 	ppiEdad = &piEdad;
	int*** 	pppiEdad= &ppiEdad;

 	printf("Desplegamos las direcciones de cada variable\n");
	printf("dirección de iEdad 	%p \n",&iEdad);
	printf("dirección de piEdad	%p \n",&piEdad);
	printf("dirección de ppiEdad	%p \n",&ppiEdad);
	printf("dirección de pppiEdad	%p \n",&pppiEdad);

	printf("Desplegamos el valor de iEDad desde todas las variables\n");
        printf("valor de iEdad desde iEdad	%i \n",iEdad);
        printf("valor de iEdad desde piEdad	%i \n",*piEdad);
        printf("valor de iEdad desde ppiEdad	%i \n",**ppiEdad);
        printf("valor de iEdad desde pppiEdad	%i \n",***pppiEdad);

	printf("Desplegamos la dirección de iEdad desde todas las variables\n");
        printf("dirección de iEdad desde iEdad 		%p \n",&iEdad);
        printf("dirección de iEdad desde piEdad 	%p \n",piEdad);
        printf("dirección de iEdad desde ppiEdad	%p \n",*ppiEdad);
        printf("dirección de iEdad desde pppiEdad	%p \n",**pppiEdad);

        printf("Desplegamos la dirección de piEdad desde las variables puntero\n");
        printf("dirección de piEdad desde piEdad         %p \n",&piEdad);
        printf("dirección de piEdad desde ppiEdad        %p \n",ppiEdad);
        printf("dirección de piEdad desde pppiEdad       %p \n",*pppiEdad);

	printf("Desplegamos la dirección de ppiEdad desde todas las variables\n");
        printf("dirección de ppiEdad desde ppiEdad        %p \n",&ppiEdad);
        printf("dirección de pppiEdad desde pppiEdad      %p \n",pppiEdad);

	*piEdad = 33;

	printf("Desplegamos el valor de iEdad Modificado desde piEdad desde todas las variables\n");
        printf("valor de iEdad desde iEdad          %i \n",iEdad);
        printf("valor de iEdad desde piEdad         %i \n",*piEdad);
        printf("valor de iEdad desde ppiEdad        %i \n",**ppiEdad);
        printf("valor de iEdad desde pppiEdad       %i \n",***pppiEdad);

	**ppiEdad =11;
	printf("Desplegamos el valor de iEdad Modificado desde piEdad desde todas las variables\n");
        printf("valor de iEdad desde iEdad          %i \n",iEdad);
        printf("valor de iEdad desde piEdad         %i \n",*piEdad);
        printf("valor de iEdad desde ppiEdad        %i \n",**ppiEdad);
        printf("valor de iEdad desde pppiEdad       %i \n",***pppiEdad);

	***pppiEdad=44;

        printf("Desplegamos el valor de iEdad Modificado desde piEdad desde todas las variables\n");
        printf("valor de iEdad desde iEdad          %i \n",iEdad);
        printf("valor de iEdad desde piEdad         %i \n",*piEdad);
        printf("valor de iEdad desde ppiEdad        %i \n",**ppiEdad);
        printf("valor de iEdad desde pppiEdad       %i \n",***pppiEdad);



return 0;
}
