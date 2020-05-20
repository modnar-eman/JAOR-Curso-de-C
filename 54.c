#include <stdio.h>
/*
El programa tiene 2 variables con el mismo nombre sólo que una está declarada
afura de cualquier función lo que la convierte en global,
 y la otra está adentro de una función lo que la convierte en local
*/
int glNumero=10;
char strMensaje[]="Mensaje en Variable global";

void sbMensaje()
/*
Entonces si tenemos variables una global y una local con el mismo nombre
cuando la mandamos llamar desde adentro de la función le da preferencia la variable local
*/
{
	char strMensaje[]="Mensaje en variable local";
	static int iMensajeNumero=0;
/* cuando ponemos static a una variable y salimos de la función la variable se queda con el último valor
que guardó en lugar de que cuando vuelva a entrar a la función se inicialice con el valor que le está siendo asignado */
	iMensajeNumero++;

	printf("Mensaje %d: %s \n", iMensajeNumero, strMensaje);
	printf("Mensaje %d: %s \n", glNumero++,strMensaje);
	printf("\n");
}
/*
int main (int argc, char *argv[], int *env[])
{

	printf("Curso de C\n");
	printf("Clase 54 - Ámbito y Variables Static\n\n");


	sbMensaje();
	sbMensaje();
	sbMensaje();

	printf("Desplegando el Mensaje Global:%s \n",strMensaje);
	printf("Desplegando Variable Numérica Global: %d\n",glNumero);

	return 0;
}
*/