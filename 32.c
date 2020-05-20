#include <stdio.h>
#define CAMBIO_LINEA printf("\n")

int main()
{
	printf("Curso de C \n");
	printf("Clase 32 - Punteros \n\n");

	int xInteger	=10;
	long xLong   	=20;
	char xChar	='x';
	float xFloat	=14.50;
	double xDouble	=345.50;

 	int 	*pInteger;
	long 	*pLong;
	char	*pChar;
	float	*pFloat;
	double	*pDouble;
	void	*pVoid;

	printf("Desplegando la longitud en bytes de los apuntadores\n");
	printf("SizeOf pInteger	:%d \n", sizeof(pInteger));
	printf("SizeOf pLong	:%d \n", sizeof(pLong));
	printf("SizeOf pChar	:%d \n", sizeof(pChar));
	printf("SizeOf pFloat	:%d \n", sizeof(pFloat));
	printf("SizeOf pDouble	:%d \n", sizeof(pDouble));
	printf("SizeOf pVoid	:%d \n", sizeof(pVoid));

	CAMBIO_LINEA;

	printf("Desplegando las direcciones de las variables \n");
	printf("Dirección xInteger :%p :%u \n",&xInteger,&xInteger);
	printf("Dirección xLong    :%p :%u \n",&xLong,&xLong);
	printf("Dirección xChar    :%p :%u \n",&xChar,&xChar);
	printf("Dirección xFloat   :%p :%u \n",&xFloat,&xFloat);
	printf("Dirección xDouble  :%p :%u \n",&xDouble,&xDouble);

	CAMBIO_LINEA;

	//Asignando a los apuntadores , las direcciones de las variables

	pInteger= &xInteger;
	pLong	= &xLong;
	pChar	= &xChar;
	pFloat	= &xFloat;
	pDouble = &xDouble;
	pVoid	= xInteger;

	printf("Desplegando las direcciones de los Apuntadores y a donde apuntan\n");
	printf("Dirección pInteger	:%p Donde apunta pInteger 	%p\n", &pInteger,pInteger);
	printf("Dirección pLong		:%p Donde apunta pLong 		%p\n", &pLong,pLong);
	printf("Dirección pChar 	:%p Donde apunta pChar		%p\n", &pChar,pChar);
	printf("Dirección pFloat 	:%p Donde apunta pFloat 	%p\n", &pFloat,pFloat);
	printf("Dirección pDouble 	:%p Donde apunta pDouble 	%p\n", &pDouble,pDouble);
	printf("Dirección pVoid 	:%p Donde apunta pVoid 		%p\n", &pVoid, pVoid);

// O.K.
	CAMBIO_LINEA;

	printf("Desplegando valores a que apuntan los Valores-direcciones de los Apuntadores\n"); 
	printf("Valor pInteger 	:%d\n",*pInteger);
	printf("Valor pLong 	:%d\n",*pLong);
	printf("Valor pChar 	:%c\n",*pChar);
	printf("Valor pFloat 	:%f\n",*pFloat);
	printf("Valor pDouble   :%e\n",*pDouble);
//printf("Dirección pVoid :%d\n", *pVoid); // no es permitido

	CAMBIO_LINEA;
	//Modificamos los valores de las variables a través de los apuntadores
	*pInteger=45;
	*pLong	=100;
	*pChar 	='Q';
	*pFloat = 556.9;
	*pDouble = 333.99;
// O.K.
	printf("Desplegando los valores de las variables y apuntadores\n");
	printf("Valor pInteger 	:%d Valor xInteger 	:%d\n", *pInteger,xInteger);
	printf("Valor pLong 	:%d Valor xLong 	:%d\n", *pLong,xLong);
	printf("Valor pChar 	:%c Valor xChar 	:%d\n", *pChar, xChar);
	printf("Valor pFloat 	:%f Valor xFloat	:%f\n", *pFloat, xFloat);
	printf("Valor pDouble 	:%e Valor xDouble 	:%e\n", *pDouble,xDouble);

	CAMBIO_LINEA;

	printf("Verificando asignciones\n",*pInteger,pInteger);
//O.K.
	//asignación entre auntadores
	pInteger=pLong; //esto es permitido

	//Verificamos
	printf("pInteger después se le asigna pLong %d - %p\n",*pInteger,pInteger);
//O.K.
	//Asignamos a pInteger pFloat
	pInteger =pFloat;

	//verificamos
	printf("pInteger despues se le asigna pFloat %d - %f -%p\n",*pInteger,*pInteger,pInteger); 

	//Reasignamos pInteger
	pInteger = &xInteger;

//O.K238	//asignamos pInteger pFloat
	pInteger =(int *)pFloat; //esto falla

//O.k 241	//Verificamos
	printf("pInteger despues se le asigna (int *) pFloat %d - %d -%p \n", *pInteger, *pInteger,pInteger);

//244
	pInteger = pChar;	

	// Verificamos
	printf("pInteger despues se le asigna pChar %d %p \n", *pInteger,pInteger);
	printf("pInteger despues se le asigna pChar %d %p \n", *pInteger,pInteger);

	pInteger = &xInteger;

	pInteger = pDouble;

	printf("pInteger despues se le asigna pDouble %e %p \n", *pInteger,pInteger);

	pVoid = &xInteger;
	pInteger = pVoid;

	printf("pInteger despues pVoid=&xInteger %d %p \n", *pInteger, pInteger);



return 0;
} 
