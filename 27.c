#include <stdio.h>
int main()
{
	printf("Curso de C \n");
	printf("Clase 27 - sentencia switch \n\n");

	char xEdad=10;
	char xLetra='v';

	printf("Evaluando la sentencia switch\n\n");
	printf("Etapa de estudio según la edad\n\n");

	switch(xEdad+0)
	{
		case 1:
		case 2:
		case 3: printf("Maternal\n");
				break;
		case 4:
		case 5: printf("Pre-Primaria\n");
				break;
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11: printf("Primaria\n");
				break;
		case 12:
		case 12+1:
		case 12+2:
				printf("Secundaria\n");
				break;
		case 15:
		case 16:
		case 17:
				printf("Bachillerato\n");
				break;
		case 18:
		case 19:
		case 20:
		case 21:
				printf("Profesional\n");		
		case 22:
		case 23:
				printf("Maestria\n");
				break;
		case 24:
		case 25:
				printf("Doctorado\n");		
				break;


			default:
			if(xEdad < 65)
				printf("En producción\n");
			else
				printf("En Jubilación\n");
			switch (xEdad)
				{
					case 100:printf("Uff...\n");
				}
				break;
		}	

printf("\n");	
			

printf("tipo de carater\n");
		switch(xLetra)
			{
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
						printf("Vocal\n");
						break;
				case '0':
				case '2':
				case '3':
				case '4':
						printf("Digito\n");		
						break;
				case 'b':
				case 'c':
				case 'd':
				case 'f':
				case 'g':
				case 'h':
				case 'j':
				case 'k':
				case 'l':
				case 'm':
				case 'n':
				case 'p':
				case 'q':
				case 'r':
				case 's':
				case 't':
				case 'v':
				case 'w':
				case 'x':
				case 'y':
				case 'z':
						printf("Consonante\n");
						break;		
				default:
					printf("Otro\n");		
					break;
			}




printf("\n");
return 0;

}
