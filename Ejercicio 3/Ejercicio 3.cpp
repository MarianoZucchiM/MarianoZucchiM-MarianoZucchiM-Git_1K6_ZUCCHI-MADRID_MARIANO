#include <stdio.h>

bool esPrimo(int x1);


main()
{
	int x,cantidadPrimos,numero;
	
	printf("Ingresar la cantidad de numeros primos: ");
	scanf("%d", &x);
	printf("",esPrimo(x));
	
}
bool esPrimo(int x1)
{
	int numero;
	numero=true;
	for (int i=2;i<x1;i++)
	{
		if(x1%i==0)
		{
			numero=false;
		}
	}
	if(numero==true)
	{
		printf("El numero es primo");
	}
	
	else
	{
		printf("El numero no es primo");
	}
}
