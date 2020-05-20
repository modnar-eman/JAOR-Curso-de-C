#include <stdio.h>
#define CR printf("\n");

void sbFuncionValor(int iValor)
{
	iValor=23;
	printf("Parametro por Valor %i\n",iValor);
return ;
}
void sbFuncionReferencia(int *iValor)
{
	 *iValor=20;
	//printf("Parametro por Referencia %i \n",iValor);
return ;
}

int fnIntSumarestaMultipli2Numeros(int *xNum1,int *xNum2)
{

	int iResult=0;
	int resta=0;
	int multiplicacion = 0;
	iResult=*xNum1+*xNum2;
	resta=*xNum1 - *xNum2;
	multiplicacion=* xNum1 * *xNum2;
	*xNum1=resta;
	*xNum2=multiplicacion;
	return iResult;

}
int main ()
{
	printf("Curso de C \n");
	printf("Parámetros por valor y referencia");
	CR
	int iValor=10;
	int iValor1=2;
	int iValor2=2;
	int iResult=0;
	printf("Valor al principio %i \n", iValor);
	sbFuncionValor(iValor);
	printf("Valor sin afectar %i\n", iValor);
	sbFuncionReferencia(&iValor);
	printf("Valor afectado %i\n", iValor);
	iResult=fnIntSumarestaMultipli2Numeros(&iValor1, &iValor2);
	printf("suma %i\n", iResult);
	printf("resta %i\n", iValor1);
	printf("Multiplicación %i\n", iValor2);

return 0;
}
