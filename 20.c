#include <stdio.h>
int main()
{
	int x,y,z;

	printf("Curso de C \n");
	printf("Clase 20 - operadores de asignacion; sea x=10 \n\n");


	x=10;
	printf("1) x+=3 :%d \n", x+=3);
	x=10;
        printf("2) x-=3 :%d \n", x-=3);
	x=10;
        printf("3) x*=3 :%d \n", x*=3);
	x=10;
        printf("4) x/=3 :%d \n", x/=3);
	x=10;
        printf("5) x%=3 :%d \n", x%=3);
	x=10;
        printf("6) x&=3 :%d \n", x&=3);
	x=10;
        printf("7) x^=3 :%d \n", x^=3);
	x=10;
        printf("8) x|=3 :%d \n", x|=3);
	x=10;
        printf("9) x<<=3 :%d \n",x<<=3);
	x=10;
        printf("8) x>>=3 :%d \n",x>>=3);

	printf("Comprobando Precedencia entre ellos, sea x=5; y=7; z=9\n");
	x=5;
        y=7;
        printf("11) x+=y*2      :%d \n", x+=y*2);
	x=5;
	y=7;
	printf("12) x*=y+=2	:%d \n", x*=y+=2);
	x=5;
        y=7;
	z=9;
        printf("13) x*=y+=z<<1  :%d \n", x*=y+=z<<=1);
	x=5;
        y=7;
        z=9;
        printf("14) x*=y+=z<<1  :%d \n", -(x*=y+=z<<=1));

return 0;
}
