#include <stdio.h>
int main()
{
	printf("curso de C\n");
	printf("Clase 24 - Conversion de Tipos de Datos \n\n");

	char 	xChar=127;
	int  	xInteger=10;
	float	xFloat=100.50;
	double	xDouble=400.50;

	printf("Imprimiendo las Conversiones automáticas...\n");
	printf("xChar		* xInteger :%c \n", xChar * xInteger);
	printf("xChar		* xInteger :%d \n", xChar * xInteger);
	printf("xInteger	* xFloat   :%d \n", xInteger * xFloat);
	printf("xInteger	* xFloat   :%F \n", xInteger * xFloat);
	printf("xFloat		* xDouble  :%d \n", xFloat * xDouble);
	printf("xFloat		* xDouble  :%F \n\n", xFloat * xDouble);

	int	xInteger2=3;
	float	xFloat2=25.50;

	printf("imprimiendo valores con cast ....\n");
	xFloat = xInteger / xInteger2;
	printf("xFloat		:%f \n", xFloat);
	xFloat = (float)xInteger / xInteger2;
	printf("xFloat		:%f \n\n", xFloat);

	xFloat = 100.50;
	xFloat2 = 20.50;
	xInteger = xFloat / xFloat2;
	printf("xFloat/Xfloat2	:%f \n",xFloat/xFloat2);
	printf("xInteger	:%d \n",xInteger);
	xInteger=(int)(xFloat) / (int) xFloat2;
	printf("XInteger	:%d \n\n",xInteger);

	xChar = (char)321;
	printf("xChar		:%c \n", xChar);
	xChar = 321;
	printf("xChar		:%c \n", xChar);
return 0;



}
