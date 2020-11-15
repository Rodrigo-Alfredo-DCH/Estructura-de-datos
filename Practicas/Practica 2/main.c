#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include"cabecera.h"


int main(){
	setlocale(LC_ALL, "");
	char nombre[100];
	char apeP[50];
	char direc[200];
	int i=0, nNodos=0, opmenu;
	int matri=0;
	int membresia;

	booleano resp;
	nodo* inicio =NULL;
	nodo* nuevo =NULL;
	
	
	do{
		system("cls");
		printf("\t\t***MENU INICIO\n");
		printf("\t 1. Ver tipos de membresia \n");
		printf("\t 2. Crear un nuevo registro \n");
		printf("\t 3. Buscar en los registros \n");
		printf("\t 4. Eliminar un registro \n");
		printf("\t 0. Salir");
		printf("\n\t\tElija una opcion: ");
		scanf("%d", &opmenu);
		
		switch(opmenu){
			case 1:
				
				system("cls");
				membresias();								
				system("pause");
				
				break;
								
			case 2:
				
				break;
								
			case 3:
				
				break;
								
			case 4:
				
				break;
				
			default: 
				printf("\nEsa no es una opcion");
			}
		
		
		
	}while(opmenu != 0);
  
  
}
