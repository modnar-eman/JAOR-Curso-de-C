#include <stdio.h>
#include <stdlib.h>
void sbMatrizDespliega(int iMatriz[][5],int iRenglones)
/*Como no sabemos cuántas posiciones(columnas) hay en la matriz cuando la recibimos
tenemos que mandar el numero desde main, siempre que recibimos una matriz
*/
{
	
	int iCtaRen;
	int iCtaCol;

	printf("Desplegando la matriz...\n");

		for (iCtaRen=0; iCtaRen<iRenglones; iCtaRen++)
			{
				for(iCtaCol=0;iCtaCol<5;iCtaCol++)
					printf("%d",iMatriz[iCtaRen][iCtaCol]);
					printf("\n");
			}
	printf("\n");
}


void sbMatrizLlena(int iMatriz[][5], int iRenglones, int iValor)
/*en este caso no acepta que le pase el vector como puntero
*/
{
	int iCtaRen;
	int iCtaCol;
	for (iCtaRen=0;iCtaRen<iRenglones;iCtaRen++)//empieza por los renglones

	{
		for (iCtaCol=0; iCtaCol<5; iCtaCol++)
		//se va pegando iValor conforme va recorriendo renglones y culumnas
		iMatriz[iCtaRen][iCtaCol]=iValor;	

		iValor--;
	}
}




void sbImprimiendoNombres(char Nombres[][10],int iElementos)
/* Se manda la cadena de nombres para que la imprima, no importa que el nombre de la variable en el main,
y el nombre que yo le ponga como parámetro a la función no seán iguales mientras sean el mismo tipo,
aquí también le tengo que poner el número de elementos que tiene la cadena*/
{
	int iCuenta;
	printf("Desplegando los nombres...\n");
		for(iCuenta=0;iCuenta<iElementos;iCuenta++)//iCuenta hasta el número de elementos que tengala cadena

			printf("%s \n",Nombres[iCuenta]);//se imprimen cada uno de los elementos
			printf("\n\n");
}

void sbImprimiendoNombres2(char *Nombres, int iElementos)
/*Esta función es exactamente la misma que la anterior ya que aquí le paso el apuntador hacia la cadena y en la otra el vector
un vector es un apuntador y viceversa, o sea que es lo mismo y se usa igual*/
{
	int iCuenta;

	printf("Desplegando los Nombres...\n");
		for(iCuenta=0;iCuenta<iElementos;iCuenta++)
		printf("%s \n",Nombres+(iCuenta*10));
		printf("\n");
}

void sbArr3dDespliega(int iArreglo3d[][3][3],int iNivel1)
/*Como las anteriores este es una matriz pero de 3 dimensiones igual siempre se deja en blanco el primer número 
e idicárselo en otra variable*/
{
	int iCtaNiv1;
	int iCtaNiv2;
	int iCtaNiv3;

	printf("Desplegando Arreglo de 3Dimiensiones\n");
		for ( iCtaNiv1=0; iCtaNiv1<iNivel1;iCtaNiv1++)
				for(iCtaNiv2=0;iCtaNiv2<3;iCtaNiv2++)
				{
					for (iCtaNiv3=0;iCtaNiv3<3;iCtaNiv3++)
					printf("%d",iArreglo3d[iCtaNiv1][iCtaNiv2][iCtaNiv3]);
					printf("\n");
				}
				printf("\n");
}


int main()
{
        printf("Curso de C \n");
        printf("Clase 51 - Parámetros Matriz \n");
        int iMatriz[3][5];
//	int iArreglo3d[3][3][3]={{{1,2,3},{4,5,6},{7,8,9}},{{10,11,1},{13,14,15},{16,17,18}},{{19,20,21},{22,23,24},{25,26,27}}};
        char strNombres[3][10]={"Juan","Jose","Maria"};
		sbMatrizDespliega(iMatriz,3);
		sbMatrizLlena(iMatriz,3,7);
		sbMatrizDespliega(iMatriz,3);
		sbImprimiendoNombres(strNombres,3);
		sbImprimiendoNombres2(*strNombres,3);
        int iArreglo3d[3][3][3]={{{1,2,3},{4,5,6},{7,8,9}},{{10,11,1},{13,14,15},{16,17,18}},{{19,20,21},{22,23,24},{25,26,27}}};
		sbArr3dDespliega(iArreglo3d,3);


return 0;
}
