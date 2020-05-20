#include <stdio.h>
int main ()
{
	int x,y,z;

	printf("Curso de C\n");
	printf("Clase 21 - Operadores de asignacion Precedencia\n\n");

	printf("ejemplos de precedencia con operadores de asignacion\n");

	x=10;
	printf("1) x+=3*5		:%d \n", x+=3 *5);
	x=10;
        printf("2) (x+=3)*5   		:%d \n", (x+=3) *5);
	x=10;
        printf("3) 400/x+=3*5 	 	:%d \n", 400/(x+=3) *5);
	x=10;
        printf("4) 400>(x+=3*5)      	:%d \n", 400>(x+=3 *5));
	x=10;
        printf("5) 24>(x+=3*5)      	:%d \n", 24>(x+=3 *5));
	x=10;
        printf("6) 24>(x+=3*5)	        :%d \n", 24>(x=3 *5));
	x=10;
        printf("7) x+=3*5	        :%d \n",14> (x=3*5));
return 0;
}
