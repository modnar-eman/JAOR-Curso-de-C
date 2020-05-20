#include <stdio.h>
#define CR printf("\n");

enum DIA
{
	Domingo,
	Lunes,
	Martes,
	Miercoles,
	Jueves,
	Viernes,
	Sabado,
};

enum MES
{
	Enero=1,
	Febrero,
	Marzo,
	Abril,
	Mayo,
	Junio,
	Julio,
	Agosto,
	Septiembre,
	Octubre,
	Noviembre,
	Diciembre,
};

int main()
{
	printf("Curso de C\n");
	printf("Clase 41 - Enumerados\n");

	char strDias [7][10]={"Domingo","Lunes","Martes","Miercoles","Jueves","Viernes","Sabado"};
	enum DIA xDia;
	xDia=Lunes;
	printf("Dia Activo:	%s\n",strDias[xDia]);
	CR;
	xDia=Viernes;
		if(xDia==Viernes)
			printf("Gracias a dios es %s\n",strDias[xDia]);

	xDia=Miercoles;
		switch (xDia)
		{
		case Miercoles:
			printf("%s mitad de semana\n",strDias[xDia]);
			break;
		default:
			printf("No es miercoles\n");
		}
	CR
	char strMeses [12][11]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
	enum MES xMes;
	xMes=Enero;
	printf("Mes activo:	%s\n",strMeses[xMes-1]);
	xMes=Septiembre;
	if (xMes==Septiembre)

	
		printf("Aguas con %s\n",strMeses[Septiembre]);	/* code */
xMes = Diciembre;
switch(xMes)
{
	case Diciembre:
		printf("Navidad\n");
		break;
		default:
			printf("No es navidad\n");
}

return 0;
}
