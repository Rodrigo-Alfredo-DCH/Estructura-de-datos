#include <stdio.h>
#include <stdlib.h>
#include "cabecera1.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    int i;
    int A[] = {2, -40, 5, -7, 1, 2, 3, 6,10,100,80};
    int r = sizeof(A)/sizeof(A[0]) - 1, p = 0;
	printf("Los numeros son:");
  	for( i = 0; i < r; i++)
	{
    	printf("%d ", A[i]);
  	}
  	printf("\n");
  	printf("_______________________________________________\n");
    merge_sort(A, p, r);
	printf("El resultado es: ");
    for (i = 0; i < r + 1; i++)
    {
        printf("%i ", *(A + i));
    }
    return 0;
}
