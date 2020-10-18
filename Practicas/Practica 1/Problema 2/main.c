#include<stdio.h>
#include<stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//leer datos 
	int tam,j;
	printf("ingrese el tamaño del vector: ");
	scanf("%d",&tam);
	printf("%d \n",tam);
	int vector1[tam],i, vector2[10];
	for(i=0;i<tam;i++){
		printf("ingrese el valor %d: ",i);
		scanf("%d",&vector1[i]);
		printf("\nvalor %d: \n",vector1[i]);
	}
	printf("%d",i);
	i=i-1;
	//ordenar datos
	for(j=0;j<tam;j++){
		vector2[j]=vector1[i];
		i=i-1;
		printf("vector en %d su valor es %d y de i es %d \n", j, vector2[j], i);
	}

	
	return 0;
}
