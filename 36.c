#include <stdio.h>
#define CR printf("\n");


	struct PERSONA
		{
			char sNombre	[50];
			char sApellido	[50];
			char sDireccion	[50];
			char sTelefono	[50];
		}xPersona1,xPersona2,lslPersonas[10];

	struct ALUMNOS
		{
			int iIdentificacion;
			char sNombre	[50];
			char sApellido	[50];
			char sDireccion [50];
			char sTelefono 	[50];
			char sCarrera 	[50];
		};

	struct
		{
			int	identificacion;
			char	sNombre		[50];
			char	sApellido	[50];
			char	sDireccion	[50];
			char	sTelefono	[50];
			char	sArea		[50];
			float	fSueldo;
		}lstEmpleados[3];

int main ()
{

	printf("Curso de C \n");
	printf("Clase 36 - Estructuras \n\n");

	struct PERSONA xPersona3;

	strcpy(xPersona3.sNombre,"Juan");
	strcpy(xPersona3.sApellido,"Bautista");
	strcpy(xPersona3.sDireccion,"Conocido");
	strcpy(xPersona3.sTelefono,"45455444");

	printf("Información de xPersona\n");
	printf("Nombre:		%s \n", xPersona3.sNombre);
	printf("Apellido:	%s\n", xPersona3.sApellido);
	printf("Dirección:	%s\n", xPersona3.sDireccion);
	printf("Telefono:	%s\n", xPersona3.sTelefono);

	CR
	struct ALUMNOS lstAlumnos [3];
	lstAlumnos[0].iIdentificacion=20;
	strcpy(lstAlumnos[0].sNombre,"José");
	strcpy(lstAlumnos[0].sApellido,"Santos");
	strcpy(lstAlumnos[0].sDireccion,"Jerusalem");
	strcpy(lstAlumnos[0].sTelefono,"No había");
	strcpy(lstAlumnos[0].sCarrera,"Padre de Jesús");

	printf("Información del primer alumno de la lista\n");
	printf("Nombre 		%s\n", lstAlumnos[0].sNombre);
	printf("Apellido 	%s\n", lstAlumnos[0].sApellido);
	printf("Dirección 	%s\n", lstAlumnos[0].sDireccion);
	printf("Telefono 	%s\n", lstAlumnos[0].sTelefono);

	CR

	lstEmpleados[0].identificacion=20;
	strcpy(lstEmpleados[0].sNombre,"Juan");
	strcpy(lstEmpleados[0].sApellido,"Castellanos");
	strcpy(lstEmpleados[0].sDireccion,"Conocido");
	strcpy(lstEmpleados[0].sTelefono,"45645666333");
	strcpy(lstEmpleados[0].sArea,"Contabilidad");
	lstEmpleados[0].fSueldo=4500.50;


	printf("Información del primer empleado de la lista\n");
	printf("Nombre 		%s\n", lstEmpleados[0].sNombre);
	printf("Apellido 	%s\n", lstEmpleados[0].sApellido);
	printf("Dirección 	%s\n", lstEmpleados[0].sDireccion);
	printf("Telefono 	%s\n", lstEmpleados[0].sTelefono);
	printf("Area 		%s\n", lstEmpleados[0].sArea);
	printf("Sueldo 		%f\n", lstEmpleados[0].fSueldo);

return 0;
}
