#include <stdio.h>
#include <stdlib.h>
#include "cabecera1.h"


void merge(int *array, int p, int q, int r)
{
    // Declaracion de variables
    int i, j, k;
    int n_1 = (q - p) + 1;
    int n_2 = (r - q);
    int *L, *R;

    // Asignacion de memoria
    L = (int*)malloc(n_1 * sizeof(int));
    R = (int*)malloc(n_2 * sizeof(int));

    // Copia de datos del arreglo A en los subarreglos L y R
    for (i = 0; i < n_1; i++)
    {
        L[i] = *(array + p + i);
    }

    for (j = 0; j < n_2; j++)
    {
        R[j] = *(array + q + j + 1);
    }

    i = 0;
    j = 0;

    for (k = p; k < r + 1; k++)
    {
        if (i == n_1)
        {
            *(array + k) = *(R + j);
            j =  j+ 1;
        }
        else if(j == n_2)
        {
            *(array + k) = *(L + i);
            i = i + 1;
        }
        else
        {
            if (*(L + i) <= *(R + j))
            {
                *(array + k) = *(L + i);
                i = i + 1;
            }
            else
            {
                *(array + k) = *(R + j);
                j = j + 1;
            }
        }
    }
}

void merge_sort(int *array, int p, int r)
{
    if (p < r)
    {
        // Dividir el problema en subproblemas
        int q = (p + r)/2;
        
        // Resolver el problema de manera recursiva hasta llegar a una solucion trivial
        merge_sort(array, p, q);
        merge_sort(array, q + 1, r);
        
        merge(array, p, q, r);
    }
}
