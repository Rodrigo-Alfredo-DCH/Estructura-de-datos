#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ordenarAscendente(int* numeros, int tamanio, int j, int i);
void ordenarDescendente(int* numeros, int tamanio, int j, int i);

main(){
	
	int *tamanio, *i, *j, *op;
	int *numeros = NULL;										//Declaramos apuntadores para asignarles memoria dinámica
	
	tamanio = (int *)malloc(4);
	i = (int *)malloc(4);
	j = (int *)malloc(4);										//Las variables las declaramos con memoria dinámica
	op = (int *)malloc(4);
	
	srand (time(NULL));											//Usamos la función srand para generar numeros aleatorios diferentes
	do
	{
		printf("Indique el tama%co del arreglo: ", 164);
		scanf("%d",tamanio);									//Leemos la cantidad de datos que tendra el arreglo con la variable tamanio
		if(*tamanio<2)
			printf("\nError, el tama%co del arreglo debe ser minimo de 2 x 2\n\n", 164);
		system("pause");
		system("cls");
	}
	while(*tamanio<2);
	
	numeros = (int *)malloc(sizeof(int)*(*tamanio));			//Declaramos el arreglo de n numeros en memoria dinamica con malloc
	
	for(*i=0;*i<*tamanio;*i=*i+1)
	{
		numeros[*i] = rand();									//Guardamos el número aleatorio en el arreglo, en la posición i
	}
	do
	{
		printf("\nDesea ordenarlos de forma:\n\n\t1)Ascendiente\n\t2)Desendiente\n\nIndique la opci%cn que desea: ", 149);
		scanf("%d",op);											//Leemos con la variable op la forma en que desea ordenar los valores del arreglo
		printf("\n");
	
		system("pause");
		system("cls");
	
		if(*op==1)
			ordenarAscendente(numeros, *tamanio, *j, *i);		//Enviamos a la función el apuntador numeros y los valores que tienen los apuntadorews tamanio,j,i
		else
		if(*op==2)
			ordenarDescendente(numeros, *tamanio, *j, *i);		//Enviamos a la función el apuntador numeros y los valores que tienen los apuntadorews tamanio,j,i
		else
			printf("Error, opción incorrecta, seleccione 1 o 2\n\n");
	}
	while(*op!=1 && *op!=2);									//Usamos el ciclo para detectar cuando el usuario proporcione una entrada incorrecta
	
	for(*i=0;*i<*tamanio;*i=*i+1)								//Imprimimos los datos guardados en el arreglo numero
		printf("\t%d\n", numeros[*i]);
}



void ordenarAscendente(int* numeros, int tamanio, int j, int i){	//Función para ordenar los numeros de forma ascendente
	
	for(int i=0;i<tamanio;i++)
		for(int j=0;j<tamanio;j++)
			if(numeros[i]<numeros[j])						//Comparamos los valores del arreglo, ejemplo: si numero[0] < numero[5].Si se cumple, entra al if
			{
				numeros[i] = numeros[i] ^ numeros[j];		//Si se cumple la condicional, intercambiamos los numero para que el menor quede
				numeros[j] = numeros[j] ^ numeros[i];		//en la posición 0, el segundo menor en la posición 1, etc.
				numeros[i] = numeros[i] ^ numeros[j];		//Los intercambiamos utilizando el algoritmo del XOR
			}
	printf("El orden ascendente de los n%cmeros es:\n\n", 151);
}



void ordenarDescendente(int* numeros, int tamanio, int j, int i){	//Función para ordenar los numeros de forma ascendente
	
	for(int i=0;i<tamanio;i=i+1)
		for(int j=0;j<tamanio;j=j+1)
			if(numeros[i]>numeros[j])						//Comparamos los valores del arreglo, ejemplo: si numero[0] > numero[5].Si se cumple, entra al if
				{
				numeros[i] = numeros[i] ^ numeros[j];		//Si se cumple la condicional, intercambiamos los numero para que el mayor quede
				numeros[j] = numeros[j] ^ numeros[i];		//en la posición 0, el segundo mayor en la posición 1, etc.
				numeros[i] = numeros[i] ^ numeros[j];		//Los intercambiamos utilizando el algoritmo del XOR
			}
	printf("El orden descendente de los n%cmeros es:\n\n", 151);
}
