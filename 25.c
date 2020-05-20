#include <stdio.h>
int main ()
{
	printf("curso de C\n");
	printf("clase 25 - sentencia if \n\n");

	char xEdadJuan=78;
	char xEdadMaria=26;
	char xEdadJose=84;

	printf("Evaluando mayoria de edad de Juan\n");
		if (xEdadJuan>=18)
			printf("Juan es Mayor de Edad\n");
			printf("\n");

	printf("Evaluando la mayoria de edad de María\n");
		if(xEdadMaria>=18)
			printf("María es mayor de edad\n");
			printf("\n");

	printf("Evaluando la mayoría de edad de José\n");
		if(xEdadJose>=18)
			printf("José es Mayor de edad\n");
			printf("\n");

	xEdadJose=17;
	printf("Evaluando mayoria de edad de José\n");
                if (xEdadJose>=18)
                        printf("Juan es Mayor de Edad\n");
                        printf("\n");
 
        printf("Evaluando la mayoria de edad de María\n");
                if(xEdadMaria>=18)
                        {
			printf("María es mayor de edad\n");
                        printf("\n");
			}
		else
			printf("María es menor de edad\n");
			printf("\n");

        printf("Evaluando si Juan es mayor de edad y se encuentra en la tecera edad\n");
                if(xEdadJuan>=18 && xEdadJuan >=70)
                       	{
			printf("Juan es mayor de edad\n");
			printf("Juan se encuentra en la tercera Edad\n");
			}
                        
		else 
			printf("Juan no es mayor de 18 años y mayor de 70\n");
			printf("\n");
	xEdadJuan=50;
	printf("Evaluando si Juan es mayor de edad y se encuentra en la tercera edad\n");
		if(xEdadJuan >=18 && xEdadJuan >=70)
			{
			printf("Juan es mayor de edad\n");
			printf("Juan se encuentra en la tercera edad\n");
			}
		else
			printf("Juan no es mayor de 18 años y mayor de 70 años\n");
			printf("\n");
	xEdadJose=90;
	printf("Evaluando si por lo menos uno de los tres está en la tercera edad\n");
		if(xEdadJuan > 69 || xEdadMaria > 69 || xEdadJose>69)
			{
			printf("por lo menos uno de Juan, María, José se encuentra en la tercera edad\n");
			printf("Los 3 pudieran estar en la tercera edad\n");
			}			
		else 
			printf("Ni Juan ni María ni José se encuentra en la tercera edad\n");
			printf("\n");
			printf("\n");
return 0;
}
