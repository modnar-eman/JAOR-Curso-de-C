#include <stdio.h>
#include <ctype.h>
#define CR printf("\n");
int main()
{
	char xNumero	='0';
	char xConson	='X';
	char xVocal	='a';
	char xEspacio	=' ';
	char xComa	=',';
	char xLinea	='\n';
	char xNulo	='\0';

	printf("Curso de C");
	CR
	printf("Clase 45 - Funciones de Caracter \n\n");

	printf("Evalua Isalnum\n");
	printf("Verifica si %c es alfanumerico: %s\n",xNumero,isalnum(xNumero)?"True":"False");
	printf("Verifica si %c es alfanumerico: %s\n",xConson,isalnum(xConson)?"True":"False");
	printf("Verifica si %c es alfanumerico: %s\n",xVocal,isalnum(xVocal)?"True":"False");
	printf("Verifica si %c es alfanumerico: %s\n",xEspacio,isalnum(xEspacio)?"True":"False");
	printf("Verifica si %c es alfabetico: %s\n",xComa,isalpha(xComa)?"True":"False");
	printf("Verifica si %c es alfanumerico: %s\n",xLinea,isalnum(xLinea)?"True":"False");
	printf("Verifica si %c es alfanumerico: %s\n",xNulo,isalnum(xNulo)?"True":"False");

	CR
	printf("Evalua Isalpha\n");
	printf("Verifica si %c es alfabetico: %s\n",xNumero,isalpha(xNumero)?"True":"False");
	printf("Verifica si %c es alfabetico: %s\n",xConson,isalpha(xConson)?"True":"False");
	printf("Verifica si %c es alfabetico: %s\n",xVocal,isalpha(xVocal)?"True":"False");
	printf("Verifica si %c es alfabetico: %s\n",xEspacio,isalpha(xEspacio)?"True":"False");
	printf("Verifica si %c es alfabetico: %s\n",xComa,isalpha(xComa)?"True":"False");
	printf("Verifica si %c es alfabetico: %s\n",xLinea,isalpha(xLinea)?"True":"False");
	printf("Verifica si %c es alfabetico: %s\n",xNulo,isalpha(xNulo)?"True":"False");
	CR
	printf("Evalua Iscntrl\n");
	printf("Verifica si %c es un caracter de control: %s\n",xNumero,iscntrl(xNumero)?"True":"False");
	printf("Verifica si %c es un caracter de control: %s\n",xConson,iscntrl(xConson)?"True":"False");
	printf("Verifica si %c es un caracter de control: %s\n",xVocal,iscntrl(xVocal)?"True":"False");
	printf("Verifica si %c es un caracter de control: %s\n",xEspacio,iscntrl(xEspacio)?"True":"False");
	printf("Verifica si %c es un caracter de control: %s\n",xComa,iscntrl(xComa)?"True":"False");
	printf("Verifica si %c es un caracter de control: %s\n",xLinea,iscntrl(xLinea)?"True":"False");
	printf("Verifica si %c es un caracter de control: %s\n",xNulo,iscntrl(xNulo)?"True":"False");
	CR
	printf("Evalua Isdigit\n");
	printf("Verifica si %c es digito: %s\n",xNumero,isdigit(xNumero)?"True":"False");
	printf("Verifica si %c es digito: %s\n",xConson,isdigit(xConson)?"True":"False");
	printf("Verifica si %c es digito: %s\n",xVocal,isdigit(xVocal)?"True":"False");
	printf("Verifica si %c es digito: %s\n",xEspacio,isdigit(xEspacio)?"True":"False");
	printf("Verifica si %c es digito: %s\n",xComa,isdigit(xComa)?"True":"False");
	printf("Verifica si %c es digito: %s\n",xLinea,isdigit(xLinea)?"True":"False");
	printf("Verifica si %c es digito: %s\n",xNulo,isdigit(xNulo)?"True":"False");
	CR
	printf("Evalua Isgraph\n");
	printf("Verifica si %c es grafico: %s\n",xNumero,isgraph(xNumero)?"True":"False");
	printf("Verifica si %c es grafico: %s\n",xConson,isgraph(xConson)?"True":"False");
	printf("Verifica si %c es grafico: %s\n",xVocal,isgraph(xVocal)?"True":"False");
	printf("Verifica si %c es grafico: %s\n",xEspacio,isgraph(xEspacio)?"True":"False");
	printf("Verifica si %c es grafico: %s\n",xComa,isgraph(xComa)?"True":"False");
	printf("Verifica si %c es grafico: %s\n",xLinea,isgraph(xLinea)?"True":"False");
	printf("Verifica si %c es grafico: %s\n",xNulo,isgraph(xNulo)?"True":"False");


	CR
	printf("Evalua Islower\n");
	printf("Verifica si %c es lower: %s\n",xNumero,islower(xNumero)?"True":"False");
	printf("Verifica si %c es lower: %s\n",xConson,islower(xConson)?"True":"False");
	printf("Verifica si %c es lower: %s\n",xVocal,islower(xVocal)?"True":"False");
	printf("Verifica si %c es lower: %s\n",xEspacio,islower(xEspacio)?"True":"False");
	printf("Verifica si %c es lower: %s\n",xComa,islower(xComa)?"True":"False");
	printf("Verifica si %c es lower: %s\n",xLinea,islower(xLinea)?"True":"False");
	printf("Verifica si %c es lower: %s\n",xNulo,islower(xNulo)?"True":"False");
	CR
	printf("Evalua Isprint\n");
	printf("Verifica si %c es imprimible: %s\n",xNumero,isprint(xNumero)?"True":"False");
	printf("Verifica si %c es imprimible: %s\n",xConson,isprint(xConson)?"True":"False");
	printf("Verifica si %c es imprimible: %s\n",xVocal,isprint(xVocal)?"True":"False");
	printf("Verifica si %c es imprimible: %s\n",xEspacio,isprint(xEspacio)?"True":"False");
	printf("Verifica si %c es imprimible: %s\n",xComa,isprint(xComa)?"True":"False");
	printf("Verifica si %c es imprimible: %s\n",xLinea,isprint(xLinea)?"True":"False");
	printf("Verifica si %c es imprimible: %s\n",xNulo,isprint(xNulo)?"True":"False");

	CR
	printf("Evalua Ispunct\n");
	printf("Verifica si %c es punct: %s\n",xNumero,ispunct(xNumero)?"True":"False");
	printf("Verifica si %c es punct: %s\n",xConson,ispunct(xConson)?"True":"False");
	printf("Verifica si %c es punct: %s\n",xVocal,ispunct(xVocal)?"True":"False");
	printf("Verifica si %c es punct: %s\n",xEspacio,ispunct(xEspacio)?"True":"False");
	printf("Verifica si %c es punct: %s\n",xComa,ispunct(xComa)?"True":"False");
	printf("Verifica si %c es punct: %s\n",xLinea,ispunct(xLinea)?"True":"False");
	printf("Verifica si %c es punct: %s\n",xNulo,ispunct(xNulo)?"True":"False");
	CR
	printf("Evalua Isspace\n");
	printf("Verifica si %c es space: %s\n",xNumero,isspace(xNumero)?"True":"False");
	printf("Verifica si %c es space: %s\n",xConson,isspace(xConson)?"True":"False");
	printf("Verifica si %c es space: %s\n",xVocal,isspace(xVocal)?"True":"False");
	printf("Verifica si %c es space: %s\n",xEspacio,isspace(xEspacio) ?"True":"False");
	printf("Verifica si %c es space: %s\n",xComa,isspace(xComa)?"True":"False");
	printf("Verifica si %c es space: %s\n",xLinea,isspace(xLinea)?"True":"False");
	printf("Verifica si %c es space: %s\n",xNulo,isspace(xNulo)?"True":"False");
	CR
	printf("Evalua Isupper\n");
	printf("Verifica si %c es mayuscula: %s\n",xNumero,isupper(xNumero)?"True":"False");
	printf("Verifica si %c es mayuscula: %s\n",xConson,isupper(xConson)?"True":"False");
	printf("Verifica si %c es mayuscula: %s\n",xVocal,isupper(xVocal)?"True":"False");
	printf("Verifica si %c es mayuscula: %s\n",xEspacio,isupper(xEspacio) ?"True":"False");
	printf("Verifica si %c es mayuscula: %s\n",xComa,isupper(xComa)?"True":"False");
	printf("Verifica si %c es mayuscula: %s\n",xLinea,isupper(xLinea)?"True":"False");
	printf("Verifica si %c es mayuscula: %s\n",xNulo,isupper(xNulo)?"True":"False");
	CR
	printf("Evalua Isxdigit\n");
	printf("Verifica si %c es hexadecimal: %s\n",xNumero,isxdigit(xNumero)?"True":"False");
	printf("Verifica si %c es hexadecimal: %s\n",xConson,isxdigit(xConson)?"True":"False");
	printf("Verifica si %c es hexadecimal: %s\n",xVocal,isxdigit(xVocal)?"True":"False");
	printf("Verifica si %c es hexadecimal: %s\n",xEspacio,isxdigit(xEspacio) ?"True":"False");
	printf("Verifica si %c es hexadecimal: %s\n",xComa,isxdigit(xComa)?"True":"False");
	printf("Verifica si %c es hexadecimal: %s\n",xLinea,isxdigit(xLinea)?"True":"False");
	printf("Verifica si %c es hexadecimal: %s\n",xNulo,isxdigit(xNulo)?"True":"False");
		CR
	printf("Evalua Tolower\n");
	printf("minuscula de %c es: %c\n",xNumero,tolower(xNumero));
	printf("minuscula de %c es: %c\n",xConson,tolower(xConson));
	printf("minuscula de %c es: %c\n",xVocal,tolower(xVocal));
	printf("minuscula de %c es: %c\n",xEspacio,tolower(xEspacio));
	printf("minuscula de %c es: %c\n",xComa,tolower(xComa));
	printf("minuscula de %c es: %c\n",xLinea,tolower(xLinea));
	printf("minuscula de %c es: %c\n",xNulo,tolower(xNulo));

	printf("Evalua Toupper\n");
	printf("mayuscula de %c es: %c\n",xNumero,toupper(xNumero));
	printf("mayuscula de %c es: %c\n",xConson,toupper(xConson));
	printf("mayuscula de %c es: %c\n",xVocal,toupper(xVocal));
	printf("mayuscula de %c es: %c\n",xEspacio,toupper(xEspacio));
	printf("mayuscula de %c es: %c\n",xComa,toupper(xComa));
	printf("mayuscula de %c es: %c\n",xLinea,toupper(xLinea));
	printf("mayuscula de %c es: %c\n",xNulo,toupper(xNulo));

return 0;
}
