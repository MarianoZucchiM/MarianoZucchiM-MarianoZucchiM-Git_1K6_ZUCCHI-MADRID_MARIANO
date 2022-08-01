#include <stdio.h>
#include <operaciones.h>

main()
{
	int x, y;
	printf("Ingresar el primer numero: ");
	scanf("%d", &x);
	
	printf("Ingresar el segundo numero: ");
	scanf("%d", &y);
	
	printf("La suma es:%d", suma(x, y));
	printf("\nLa resta es:%d", resta(x, y));
	printf("\nLa multiplicacion es:%d", mult(x, y));
	if (y == 0)
	{
		printf("\nNo se puede dividir en 0");
	}
	else
	{
		printf("\nLa division es:%.2f", div(x, y));
	}
	
}