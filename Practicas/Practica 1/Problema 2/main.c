#include<stdio.h>
#include<stdlib.h>
#include "Cabecera.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//leer datos 
	int tam,i;
	
	printf("ingrese el tamaño del vector: ");
	scanf("%d",&tam);
	
	int* vector1 = NULL;
	
	vector1 = (int *)malloc(sizeof(int)*tam);
	
	for(i=0;i<tam;i++){
		printf("ingrese el valor %d: ",i);
		vector1[i] = rand();
		printf("\nvalor %d: \n",vector1[i]);
	}
	intercambiarElementos(vector1, tam, i);


	
	return 0;
}
