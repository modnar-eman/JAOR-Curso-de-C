#include <stdio.h>

int fnIntFactorial(int iNumero)
{
	//int xResult=0;
	if  (iNumero==0||iNumero==1)
		return 1;
	else
		return(iNumero*fnIntFactorial(iNumero-1));
/*Entra a la función compara si el iNumero es 1 o 0, si no pasa a este else
al entrar aquí vuelve a llamarse la función a sí misma los valores de iNumero
se van guardando en la pila, cuando llega al final iValor=1 y retorna 1
aún no se sale de la función, se va haciendo pull en la pila sacando los valores
para ahora sí realizar la multiplicación*/
// xResult=fnIntFactorial(iNumero-1);
//return(iNumero *xResult);	
}

int main(int argc, int *argv[],char *env[])
{
	int iValor=3;
	int iValor2=0;
	printf("Curso de c\n");
	printf("Clase 53 - recursividad\n");
	printf("\n");
	iValor2=fnIntFactorial(iValor);
	printf("El factorial de %d es: %d(valor impreso desde la función) %d (valor impreso desde variable) \n",iValor,fnIntFactorial(iValor),iValor2);

return 0;
}
