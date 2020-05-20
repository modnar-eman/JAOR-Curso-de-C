#include <stdio.h>

int main ()
{
	int iEdadMaria  = 15;
	int iEdadJuan   = 20;
	int iEdadSonia  = 16;
	int iEdadJose	= 25;
	int iEdadJesus	= 34;

	printf("Curso de C \n");
	printf("Clase 14 - operadores Relacionales \n\n");

	printf(" Edades \n");
	printf(" Maria :%d \n", iEdadMaria );
	printf(" Juan  :%d \n", iEdadJuan );
	printf(" Sonia :%d \n", iEdadSonia );
	printf(" José  :%d \n", iEdadJose );
	printf(" Jesús :%d \n", iEdadJesus);

	printf(" Maria es mayor que Juan       :%d \n", iEdadMaria > iEdadJuan);
	printf(" Maria es menor que sonia      :%d \n", iEdadMaria < iEdadSonia);
	printf(" Maria es igual que Juan       :%d \n", iEdadMaria == iEdadJuan);
	printf(" Maria es diferente de Jesús   :%d \n", iEdadMaria != iEdadJesus );	
	printf(" Jose es Mayor igual que Maria :%d \n", iEdadJose >= iEdadMaria);
	printf(" José es Menor igual que Sonia :%d \n", iEdadJose <= iEdadSonia);
	printf(" José es Menor igual que Jesús :%d \n", iEdadJose <= iEdadJesus);
	printf(" José es Mayor igual que Juan  :%d \n", iEdadJose >= iEdadJuan);


return 0;
}
