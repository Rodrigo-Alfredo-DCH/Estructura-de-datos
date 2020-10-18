#include<stdio.h>
#include<stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//leer datos 
	int tam,j,i,div;
	
	printf("ingrese el tamaño del vector: ");
	scanf("%d",&tam);
	
	int* vector1 = NULL;
	int* vector2 = NULL;
	vector1 = (int *)malloc(sizeof(int)*tam);
	vector2 = (int *)malloc(sizeof(int)*tam);
	for(i=0;i<tam;i++){
		printf("ingrese el valor %d: ",i);
		scanf("%d",&vector1[i]);
		printf("\nvalor %d: \n",vector1[i]);
	}

	//ordenar datos
	div=tam/2;
	i=div;
	for(j=0;j<div;j++){
		vector2[j]=vector1[i];
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
	
	return 0;
}
