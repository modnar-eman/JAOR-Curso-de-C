#include <stdio.h>
#define CR printf("\n");

struct PERSONA
{
	char sNombre 	[50];
	char sApellido	[50];
	char sDireccion	[50];
	int sTelefono;
	int iEdad;
	struct FECHA
	{
		int iDia;
		int iMes;
		int iAno;
	}Nacimiento;
};

struct ALUMNO
{
	struct PERSONA persona;
	int	iIdentificacion;
	char	sCarrera[50];
};

struct EMPLEADO
{
	struct PERSONA persona;
	int	iIdentificacion;
	float 	fSueldo;
	struct
	{
		int iDia;
		int iMes;
		int iAno;
	};
	char 	sArea[50];
};

struct PROFESOR
{
	struct PERSONA persona;
	int	iIdentificacion;
	float	fSueldo;
	struct
	{
		int iDia;
		int iMes;
		int iAno;
	}fechaIngreso;
};

int main ()
{
	struct PERSONA xPersona;
	strcpy(xPersona.sNombre,"persona");
	strcpy(xPersona.sApellido,"De tal");
	strcpy(xPersona.sDireccion,"Dirección Persona");
	xPersona.sTelefono=45455444;
	xPersona.iEdad=45;
	xPersona.Nacimiento.iDia=24;
	xPersona.Nacimiento.iMes=23;
	xPersona.Nacimiento.iAno=1990;

	printf("Nombre: 	%s\n", xPersona.sNombre);
	printf("Apellido:	%s\n", xPersona.sApellido);
	printf("Dirección:	%s\n", xPersona.sDireccion);
	printf("Telefono 	%i\n", xPersona.sTelefono);
	printf("Edad 		%i\n", xPersona.iEdad);
	printf("Fecha de nacimiento: %i %i %i\n",xPersona.Nacimiento.iDia, xPersona.Nacimiento.iMes, xPersona.Nacimiento.iAno);

	CR
	struct ALUMNO xAlumno;
	strcpy(xAlumno.persona.sNombre,"Alumno");
	strcpy(xAlumno.persona.sApellido,"De tal");
	strcpy(xAlumno.persona.sDireccion,"Dirección Alumno");
	xAlumno.persona.sTelefono=111444;
	xAlumno.persona.iEdad=24;
	strcpy(xAlumno.sCarrera,"Informática");
	xAlumno.iIdentificacion=7777;
	xAlumno.persona.Nacimiento.iDia=10;
	xAlumno.persona.Nacimiento.iMes=12;
	xAlumno.persona.Nacimiento.iAno=2000;

	printf("Nombre: 	%s\n", xAlumno.persona.sNombre);
	printf("Apellido:	%s\n", xAlumno.persona.sApellido);
	printf("Dirección:	%s\n", xAlumno.persona.sDireccion);
	printf("Telefono: 	%i\n", xAlumno.persona.sTelefono);
	printf("Edad: 		%i\n", xAlumno.persona.iEdad);
	printf("Identificación: %i\n", xAlumno.iIdentificacion);
	printf("Carrera: 	%s\n", xAlumno.sCarrera);
	printf("Fecha de nacimiento: %i %i %i\n",xAlumno.persona.Nacimiento.iDia, xAlumno.persona.Nacimiento.iMes, xAlumno.persona.Nacimiento.iAno);

	CR
	struct PROFESOR xProfesor;
	strcpy(xProfesor.persona.sNombre,"Profesor");
	strcpy(xProfesor.persona.sApellido,"De tal");
	strcpy(xProfesor.persona.sDireccion,"Dirección Profesor");
	xProfesor.persona.sTelefono=45455444;
	xProfesor.persona.iEdad=0;
	xProfesor.persona.Nacimiento.iDia=3;
	xProfesor.persona.Nacimiento.iMes=9;
	xProfesor.persona.Nacimiento.iAno=2000;
	xProfesor.fechaIngreso.iDia=10;
	xProfesor.fechaIngreso.iMes=12;
	xProfesor.fechaIngreso.iAno=1990;

	printf("Nombre: 	%s\n", xProfesor.persona.sNombre);
	printf("Apellido:	%s\n", xProfesor.persona.sApellido);
	printf("Dirección:	%s\n", xProfesor.persona.sDireccion);
	printf("Telefono 	%i\n", xProfesor.persona.sTelefono);
	printf("Edad 		%i\n", xProfesor.persona.iEdad);
	printf("Fecha de nacimiento: %i %i %i\n",xProfesor.persona.Nacimiento.iDia, xProfesor.persona.Nacimiento.iMes, xProfesor.persona.Nacimiento.iAno);
	printf("Fecha de ingreso:    %i %i %i\n",xProfesor.fechaIngreso.iDia,xProfesor.fechaIngreso.iMes,xProfesor.fechaIngreso.iAno);

	CR
        struct EMPLEADO xEmpleado;
        strcpy(xEmpleado.persona.sNombre,"Empleado");
        strcpy(xEmpleado.persona.sApellido,"De tal");
        strcpy(xEmpleado.persona.sDireccion,"Dirección Profesor");
	strcpy(xEmpleado.sArea,"Contabilidad");
	xEmpleado.persona.sTelefono=111444;
        xEmpleado.persona.iEdad=34;
        xEmpleado.persona.Nacimiento.iDia=10;
        xEmpleado.persona.Nacimiento.iMes=12;
        xEmpleado.persona.Nacimiento.iAno=1980;
	xEmpleado.fSueldo=8000.5;
        xEmpleado.iDia=10;
        xEmpleado.iMes=12;
        xEmpleado.iAno=1990;

        printf("Nombre:         %s\n", xEmpleado.persona.sNombre);
        printf("Apellido:       %s\n", xEmpleado.persona.sApellido);
        printf("Dirección:      %s\n", xEmpleado.persona.sDireccion);
        printf("Telefono        %i\n", xEmpleado.persona.sTelefono);
        printf("Edad            %i\n", xEmpleado.persona.iEdad);
	printf("Area:		%s\n", xEmpleado.sArea);
	printf("Sueldo:		%f\n", xEmpleado.fSueldo);
        printf("Fecha de nacimiento: %i %i %i\n",xEmpleado.persona.Nacimiento.iDia, xEmpleado.persona.Nacimiento.iMes, xEmpleado.persona.Nacimiento.iAno);
	printf("Fecha de ingreso:    %i %i %i\n",xEmpleado.iDia,xEmpleado.iMes,xEmpleado.iAno);


return 0;
}
