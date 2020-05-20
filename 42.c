#include <stdio.h>
#define CR printf("\n");

typedef int entero;

typedef struct
{
	char sNombre[40];
	char sApellido[40];
}persona;

struct ALUMNO
{
	entero iCodigo;
	char sNombre[40];
	char sApellido[40];
};

union SYSTEM
{
	entero iIde;
	char cNick[8];
};


int main()
{
	printf("Curso de C \n");
	printf("Clase 42 -  definiendo tipos\n");

	entero iEdad=24;
	printf("Edad :%d\n",iEdad);

	
persona xPersona;


	strcpy(xPersona.sApellido,"Perez");
	printf("Apellido :%s\n",xPersona.sApellido);

	strcpy(xPersona.sNombre,"Juan");
	printf("Nombre  :%s\n",xPersona.sNombre);
CR
	typedef struct ALUMNO alumno;
	alumno xAlumno;
	xAlumno.iCodigo=3656;
	printf("Código :%i\n",xAlumno.iCodigo);
	strcpy(xAlumno.sApellido,"Pérez");
	printf("Apellido: %s\n",xAlumno.sApellido);
	strcpy(xAlumno.sNombre,"Juan");
	printf("Nombre %s\n", xAlumno.sNombre);
CR
typedef	union SYSTEM systema;
	systema sistema;
	
	printf("Tamaño de la unión: %ld\n", sizeof(sistema));
	printf("Tamaño de Nick: %i\n", sizeof(sistema.cNick));
	printf("Tamaño Ide: %ld\n",  sizeof(sistema.iIde));

	CR
	sistema.iIde=3456;
	printf("Tamaño Ide: %ld\n",  sizeof(sistema.iIde));
	printf("Ide:  %i\n", sistema.iIde);
	
	CR
	printf("Tamaño de Nick: %i\n", sizeof(sistema.cNick));
	strcpy(sistema.cNick,"Super");
	printf("Nick: %s\n", sistema.cNick);
	

return 0;
}
 
  
