#include <stdio.h>
#define CR printf("\n")

int main()
{
	printf("Curso de C \n");
	printf("Clase 33 - Operaciones con punteros \n\n");

	char xChar1='A';
	char xChar2='B';
	char xChar3='C';

	short int xsInt1=1;
	short int xsInt2=2;
	short int xsInt3=3;

	int xInt1=7;
	int xInt2=8;
	int xInt3=9;

	char* 		pChar=&xChar1;
	short int*	psInt=&xsInt1;
	int*		pInt=&xInt1;
	void*		pVoid=xInt1;
 
	printf("Prolongamos al tamaño en Bytes de los tipos de datos \n");
	printf("sizeof(char) :%d sizeof(short int):%d sizeof (int):%d sizeof(void):%d \n",sizeof(char),sizeof(short int), sizeof(int),sizeof(void));

	CR;

	printf("Desplegamos las direcciones y valores de las variables \n");
	printf("Direcciones xChar1:%p %c xChar2:%p %c xChar3:%p %c \n",&xChar1,xChar1,&xChar2,xChar2,&xChar3,xChar3);
	printf("Direcciones xsInt1:%p %d xsInt2:%p %d xsInt3:%p %d \n",&xsInt1,xsInt1,&xsInt2,xsInt2,&xsInt3,xsInt3);
	printf("Direcciones xInt1 :%p %d xInt2 :%p %d xInt3 :%p %d \n",&xInt1,xInt1,&xInt2,xInt2,&xInt3,xInt3);

	CR;
//O.K.

	printf("Desplegamos los valores dirección y valores a los que apuntan los apuntadores\n");
	printf("Valor-dirección de pChar :%p Valor de donde apunta :%c \n", pChar,*pChar);
	printf("Valor-direeción de psInt :%p Valor de donde apunta :%i \n", psInt,*psInt);
	printf("Valor-dirección de pInt  :%p Valor de donde apunta :%i \n", pInt ,*pInt);
	printf("Valor-dirección de pVoid :%p \n", pVoid);

	pChar++;
	psInt++;
	pInt++;
	pVoid++;

	printf("Desplegamos los valores dirección y valores a los que apuntan los apuntadores\n");
        printf("Valor-dirección de pChar :%p Valor de donde apunta :%c \n", pChar,*pChar);
        printf("Valor-direeción de psInt :%p Valor de donde apunta :%i \n", psInt,*psInt);
        printf("Valor-dirección de pInt  :%p Valor de donde apunta :%i \n", pInt ,*pInt);
	printf("Valor-dirección de pVoid :%p \n", pVoid);

	pChar++;
        psInt++;
        pInt++;
        pVoid++;

        printf("Desplegamos los valores dirección y valores a los que apuntan los apuntadores\n");
        printf("Valor-dirección de pChar :%p Valor de donde apunta :%c \n", pChar,*pChar);
        printf("Valor-direeción de psInt :%p Valor de donde apunta :%i \n", psInt,*psInt);
        printf("Valor-dirección de pInt  :%p Valor de donde apunta :%i \n", pInt ,*pInt);
        printf("Valor-dirección de pVoid :%p \n", pVoid);

	pChar++;
        psInt++;
        pInt++;
        pVoid++;

        printf("Desplegamos los valores dirección y valores a los que apuntan los apuntadores\n");
        printf("Valor-dirección de pChar :%p Valor de donde apunta :%c \n", pChar,*pChar);
        printf("Valor-direeción de psInt :%p Valor de donde apunta :%i \n", psInt,*psInt);
        printf("Valor-dirección de pInt  :%p Valor de donde apunta :%i \n", pInt ,*pInt);
        printf("Valor-dirección de pVoid :%p \n", pVoid);

	pChar = pChar +3;
        psInt = psInt +3;
        pInt  = pInt  +3;
        pVoid = pVoid +3;

        printf("Desplegamos los valores dirección y valores a los que apuntan los apuntadores\n");
        printf("Valor-dirección de pChar :%p Valor de donde apunta :%c \n", pChar,*pChar);
        printf("Valor-direeción de psInt :%p Valor de donde apunta :%i \n", psInt,*psInt);
        printf("Valor-dirección de pInt  :%p Valor de donde apunta :%i \n", pInt ,*pInt);
        printf("Valor-dirección de pVoid :%p \n", pVoid);

	char acCaracteres[5]={"ABCDE"};
	short int asiEnteros[5]={10,20,30,40,50};
	int	aiEnteros [5]={100,200,300,400,500};

	pChar 	= &acCaracteres;
	psInt	= &asiEnteros;
	pInt 	= &aiEnteros;

	printf("Desplegamos los valores dirección y valores a los que apuntan los apuntadores\n");
        printf("Valor-dirección de pChar :%p Valor de donde apunta :%c \n", pChar,*pChar);
        printf("Valor-direeción de psInt :%p Valor de donde apunta :%i \n", psInt,*psInt);
        printf("Valor-dirección de pInt  :%p Valor de donde apunta :%i \n", pInt ,*pInt);


        pChar = pChar +3;
        psInt = psInt +3;
        pInt  = pInt  +3;
        pVoid = pVoid +3;

	printf("Desplegamos los valores dirección y valores a los que apuntan los apuntadores\n");
        printf("Valor-dirección de pChar :%p Valor de donde apunta :%c \n", pChar,*pChar);
        printf("Valor-direeción de psInt :%p Valor de donde apunta :%i \n", psInt,*psInt);
        printf("Valor-dirección de pInt  :%p Valor de donde apunta :%i \n", pInt ,*pInt);

	*pChar = *pChar +10;
        *psInt = *psInt +7;
        *pInt  = *pInt  +5;

        printf("Desplegamos los valores dirección y valores a los que apuntan los apuntadores\n");
        printf("Valor-dirección de pChar :%p Valor de donde apunta :%c \n", pChar,*pChar);
        printf("Valor-direeción de psInt :%p Valor de donde apunta :%i \n", psInt,*psInt);
        printf("Valor-dirección de pInt  :%p Valor de donde apunta :%i \n", pInt ,*pInt);




return 0;
}
