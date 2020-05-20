#include <stdio.h>

int main () 
	{
		int iPrecio=150;
		int iCantidad=20;
		float fImpuesto= .10;
		float fDescuento =.25;
		float fImporte;

		printf("curso de C\n");
		printf("Clse 13 - Operadores aritmeticos \n\n");

		printf("0) Cantidad :%d \n", iCantidad);
		iCantidad = iCantidad + 10;
		printf("1) Cantidad :%d \n", iCantidad);
                iCantidad = iCantidad + 10.78;
		printf("2) Cantidad :%d \n", iCantidad);

		iCantidad = iCantidad - 10;
		printf("3) Cantidad :%d \n", iCantidad);
		iCantidad = iCantidad  - 10.78;
		printf("4) cantidad :%d \n", iCantidad);

		fImporte = iCantidad * iPrecio;
		printf("1) importe :%f \n", fImporte);
		fImporte = fImporte- (fImporte * fDescuento);
		printf("2) Importe con descuento :%f \n", fImporte);
		fImporte = fImporte * (1 + fImpuesto);
		printf("2) Importe con descuento mas Impuesto:%f \n", fImporte);
		fImporte = fImporte * (1 + fImpuesto);
		printf("3) Importe con descuento mas impuesto :%f \n", fImporte);

		fImporte = fImporte / (1 + fImpuesto);
		printf("a) Importe con descuento :%f \n", fImporte);

		printf ("Residuo de %d 7 / 3 = ", iCantidad);
		iCantidad = iCantidad % 3;
		printf("%d \n", iCantidad);

		iCantidad = 10;
		printf("Cantidad: %d \n", iCantidad);
		printf("Cantidad: %d \n", iCantidad++);
		printf("cantidad: %d \n", iCantidad);
		printf("cantidad: * 5 %d \n", iCantidad++ *5);
		printf("cantidad: %d \n", iCantidad);
		printf("cantidad: * 5 %d \n", iCantidad-- * 5);
		printf("cantidad: %d \n", iCantidad);

		return 0;




	}
