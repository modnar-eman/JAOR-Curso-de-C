#include <stdio.h>
int main()
{
	int x=4,y=0,z=0;

	printf("curso de C\n");
	printf("clase 22 - Operadores Otros \n\n");

	printf(" Desplegando los tamaños de los tipos de datos en C \n\n");
	printf("La longitud de char 			:%d \n", sizeof(char));
	printf("La longitud de int			:%d \n", sizeof(int));
	printf("La longitud de short int		:%d \n", sizeof(short int));
	printf("La longitud de long int        		:%d \n", sizeof(long int));
	printf("La longitud de float        		:%d \n", sizeof(float));
        printf("La longitud de short double     	:%d \n", sizeof(double));
        printf("La longitud de short long double        :%d \n", sizeof(long double));

	char	xChar;
	int	xInteger;
	float	xFloat;
	double	xDouble;
	char	arrChar[10];
	int 	arrInteger[10];
	float	matFloat[5][4];
	double	arrDouble[10];

	printf("Desplegando los tamaños de las variables Definidas\n");
	printf("La longitud de xChar	 	:%d \n",sizeof (xChar));
        printf("La longitud de xInteger 	:%d \n",sizeof (xInteger));
        printf("La longitud de Float		:%d \n", sizeof(xFloat));
	printf("La longitud de Double		:%d \n", sizeof(xDouble));
	printf("La longitud de Char		:%d \n", sizeof(arrChar));
	printf("La longitud de Integer		:%d \n", sizeof(arrInteger));
	printf("La longitud de Float 		:%d \n", sizeof(matFloat));
        printf("La longitud de Double		:%d \n\n", sizeof(arrDouble));

	int iExistencia=12, iPrecio=0;
	iPrecio=(iExistencia>10) ? 100 : 102;

	printf("El precio es 		:%d \n", iPrecio);
	iExistencia=5;

	iPrecio=(iExistencia>10) ? 100 : 102;
	printf("El precio es 		:%d \n", iPrecio);

	(iPrecio > 100) ? printf("El precio es mayor que	:100 \n") : (iPrecio+=10);

	iPrecio = 99;

	(iPrecio > 100) ? printf("El precio es mayor que 	:100 \n") : (iPrecio+=10), printf("el precio se ha modificado \n");

	printf("El precio es		:%d \n\n", iPrecio);


return 0;
}

