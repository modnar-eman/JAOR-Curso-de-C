#include <stdio.h>

int main ()
{
	int iEdadMaria  = 15;
	int iEdadJuan   = 20;
	int iEdadSonia  = 16;
	int iEdadJose	= 25;
	int iEdadJesus	= 34;
	int iResult;

	printf("Curso de C \n");
	printf("Clase 14 - operadores Relacionales \n\n");

	printf(" Edades \n");
	printf(" Maria :%d \n", iEdadMaria );
	printf(" Juan  :%d \n", iEdadJuan );
	printf(" Sonia :%d \n", iEdadSonia );
	printf(" José  :%d \n", iEdadJose );
	printf(" Jesús :%d \n", iEdadJesus);

	iResult = iEdadJesus > iEdadJose == iEdadJesus > iEdadMaria;
	printf("iEdadJesus > iEdadJose == iEdadJesus > iEdadMaria     : %d\n", iResult); 


	iResult = iEdadJose > iEdadMaria == iEdadJose > iEdadJesus;
	printf("iEdadJose > iEdadMaria == iEdadJose > iEdadJesus      : %d\n", iResult);


	iResult = (iEdadJose > iEdadMaria) > (iEdadJose > iEdadJesus);
        printf("(iEdadJose > iEdadMaria) >  (iEdadJose > iEdadJesus)  : %d\n", iResult);


	iResult = (iEdadJose > iEdadMaria) > (iEdadJesus > iEdadJose);
	printf("(iEdadJose > iEdadMaria) >  (iEdadJose > iEdadJose)   : %d\n", iResult);

	iResult = iEdadJesus > iEdadMaria * 2;
	printf("iEdadJesus > iEdadMaria * 2                           : %d\n", iResult); 

	iResult = iEdadJesus > iEdadSonia * 2;
        printf("iEdadJesus > iEdadSonia * 2                           : %d\n", iResult);

	iResult = iEdadJesus > iEdadJuan * 2;
        printf("iEdadJesus > iEdadJuan * 2                            : %d\n", iResult);

	iResult = (iEdadJesus > iEdadMaria) * 2;
        printf("iEdadJesus > iEdadMaria * 2                           : %d\n", iResult);

return 0;
}
