#include <stdio.h>

int main ()
{
	printf("Clase 17 operadores lógicos \n\n");

	printf("tabla de verdad del operador AND \n");
	printf("1 && 1 = %d \n",1 && 1 );
	printf("1 && 0 = %d \n",1 && 0 );
	printf("0 && 1 = %d \n",0 && 1 );
	printf("1 && 0 = %d \n",0 && 0 );


	printf("tabla de verdad del operador OR \n");
	printf("1 || 1 = %d \n",1 || 1 );
	printf("1 || 0 = %d \n",1 || 0 );
	printf("0 || 1 = %d \n",0 || 1 );
	printf("0 || 0 = %d \n",0 || 0 );

	printf("tabla de verdad del operador NOT\n");
	printf(" ! 1 = %d \n", !1 );
	printf(" ! 0 = %d \n", !0 );

	printf("Precedencia del NOT sobre el AND\n");
	printf("!  1 && 1  : %d \n", ! 1 && 1 );
	printf("! (1 && 1) : %d \n", ! (1 && 1) );
	printf("!  0 && 1  : %d \n", ! 0 && 1 );
	printf("! (0 && 1) : %d \n", ! (0 && 1) );
    	printf("!  1 && 0  : %d \n", ! 1 && 0 );
	printf("! (1 && 0) : %d \n", ! (1 && 0) );
	printf("!  0 && 0  : %d \n", ! 0 && 0 );
	printf("! (0 && 0) : %d \n", ! (0 && 0) );

	
printf("Precedencia del NOT sobre el OR\n");
	printf("!  1 || 1  : %d \n", ! 1 || 1 );
	printf("! (1 || 1) : %d \n", ! (1 || 1) );
	printf("!  0 || 1  : %d \n", ! 0 || 1 );
	printf("! (0 || 1) : %d \n", ! (0 || 1) );
    	printf("!  1 || 0  : %d \n", ! 1 || 0 );
	printf("! (1 || 0) : %d \n", ! (1 || 0) );
	printf("!  0 || 0  : %d \n", ! 0 || 0 );
	printf("! (0 || 0) : %d \n", ! (0 || 0) );

	printf("Precedencia del ANDsobre el OR\n");

	printf(" 1 || 1 && 1   : %d \n", 1 || 1 && 1 );
	printf("(1 || 1) && 1  : %d \n\n", (1 || 1) && 1);

	printf(" 1 || 1 && 0   : %d \n", 1 || 1 && 0 );
	printf("(1 || 1) && 0  : %d \n\n", (1 || 1) && 0);

	printf(" 1 || 0 || 1   : %d \n", 1 || 0 && 1 );
	printf("(1 || 0) && 1  : %d \n\n", (1 || 0) && 1);


	printf(" 1 || 0 || 0   : %d \n", 1 || 0 || 0 );
    printf("(1 || 0) && 0  : %d \n", (1 || 0) && 0);

	
	


}

