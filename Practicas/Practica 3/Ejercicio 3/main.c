#include <stdio.h>
#include <math.h> // Para floor
#include "cabecera.h"


int main(){
    int numeros[] = {1, 2, 4, 8, 15, 16, 20, 50,100,450};
    int longitudDelArreglo = sizeof(numeros) / sizeof(numeros[0]);
    int busqueda,x;
    printf("Los numeros son:");
  	for( x = 0; x < longitudDelArreglo; x++)
	{
    	printf("%d ", numeros[x]);
  	}
  	printf("\n");
    printf("Ingrese el numero que desea buscar: ");
    scanf("%d", & busqueda);
    int resultadoBusquedaRecursiva = busquedaBinariaRecursiva(numeros, busqueda, 0, longitudDelArreglo - 1);
    printf("Al buscar %d recursivamente, el resultado es %d\n", busqueda, resultadoBusquedaRecursiva);
    return 0;
}

