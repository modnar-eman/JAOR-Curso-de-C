#include <stdio.h>
int main()
{

char strCadena[80]="TEST",iPos,iDatos;

printf ("Ejemplos de argumentos \n");
printf ("---------------------- \n");
printf ("1) %%");
printf ("2)%i\n", 17);
printf ("3)%u\n", -17);
printf  ("4)%o\n", 17);
printf ("5)%x\n", 26);
printf ("6)%X\n", 26);
printf ("7)%f\n", 3.14);
printf ("%e\n", 31.4);
iDatos=printf("9)%g, %g\n", 3.14, 0.0000314);
printf ("caracteres impresos. %d\n", iDatos);
printf ("A) %a\n", 31.0);
printf ("B)%c\n", 65);
printf ("C)%s\n", "Hello");
int a=1;
printf ("%p\n", &a);

	while(1)
		{
			printf("captura una cadena:");
			gets(strCadena);
				if (strCadena[0]=='\0')
					break;
					
					iPos=0;
					while (strCadena[iPos])
					{
						if(!iPos)
							{
								printf("ASCII\tDECIMAL\tOCTAL\tHEXADECIMAL \n");
								printf("-----\t-------\t-----\t----------- \n");
							}
						printf("%c\t%d\t%o\t%x\n",strCadena[iPos],strCadena[iPos],strCadena[iPos],strCadena[iPos]);
						iPos+1;
					}
		}

return 0;
}

