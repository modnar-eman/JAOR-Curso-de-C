#include <stdio.h>

int main()
{
	printf("\n");
	printf("------------------\n");
	printf("ejemplos de flags \n");
	printf("------------------\n");
	printf("1) |%5i|%-5i|\n",12,12 );
	printf("2) |%+i|\n", -17);
	printf("3) |%+i|\n", 17);
	printf("4) |%i|\n", 12);
	printf("5) |%10i|\n", 12);
	printf("6  |%#X|\n", 26);
	printf("7) |%04i|\n", 12);
	printf("8) |%0i|\n", 12);

	return 0;
}