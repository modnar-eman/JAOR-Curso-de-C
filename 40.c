#define CR printf("\n");

struct TEST
{
	unsigned char a:1;
	unsigned char b:2;
	unsigned char  :4;
	unsigned char c:1;
};

struct BYTE
{
	unsigned char bit1:1;
	unsigned char bit2:1;
	unsigned char bit3:1;
	unsigned char bit4:1;
	unsigned char bit5:1;
	unsigned char bit6:1;
	unsigned char bit7:1;
	unsigned char bit8:1;
};

struct WORD
{
	unsigned char nible1:4;
	unsigned char nible2:4;
	unsigned char byte2:8;
};

struct DWORD
	{
	unsigned char byte1:8;
	unsigned char byte2:8;
	unsigned char byte3:8;
	unsigned char byte4:8;
	};	

int main()
{
	printf("Curso de C\n");
	printf("Clase 40 - campos de bit\n\n");

	struct TEST xTest;
printf("El sizeof de xTest :%d \n",sizeof(xTest) );

xTest.a=0;
xTest.b=0;
xTest.c=0;

printf("xTest	:%d \n",xTest);
printf("xTest.a :%i \n",xTest.a);
printf("xTest.b :%i \n",xTest.b);
printf("xTest.c	:%i \n",xTest.c);
CR
xTest.a=1;

printf("xTest	:%d \n",xTest);
printf("xTest.a :%i \n",xTest.a);
printf("xTest.b :%i \n",xTest.b);
printf("xTest.c	:%i \n",xTest.c);

CR
xTest.b=1;

printf("xTest	:%d \n",xTest);
printf("xTest.a :%i \n",xTest.a);
printf("xTest.b :%i \n",xTest.b);
printf("xTest.c	:%i \n",xTest.c);
CR
xTest.b=2;
printf("xTest	:%d \n",xTest);
printf("xTest.a :%i \n",xTest.a);
printf("xTest.b :%i \n",xTest.b);
printf("xTest.c	:%i \n",xTest.c);
CR
xTest.b=3;
printf("xTest	:%d \n",xTest);
printf("xTest.a :%i \n",xTest.a);
printf("xTest.b :%i \n",xTest.b);
printf("xTest.c	:%i \n",xTest.c);
CR
xTest.c=1;
printf("xTest	:%d \n",xTest);
printf("xTest.a :%i \n",xTest.a);
printf("xTest.b :%i \n",xTest.b);
printf("xTest.c	:%i \n",xTest.c);
CR
xTest.c=2;
printf("xTest	:%d \n",xTest);
printf("xTest.a :%i \n",xTest.a);
printf("xTest.b :%i \n",xTest.b);
printf("xTest.c	:%i \n",xTest.c);


struct BYTE xByte;
printf("El sizeof de xByte	:%d\n", xByte);
xByte.bit1=0;
xByte.bit2=0;
xByte.bit3=0;
xByte.bit4=0;
xByte.bit5=0;
xByte.bit6=0;
xByte.bit7=0;
xByte.bit8=0;

printf("el valor de xByte 	:%d\n", xByte);
printf("el valor de xByte.bit1	:%d\n", xByte.bit1);
printf("el valor de xByte.bit2	:%d\n", xByte.bit2);
printf("el valor de xByte.bit3	:%d\n", xByte.bit3);
printf("el valor de xByte.bit4	:%d\n", xByte.bit4);
printf("el valor de xByte.bit1	:%d\n", xByte.bit5);
printf("el valor de xByte.bit2	:%d\n", xByte.bit6);
printf("el valor de xByte.bit3	:%d\n", xByte.bit7);
printf("el valor de xByte.bit4	:%d\n", xByte.bit8);
CR
xByte.bit1=1;
xByte.bit2=0;
xByte.bit3=0;
xByte.bit4=0;
xByte.bit5=0;
xByte.bit6=0;
xByte.bit7=0;
xByte.bit8=0;

printf("el valor de xByte 	:%d\n", xByte);
printf("el valor de xByte.bit1	:%d\n", xByte.bit1);
printf("el valor de xByte.bit2	:%d\n", xByte.bit2);
printf("el valor de xByte.bit3	:%d\n", xByte.bit3);
printf("el valor de xByte.bit4	:%d\n", xByte.bit4);
printf("el valor de xByte.bit1	:%d\n", xByte.bit5);
printf("el valor de xByte.bit2	:%d\n", xByte.bit6);
printf("el valor de xByte.bit3	:%d\n", xByte.bit7);
printf("el valor de xByte.bit4	:%d\n", xByte.bit8);
CR
xByte.bit1=0;
xByte.bit2=0;
xByte.bit3=0;
xByte.bit4=0;
xByte.bit5=0;
xByte.bit6=0;
xByte.bit7=0;
xByte.bit8=1;

printf("el valor de xByte 	:%d\n", xByte);
printf("el valor de xByte.bit1	:%d\n", xByte.bit1);
printf("el valor de xByte.bit2	:%d\n", xByte.bit2);
printf("el valor de xByte.bit3	:%d\n", xByte.bit3);
printf("el valor de xByte.bit4	:%d\n", xByte.bit4);
printf("el valor de xByte.bit1	:%d\n", xByte.bit5);
printf("el valor de xByte.bit2	:%d\n", xByte.bit6);
printf("el valor de xByte.bit3	:%d\n", xByte.bit7);
printf("el valor de xByte.bit4	:%d\n", xByte.bit8);
CR


struct WORD xWord;
xWord.nible1=0;
xWord.nible2=0;
xWord.byte2=0;
printf("El tamaño de xWord		:%d\n", sizeof(xWord));
CR
printf("El valor de xWord		:%d\n",xWord);
printf("El valor de xWord nible1	:%d\n", xWord.nible1);
printf("El valor de xWord nible2	:%d\n", xWord.nible2);
printf("El valor de xWord byte1 	:%d\n", xWord.byte2);
 CR
xWord.nible1=15;

printf("El valor de xWord		:%d\n",xWord);
printf("El valor de xWord nible1	:%d\n", xWord.nible1);
printf("El valor de xWord nible2	:%d\n", xWord.nible2);
printf("El valor de xWord byte1 	:%d\n", xWord.byte2);
CR
xWord.nible2=1;
printf("El valor de xWord		:%d\n",xWord);
printf("El valor de xWord nible1	:%d\n", xWord.nible1);
printf("El valor de xWord nible2	:%d\n", xWord.nible2);
printf("El valor de xWord byte1 	:%d\n", xWord.byte2);
CR

struct DWORD xDword;
printf("El tamaño de xDword		:%d\n",sizeof(xDword));
printf("El valor de xDword		:%d\n",xDword);
printf("El valor de xDword.byte1	:%d\n",xDword.byte1);
printf("El valor de xDword.byte2	:%d\n",xDword.byte2);
printf("El valor de xDword.byte3	:%d\n",xDword.byte3);
printf("El valor de xDword.byte4	:%d\n",xDword.byte4);
CR
xDword.byte1=15;
xDword.byte2=15;
printf("El valor de xDword		:%d\n",xDword);
printf("El valor de xDword.byte1	:%d\n",xDword.byte1);
printf("El valor de xDword.byte2	:%d\n",xDword.byte2);
printf("El valor de xDword.byte3	:%d\n",xDword.byte3);
printf("El valor de xDword.byte4	:%d\n",xDword.byte4);
return 0;
}

