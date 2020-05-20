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

	iResult = iEdadMaria> iEdadJuan && iEdadMaria < iEdadJesus;
	printf("iEdadMaria > iEdadJuan && iEdadMaria < iEdadJesus                                 : %d\n", iResult); 


	iResult = !(iEdadJesus > iEdadJose) && iEdadJesus > iEdadMaria;
	printf("!(iEdadJesus > iEdadJose) && iEdadJesus > iEdadMaria                              : %d\n", iResult);

	iResult = iEdadJose > iEdadMaria || iEdadJesus < iEdadJose;
	printf("iEdadJose > iEdadMaria ||  iEdadJose < iEdadJose                                  : %d\n", iResult);

	iResult = iEdadJose > iEdadMaria || !(iEdadJose > iEdadJesus);
    	printf("iEdadJose > iEdadMaria ||  !(iEdadJose > iEdadJesus)                              : %d\n", iResult);


	iResult = !(iEdadJose > iEdadMaria) && !(iEdadJesus > iEdadJose);
	printf("!(iEdadJose > iEdadMaria) &&  !(iEdadJesus > iEdadJose)                            : %d\n", iResult);

	iResult = !(iEdadJose > iEdadMaria && iEdadJesus > iEdadJose);
	printf("(iEdadJose > iEdadMaria) &&  iEdadJesus > iEdadJose)                               : %d\n", iResult);

	iResult = !(iEdadJose > iEdadMaria && iEdadJesus < iEdadJose || iEdadSonia == iEdadMaria);
	printf("!(iEdadJose > iEdadMaria &&  iEdadJesus < iEdadJose || iEdadSonia == iEdadMaria)   : %d\n", iResult);

	iResult = iEdadJesus > iEdadMaria && 1 + 1;
	printf(" iEdadJesus > iEdadMaria && 1 + 1   :%d \n", iResult);

	iResult = (iEdadJesus > iEdadMaria && 1) + 1;
        printf(" (iEdadJesus > iEdadMaria && 1 + 1) :%d \n", iResult);

	iResult = 5 && 0;
	printf(" 5 && 0: %d\n", iResult);

	iResult = -2 && 1;
        printf("-2 && 1: %d\n", iResult);

return 0;
}
