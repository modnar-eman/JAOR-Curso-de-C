#include <stdio.h>

int main ()
{
	int  iResult=0;

	printf("curso de C \n");
	printf("Clase 19 - Operadores de bits precedencia \n\n");

	printf("Valores Iniciales y Comprobaciones\n");
	iResult=~10;
	printf("~10 			:%d \n",iResult);
	iResult = ~(~10);
	printf("~(~10) 			:%d \n\n", iResult);

	printf("Evaluando Precedencia de NOT con Desplazamiento Iazquierda \n");
	iResult = ~10 << 1;
	printf("~10 << 1		:%d \n", iResult);
	iResult = ~(10 << 1);
	printf("~(10 << 1) 		:%d \n\n", iResult);

	printf("evaluando precedencia de NOT con Desplazamiento a la Derecha\n");
	iResult = ~10 >> 1;
        printf("~10 << 1 		:%d \n", iResult);
        iResult = ~(10 >> 1);
        printf("~(10 >> 1) :%d \n\n", iResult);
	printf("6 >> 1			:%d\n", 6>>1);
	printf("7 >> 1			:%d\n\n", 7>>1);

	printf("Evaluando precedencia de desplazamiento izquierda con & \n\n");
	iResult=10 & 1<< 1;
	printf("10 & 1 << 1 		:%d\n", iResult);
	iResult= (10 & 1) << 1;
	printf("(10 & 1) << 1 		:%d\n\n", iResult);

	printf("Evaluando precedencia de desplazamiento Derecha con & \n\n");
        iResult= 10 & 1 >> 1;
        printf("10 & 1 >> 1 		:%d\n", iResult);
        iResult= (10 & 1) >> 1;
        printf("(10 & 1) >> 1 		:%d\n\n", iResult);

	printf("evaluando precedencia de & con ^\n");
	iResult = 10^1 & 1;
	printf("10^1 & 1 		:%d\n",iResult);
	iResult = (10^1) & 1;
        printf("(10^1) & 1 		:%d\n\n",iResult);

	printf("evaluando precedencia de ^ con |\n");
	iResult = 10|1 ^ 1;
        printf("10|1 ^ 1 		:%d\n",iResult);
        iResult = (10|1) ^ 1;
        printf("(10|1) ^ 1 		:%d\n\n",iResult);

	printf("evaluando precedencia con otros operadores\n");
	iResult= 10 ^ 1 & 1 + 5;
	printf("10 ^ 1 & 1 + 5 		:%d\n", iResult);
	iResult= (10 ^ 1 & 1) + 5;
        printf("(10 ^ 1 & 1) + 5 	:%d\n", iResult);

	return 0;
}

