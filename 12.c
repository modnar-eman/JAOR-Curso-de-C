#include <stdio.h>
#include <string.h>
int main()
{
	printf("curso de c");
	printf("clase 12 -arreglos multidimensionales");

	int intMatriz[2][5]={{00, 01, 02, 03, 04},{10, 11, 12, 13 ,14}};
	int intPlano3d[2][3][4]={{{030,001,002,003},{010,011,012,013},{020,021,022,023}},{{100,101,102,103},{110,111,112,113},{120,121,122,123}}};
	char strArrNombres[3][10]={"0>Juan","1>Maria","2>jose"};
	char strMatNombres[2][3][10]={{"00>juar","01>Maria","02>Jose"},{"10>Daniel","11>Moises","12>Martha"}};

	printf("posicion en Matriz %d \n", intMatriz[1][2]);
	intMatriz[1][2]=89;
	printf("Posicion en Matriz: %d \n", intMatriz[1][2]);
	
	printf("posicion en Plano: %d \n",intPlano3d[1][1][2]);
	intPlano3d[1][1][2]=100;
	printf("posicion en Plano: %d \n",intPlano3d[1][1][2]);
	
	printf("Posicion en arreglo %s \n", strArrNombres[2]);
	strcpy(strArrNombres[2],"JESUS");
	printf("Posicion en arreglo %s \n", strArrNombres[2]);

	printf("Posicion en Matriz %s \n", strMatNombres[1][1]);
	strcpy(strMatNombres[1][1],"DANIEL");
	printf("Posicion en Matriz %s \n", strMatNombres[1][1]);

	scanf("%s",strMatNombres[1][1]);
	printf("Posicion en Matriz %s \n", strMatNombres [1][1]);

	return 0;  

}
