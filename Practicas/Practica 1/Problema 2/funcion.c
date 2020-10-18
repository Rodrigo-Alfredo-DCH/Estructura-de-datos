#include <stdio.h>
#include<stdlib.h>
void intercambiarElementos(int* vector1, int tam,int i)
{
	int j,div;
	int* vector2 = NULL;
	vector2 = (int *)malloc(sizeof(int)*tam);
		//ordenar datos
	div=tam/2;
	i=div;
	for(j=0;j<div;j++){
		vector2[j] = vector1[i];
		i=i+1;
	}
		i=0;
	for(j=div;j<tam;j++){
		vector2[j]=vector1[i];
		i=i+1;
	}
	for(i=0;i<tam;i++){
		printf("vector en posicion %d su valor es %d\n",i,vector2[i]);
	}
	
}
