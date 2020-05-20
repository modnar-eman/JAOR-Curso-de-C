#include <stdio.h>

int main()
{
	int intEdad[]={34,33,24,56,78};
	float fltEstatura[5];

	fltEstatura[0]=1.82;
	fltEstatura[1]=1.52;
	fltEstatura[2]=1.67;
	fltEstatura[3]=1.80;
	fltEstatura[4]=1.78;

	printf("Curso de C \n");
	printf("Clase 07 - arreglos \n\n");

	printf("Las edades:\n");
	printf("Edad 0: %d \n", intEdad[0]);
	printf("Edad 1: %d \n", intEdad[1]);
	printf("Edad 2: %d \n", intEdad[2]);
	printf("Edad 3: %d \n", intEdad[3]);
	printf("Edad 4: %d \n\n", intEdad[4]);

	printf ("las estaturas:\n");
	printf("Estatura 0: %f \n", fltEstatura[0]);
	printf("Estatura 1: %f \n", fltEstatura[1]);
	printf("Estatura 3: %f \n", fltEstatura[2]);
	printf("Estatura 4: %f \n", fltEstatura[3]);

	return 0;
}
