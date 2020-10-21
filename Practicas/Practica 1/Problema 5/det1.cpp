#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int tam,i,j,k;
	
	printf("ingrese el tamaño: ");
	scanf("%d",&tam);
	
	
	//declarando matriz dinamica
	
	int** mat = NULL;
	
	mat = (int **)malloc( sizeof(int*) * tam);
	
	for(i=0;i<tam;i++){
		mat[i] = (int*)malloc( sizeof(int)* tam);
	}
	
	float aux, pivote,pivote1,det=1;
	
	printf("\n Llenando la matriz");
	
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			mat[i][j]=rand();
		}
	}
	
	printf("\n Imprimiendo la matriz\n");
	
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			printf("| %d	",mat[i][j]);
		}
		printf("\n");
	}
	
	
	//REDUCCION POR RENGLONES
	
	for(i=0;i<tam;i++){
		pivote=mat[i][i];
		for(j=i+1; j<tam;j++){
			pivote1=mat[j][i];
			aux=pivote1/pivote;
			for(k=0;k<tam;k++){
				mat[j][k]=mat[j][k]-aux*mat[i][k];
			}
		}
	}
	
	
	// CALCULO DE LA DETERMINANTE
	
	for(i=0;i<tam;i++)
		det+=mat[i][i];
	
	printf("\n la determinante es: %f",det);
	
	return 0;
	
}
