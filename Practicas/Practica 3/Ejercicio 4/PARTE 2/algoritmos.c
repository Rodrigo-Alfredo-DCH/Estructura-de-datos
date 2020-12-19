#include <stdio.h>
#include <stdlib.h>
#include "cabecera.h"

void intercambiar(int *a, int *b)
{
  int temporal = *a;
  *a = *b;
  *b = temporal;
}
void burbuja(int arreglo[], int longitud) 
{
	int x,indiceActual;
	for (x = 0; x < longitud; x++)
  	{
    	for (indiceActual = 0; indiceActual < longitud - 1;indiceActual++)
		{
      		int indiceSiguienteElemento = indiceActual + 1;
      		if (arreglo[indiceActual] > arreglo[indiceSiguienteElemento])
	  		{
        		intercambiar(&arreglo[indiceActual], &arreglo[indiceSiguienteElemento]);
      		}
    	}
  	}
  	
	printf("Arreglo Ordenado:\n");
  	for( x = 0; x < longitud; x++)
    printf("%4d ", arreglo[x]);
}
