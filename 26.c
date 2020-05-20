#include <stdio.h>
int main()
{
	printf("Curso de C\n");
	printf("Clase 26 - sentencia if anidados \n\n");

	char xEdadJuan=27;
	char xEdadJose=28;
	char xEdadMaria=27;

	printf("Evaluando la sentencia if anidados \n\n");

	printf("Etapa de estudio de Juan según su edad: ");
		if (xEdadJuan <3)
			printf("Maternal \n");
		if (xEdadJuan >=3 && xEdadJuan <=5)
			printf("Pre-primaria\n");
		if (xEdadJuan >=6 && xEdadJuan <=11)
			printf("Primaria\n");
		if (xEdadJuan >=12 && xEdadJuan <=14)
			printf("Secundaria\n");
		if (xEdadJuan >=15 && xEdadJuan <=17)
			printf("Bachillerato\n");
		if (xEdadJuan >=18 && xEdadJuan <=22)
			printf("Universidad\n");
		if (xEdadJuan >=23 && xEdadJuan <=24)
			printf("Maestria\n");
		if (xEdadJuan >=25 && xEdadJuan <=25)
			printf("Doctorado\n");
		if (xEdadJuan >=27 && xEdadJuan <=65)
			printf("En Producción\n");
		if (xEdadJuan >=66)
			printf("En Jubilacion\n");
		printf("\n");	


	printf("Etapa de estudio de Maria según su edad: ");
		if (xEdadMaria <3)
			
			printf("Maternal \n");
		else
		if (xEdadMaria <=5)
			printf("Pre-primaria\n");
		else
		if (xEdadMaria <=11)
			printf("Primaria\n");
		else
		if (xEdadMaria <=14)
			printf("Secundaria\n");
		else
		if (xEdadMaria <=17)
			printf("Bachillerato\n");
		else
		if (xEdadMaria <=22)
			printf("Universidad\n");
		else
		if (xEdadMaria <=24)
			printf("Maestria\n");
		else
		if (xEdadMaria <=25)
			printf("Doctorado\n");
		else
		if (xEdadMaria <=65)
			printf("En Producción\n");
		else
		if (xEdadMaria >=66 && xEdadMaria <=110)
			printf("En Jubilacion\n");
		
		else 
			printf("Muerto\n");
		printf("\n");

	printf("Verificando quién es mayor de los 3\n");
		if (xEdadJuan > xEdadJose && xEdadJuan > xEdadMaria)
			printf("Juan es el Mayor de los 3 \n");
		else if (xEdadJose > xEdadJuan && xEdadJose > xEdadMaria)
				printf("Jose es el Mayor de los 3\n");
		else if (xEdadMaria > xEdadJuan && xEdadMaria >xEdadJuan)
				printf("Maria es la Mayor de los 3\n");
		else 
			printf("Dos de ellos tienen la misma edad\n");
		("\n");

	printf("Desplegando en orden los 3\n");
		if(xEdadJuan > xEdadJose && xEdadJuan > xEdadMaria)
			{
				printf("Juan es el Mayor con :%d \n", xEdadJuan);
					if (xEdadJose > xEdadMaria)
						printf("Sigue José y al final María\n");
					else if (xEdadMaria > xEdadJose)
						printf("Sigue María y al final José\n");
					else
						printf("José y María tienen la misma edad\n");
			}
				else if (xEdadJose > xEdadJuan && xEdadJose > xEdadMaria)
					{
						printf("José es el Mayor con :%d \n", xEdadJose);
						if(xEdadJuan > xEdadMaria)
							printf("Sigue Juan y al final Maria\n");
						else if (xEdadMaria > xEdadJuan)
							printf("Sigue María y al final Juan\n");
						else 
							printf("María y Juan tienen la misma edad\n");
	
					}
				else if (xEdadMaria > xEdadJuan && xEdadMaria > xEdadJose)
                                        {
                                                printf("Maria es la Mayor con : %d\n", xEdadMaria);
                                                if(xEdadJose > xEdadJuan)
                                                        printf("Sigue José y al final Juan\n");
                                                else if (xEdadJuan > xEdadJose)
                                                        printf("Sigue Juan y al final José\n");
                                                else 
                                                        printf("José y Juan tienen la misma edad\n");

                                        }
				else printf("Los tres tienen la misma edad con :%d \n", xEdadJuan);
				
			printf("\n");					 
return 0;
}
