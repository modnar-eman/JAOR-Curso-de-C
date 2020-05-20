#include <stdio.h>
#define CR printf("\n");
#include <stdlib.h>
#include <string.h>

int fnintCadenaBuscaCaracter(char *strCadena, char xCaracter)
//Se va a buscar xCaracter en la strCadena
{
	int iCuenta;
	int iResult=-1; //iResult vale -1 si no encuentra el xCaracter dentro de strCadena ese valor no cambiará


		for(iCuenta=0;iCuenta<strlen(strCadena);iCuenta++)
	//iCuenta aumentará pero sólo en la longitud de los espacios que se estén usando de la cadena

			if(strCadena[iCuenta]==xCaracter)
		//si xCaracter y la letra que contenga el espacio de strCadena en la posición dada por iCuenta son iguales
			{
				iResult=iCuenta;//entonces se guardará la posición en iResult
				break;//y se detiene
			}
return iResult;//se devuelve el dato a main
}


void sbCadenaInicializa(char strCadena[], char xCaracter)
//se cambian los valores de strCadena por lo que está en xCaracter
{
	int iCuenta;
		for(iCuenta=0;iCuenta<strlen(strCadena);iCuenta++)//se cambia sólo en las posiciones que están siendo usadas
			{
				strCadena[iCuenta]=xCaracter;//se va sustituyendo el valor en cada posición por xCaracter
			}


return;
}

void sbVectorInicializa(int iVector[], int iElementos, int iValorInicializa)
/*Aquí como es un vector y no una cadena no podemos usar strlen, por lo que no sabemos cuántos elementos tiene el vector
 entonces tenemos que especificarlo agregando otra variable diciendo el numero de elementos, en este caso iElementos
 esta función, cambiará (inicializará) todos los valores del vector por lo que hay en iValor inicializa*/
{
	int iCuenta;

		for(iCuenta=0;iCuenta<iElementos;iCuenta++)//iCuenta llega sólo hasta el número de elementos que hay en el vector
		{
			iVector[iCuenta]=iValorInicializa;//El valor se va cambiando por lo que hay en cada posición 
		}
return;//y como es void no regresa nada

}
int fnIntVectorSumaObtenMayoryMenor(int *iVector, int iElementos,int *iMayor,int *iMenor)
/*Esta función sumará todos los valores que hay en el vector y te dirá cuál es el mayor y el menor
pero si pones varios valores negativos en ciertas posiciones tiene un comportamiento extraño
aquí como va a devolver iMayor e iMenor tengo que recibir la posición de memoria de los mismos desde main(&iMayor,&iMenor)
y declararlos como apuntador en mi función*/
{
	int iResult=0;
	int iCuenta=0;

	*iMayor = iVector[0];//para que empiece desde el principio
	*iMenor = iVector[0];//del vector

		for(iCuenta=0;iCuenta<iElementos;iCuenta++)
			{
				iResult=iResult+iVector[iCuenta];

				if(iVector[iCuenta]>*iMayor)

					*iMayor = iVector[iCuenta];

				if(iVector[iCuenta]<*iMenor)
					*iMenor = iVector[iCuenta];
			}
return iResult;
}





int main ()
{
	printf("Curso de C\n");
	printf("Clase 50 - parámetros arreglos");
	CR
	CR
	int iVector[10]={8,3,-13,5,1,4,12,-9,4-1};
	char strCadena[10]="jaor56789";//el numero que elementos que use es lo que va a cambiar 
 	int iResult;
	int iMayor; 
	int iMenor;
	printf("Información desde afuera\n");
	printf("Size of de strCadena 	%ld\n",sizeof(strCadena));
	printf("Size of de *strCadena 	%ld\n",sizeof(*strCadena));
//	printf("Dirección de la cadena	%lp\n",sizeof(&strCadena));
	printf("Elementos en la cadena:	%ld\n",sizeof(strCadena) / sizeof(*strCadena) );
	CR
	printf("Información desde afuera\n");
	printf("SizeOf de iVector:	%ld\n", sizeof (iVector) );
	printf("SizeOf de *iVector:	%ld\n", sizeof (*iVector) );
//	printf("SizeOf de &iVector:	%p\n", sizeof (&iVector) );
	printf("Elementos en el vector, %ld\n\n", sizeof(iVector) / sizeof (*iVector) );
	CR
	iResult=fnintCadenaBuscaCaracter(strCadena,'o');

	printf("la letra o se encontró en la cadena %s posición  %d\n",strCadena,iResult);
	CR

	iResult=fnIntVectorSumaObtenMayoryMenor(iVector,10,&iMayor,&iMenor);//como la función que estoy llamando devolverá iMayor e iMenor tengo que pasarles su dirección de memoria y declarar el apuntador en los parámetros de la función
	printf("Información de la suma, Mayor y Menor\n");
	printf("Suma:	%d\n", iResult);
	printf("Mayor:	%d\n", iMayor);
	printf("Menor:	%d\n", iMenor);

	sbCadenaInicializa(strCadena,'.');
	printf("Cadena inicializada: %s \n\n",strCadena);

	sbVectorInicializa(iVector,10,0);//Aquí por ejemplo si yo sólo le dijera que tengo 5 espacios pero el vector tiene 10 sólo cambiará lo de las 5 posiciones y las otras 5 se quedan con los valores que tenían antes
	iResult=fnIntVectorSumaObtenMayoryMenor(iVector,10,&iMayor,&iMenor);
	printf("información de la Suma, Mayor y Menor\n");
	printf("Suma: %d\n",iResult);
	printf("Mayor:%d\n",iMayor);
	printf("Menor:%d\n",iMenor);

return 0;
}
