#include <stdio.h>
#include <stdlib.h>

main()
{
	int x,y,**matrix,fc,**matrix2,**matrix3;
//Asignacion de memoria dinamica
	printf("Introduzca un numero para las filas y columnas:");
	scanf("%d",&fc);
	matrix=(int**)malloc(sizeof(int*)*fc);
	for(x=0;x<fc;x++)
	matrix[x]=(int *)malloc(sizeof(int)*fc);
	
	matrix2=(int**)malloc(sizeof(int*)*fc);
	for(x=0;x<fc;x++)
	matrix2[x]=(int *)malloc(sizeof(int)*fc);
	
	matrix3=(int**)malloc(sizeof(int*)*fc);
	for(x=0;x<fc;x++)
	matrix3[x]=(int *)malloc(sizeof(int)*fc);
//Ingresa Datos Matriz 1
	printf("Ingrese los datos de la primera matriz:\n");
	for(x=0;x<fc;x++)
	{
		for(y=0;y<fc;y++)
		{
			printf("Matriz 1[%d][%d]=",x,y);
			scanf("%d", & matrix[x][y]);
		}
	}			
	printf("Ingrese los datos de la segunda matriz:\n");
	for(x=0;x<fc;x++)
	{
		for(y=0;y<fc;y++)
		{
			printf("Matriz 2[%d][%d]=",x,y);
			scanf("%d", & matrix2[x][y]);
		}
	}
	for(x=0;x<fc;x++)
	{
		for(y=0;y<fc;y++)
		{
			matrix3[x][y]= matrix[x][y] * matrix2[x][y];
		}
	}
	system("CLS");
	printf("La matriz resultante es:\n");
//Imprime		
	for(x=0;x<fc;x++)
	{
		for(y=0;y<fc;y++)
		printf("%d\t",matrix3[x][y]);
		printf("\n");	
	}
	for(x=0;x<fc;x++)
	free(matrix[x]);
	free(matrix2[x]);
	free(matrix3[x]);
	free(matrix);
	free(matrix2);
	free(matrix3);
	system("PAUSE");
}
