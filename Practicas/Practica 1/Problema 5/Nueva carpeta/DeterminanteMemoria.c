#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double** crea_matriz(size_t filas, size_t cols){
	double** matriz;
	int i;
	matriz= calloc(filas, sizeof(double));
	for(i=0;i<filas;i++){
		matriz[i] = calloc(cols, sizeof(double));
	}
	return matriz;
}



void borrar_matriz(size_t filas, double** matriz){
	
	
	int j;
	for(j=0;j<filas;j++){
		free(matriz[j]);
	}
	free(matriz);
}



double** formar_menores(int orden, double** matriz, int cols){	
	
	double** menores = crear_matriz(orden-1, orden-1);
	int i=1,k=0,j=0,l=0;
	for(i,k;i<orden;i++,k++){
		for(j,l;j<orden;j++)
		if(j != cols){
			menores[k][l++] = matriz[i][j];
		}
	}
	return menores;
}

double calcularDeterminante(double** matriz, int orden){	
	
	if(orden>2){
		double suma=0;
		int j;
		for(j=0;j<orden; j++){
			double** menores = formar_menores(orden, matriz, j);
			suma+=pow(-1,j)*matriz[0][j]*calcularDeterminante(orden-1,menores);
			borrar_matriz(orden-1, menores);
		}return suma;
		}
		else{
			return matriz[0][0]*matriz[1][1]- matriz[0][1]*matriz[1][0];
		}
		
	}
	void llenar_matriz(int, double**);


int main(){
	
	
	int orden,i,j;
	/*int** matriz = NULL;
	matriz = (int*)malloc( sizeof(int*)*orden);*/
	
	printf("Ingresa el orden de la matriz : ");
    scanf("%d", &orden);
    while (orden < 0 ) {
       printf("\nEl orden de la matriz no puede ser igual que 0\n");
       printf("Ingrese nuevamente el orden de la matriz: ");
       scanf("%d", &orden);
   } 
   double** matriz = crear_matriz(orden,orden);
   llenar(orden, **matriz);
   printf("el determinante vale: %lf \n",calcularDeterminante(orden, matriz)) ;
   //llenado de la matriz
   
    
}
void llenar_matriz(int orden, double** mat){
	int i,j;
	printf("\nIngrese los elementos de la matriz:\n\n");
   for (i = 0; i < orden; i++) {
      for (j = 0; j < orden; j++) {      
         scanf("%d", &mat[i][j]);
       }
   }
}
