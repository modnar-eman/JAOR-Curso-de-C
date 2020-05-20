#include <stdio.h>

int main ()
{
	unsigned char iResult=0;

	printf("Curso de C \n");
	printf("Clase 18 - operadores de Bits\n\n");

	printf("evaluando los ejemplos\n");

	iResult=~0xb2;
	printf("0xB2      :%X \n",iResult);

	iResult= 0x10<<3;
        printf("0x10<<3   :%X \n",iResult);

	iResult= 0xb2>>2;
        printf("0x>>B2    :%X \n",iResult);

	iResult= 0xb2&0x79;
        printf("0xb2&0x79 :%X \n",iResult);

	iResult= 0xB2^0x79;
	printf("0xB2^0x79 :%X \n",iResult);

	iResult= 0xB2|0x79;                        
        printf("0xB2|0x79 :%X \n",iResult);
return 0;
}
