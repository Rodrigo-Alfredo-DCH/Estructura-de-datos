#include <stdio.h>
#include <stdlib.h>

#include "matrices.h"

//void llenar_matriz(int, double **);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int orden,i,j;
	printf("dime el orden de la matriz: ");
	scanf("%d", &orden);	
	double **matriz = crear_matriz(orden,orden);
	for(i=0; i<orden; i++) {
      for(j=0; j<orden; j++){      
         //scanf("%lf", mat[i][j]);
         matriz[i][j] = rand();
         printf("%lf	| ", matriz[i][j]);
		 }
		 printf("\n");
	}
	//llenar_matriz(orden, matriz);
	printf("el determinante vale: %lf \n", calcularDeterminante(matriz, orden));
	return 0;
}

/*void llenar_matriz(int orden, double **mat){
	int i,j;
	printf("\nIngrese los elementos de la matriz: \n");
   for(i=0; i<orden; i++) {
      for(j=0; j<orden; j++){      
         //scanf("%lf", mat[i][j]);
         mat[i][j] = rand();
         print("%lf",mat[i][j]);
		 }
	}
	
}*/
