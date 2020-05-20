#include <stdio.h>
#include <string.h>
#define CR printf("\n");

struct ACCESO
{
	char 	cTipo;
	union
	{

	int iIde;
	char cNick[8]; 
	};
};




union COLOR
{
	int rgb;
	struct
	{
		unsigned char 	blue;
		unsigned char 	green;
		unsigned char 	red;
	};
};


int main()
{

	printf("Curso de lenguaje C\n");
	printf("clase 39 - Uniones \n\n");

	struct ACCESO xAcceso;
	printf("Tamaño de la union del acceso :i\n",sizeof(xAcceso));

	xAcceso.cTipo='0';
	xAcceso.iIde=456;

	printf("Imprimimos el acceso\n");
	printf("Ide	%i \n", xAcceso.iIde);
	printf("Nick	%s \n", xAcceso.cNick);

	CR
	xAcceso.cTipo='N';
	strcpy(xAcceso.cNick,"super");

	printf("Imprimimos el acceso\n");
	printf("Ide	%i\n", xAcceso.iIde);
	printf("Nick	%s\n", xAcceso.cNick);

	CR

	union COLOR xColor;
	xColor.rgb=0XFFFFFFFF;
	printf("Tamaño de la union del color :%luc \n",sizeof(xColor));	

	printf("El color establecido a blanco\n");
	printf("El valor del color RGB:		:%d\t\t	 %X\n", xColor.rgb,xColor.rgb);
	printf("El valor del color Red:		:%i\t\t	 %X\n", xColor.red,xColor.red);	
	printf("El valor del color green:	:%i\t\t	 %X\n", xColor.green,xColor.green);
	printf("El valor del color blue:	:%i\t\t	 %x\n", xColor.blue,xColor.blue);

	CR
	xColor.blue=0X00;

	printf("probemos el color azul a 0\n");
        printf("El valor del color RGB:         :%d\t\t  %X\n", xColor.rgb,xColor.rgb);
        printf("El valor del color Red:         :%i\t\t  %X\n", xColor.red,xColor.red); 
        printf("El valor del color green:       :%i\t\t  %X\n", xColor.green,xColor.green);
        printf("El valor del color blue:        :%i\t\t  %x\n", xColor.blue,xColor.blue);

	CR
        xColor.green=0X00;
        printf("probemos el color verde a 0 \n");
        printf("El valor del color RGB:         :%d\t\t  %X\n", xColor.rgb,xColor.rgb);
        printf("El valor del color Red:         :%i\t\t  %X\n", xColor.red,xColor.red); 
        printf("El valor del color green:       :%i\t\t  %X\n", xColor.green,xColor.green);
        printf("El valor del color blue:        :%i\t\t  %x\n", xColor.blue,xColor.blue);


	CR
        xColor.red=0X00;
        printf("probemos el color rojo a 0 o negro \n");
        printf("El valor del color RGB:         :%d\t\t  %X\n", xColor.rgb,xColor.rgb);
        printf("El valor del color Red:         :%i\t\t  %X\n", xColor.red,xColor.red); 
        printf("El valor del color green:       :%i\t\t  %X\n", xColor.green,xColor.green);
        printf("El valor del color blue:        :%i\t\t  %x\n", xColor.blue,xColor.blue);

	CR

        xColor.blue=0X0A;
        xColor.green=84;
        xColor.red=16;
        printf("probemos el color gris \n");
        printf("El valor del color RGB:         :%d\t\t  %X\n", xColor.rgb,xColor.rgb);
        printf("El valor del color Red:         :%i\t\t  %X\n", xColor.red,xColor.red); 
        printf("El valor del color green:       :%i\t\t  %X\n", xColor.green,xColor.green);
        printf("El valor del color blue:        :%i\t\t  %x\n", xColor.blue,xColor.blue);


return 0;
}

