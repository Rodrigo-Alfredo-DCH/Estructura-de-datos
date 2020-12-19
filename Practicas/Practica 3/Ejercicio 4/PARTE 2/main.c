#include <stdio.h>
#include <stdlib.h>
#include "cabecera.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int x;
	int arreglo[] = {30, 28, 11, 96, -5, 21, 18, 12, 22, 30, 97, -1, -40, -500};
  
	int longitud = sizeof arreglo / sizeof arreglo[0];
	
	printf("Arreglo sin Ordenar\n");
  	for( x = 0; x < longitud; x++)
	{
    	printf("%d ", arreglo[x]);
  	}
  	printf("\n");
  	
	burbuja(arreglo, longitud);

	return 0;
}
