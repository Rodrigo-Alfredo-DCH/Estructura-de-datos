#define _MATRICES

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double **crear_matriz(size_t filas, size_t cols){
	double **matriz;
	int i;
	matriz= calloc(filas, sizeof(double));
	for(i=0; i<filas; i++){
		matriz[i] = calloc(cols, sizeof(double));
	}
	return matriz;
}


void borrar_matriz(size_t filas, double **matriz){	
	int i;
	for(i=0; i<filas; i++){
		free(matriz[i]);
	}
	free(matriz);
}

double **formar_menores(int orden, double **matriz, int col){		
	double **menores = crear_matriz(orden-1, orden-1);
	int i=1, k=0, j=0, l=0;
	for(i, k; i<orden; i++, k++){
		for(j, l; j<orden; j++){
			if(j != col){
			menores[k][l++] = matriz[i][j];
			}
		}
	}
	return menores;
}


double calcularDeterminante(double **matriz, int orden){	
	if(orden>2){
		double suma=0;
		int j;
		
		for(j=0;j<orden; j++){
			double **menores = formar_menores(orden, matriz, j);
			suma +=pow(-1,j)*matriz[0][j]*calcularDeterminante(orden-1, menores);
			borrar_matriz(orden-1, menores);
		}return suma;
		}
		else{
			return matriz[0][0]*matriz[1][1]- matriz[0][1]*matriz[1][0];
		}
		
	}



