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
				do{
				system("cls");
				printf("Ingrese el nuemero de registros a insertar min 15 socios: ");
				setbuf(stdin, NULL);
				scanf("%d",&nNodos);
				
				}while(nNodos < 15);
				system("cls");
				for(i;i<nNodos; i++){
	
					nuevo=crearNodo();
 
			  		if( nuevo == NULL ) {
	    				printf( "No se pudo crear el nuevo nodo..\n" );  
	  				}
					else{
	  		  	
	   					printf( "Ingresar nombre: " );
					    setbuf(stdin, NULL);
					    gets( nombre );	   
					    printf( "Ingresa el primer apellido: " );
					    setbuf(stdin, NULL);
					    gets( apeP );	  
					    printf("Ingrese la edad: ");
					    
					    printf( "Ingresa la direccion: " );
					    setbuf(stdin, NULL);
					    gets( direc);
					    printf("Elija una membrecia \n \t1.Basica \t 2.intermedia \t 3.VIP");
					    printf("\t 1. basica: la membrecia basica solo le ofrece la entrada sin filas ");
					    
					    printf("\ningrese la matricula : ");
					  	setbuf(stdin, NULL);
					  	scanf("%d", &matri);
					    asignarMatricula(nuevo, matri);
					    asignarNombre( nuevo, nombre );
					    asignarDireccion(nuevo, direc);
											    
					    resp = insertarNodo( &inicio, nuevo );
					    
					    if( resp == false ){
					    	
					      printf( "El ID ya existe..." );
					    }
					}
				}
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
