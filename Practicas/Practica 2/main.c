#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include"cabecera.h"


int main(){
	setlocale(LC_ALL, "");
	char nombre[100];
	char apeP[50];
	char direc[200];
	int matri=0,tipoMemb, edad, i=0, nNodos=0, opmenu,opcMostrar,op;
	

	booleano resp;
	nodo* inicio =NULL;
	nodo* nuevo =NULL;
	
	
	do{
		system("cls");
		printf("\t\t***MENU INICIO\n");
		printf("\t 1. Ver tipos de membresia \n");
		printf("\t 2. Crear un nuevo registro \n");
		printf("\t 3. Mostrar y buscar en los registros \n");
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
				//do{
				system("cls");
				printf("Ingrese el nuemero de registros a insertar min 15 socios: ");
				setbuf(stdin, NULL);
				scanf("%d",&nNodos);
				
				//}while(nNodos < 15);
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
					    setbuf(stdin, NULL);
					    scanf("%d", &edad);
					    printf( "Ingresa la direccion: " );
					    setbuf(stdin, NULL);
					    gets( direc);
						printf("membrecias \n \t1.Basica \t 2.intermedia \t 3.VIP \n\t Elija una membrecia");
					    setbuf(stdin, NULL);
						scanf("%d",&tipoMemb);
					    printf("\ningrese el numero de membresia: ");
						setbuf(stdin, NULL);
						scanf("%d", &matri);
						
						
					    
					    asignarNombre( nuevo, nombre );
					    asignarApellido( nuevo, apeP);
					    asignarEdad( nuevo, edad);
					    asignarDireccion(nuevo, direc);					    
					    asignarTipoMembresia(nuevo, tipoMemb);
					    asignarMatricula(nuevo, matri);
						
								    
					    resp = insertarNodo( &inicio, nuevo );
					    
					    if( resp == false ){
					    	
					      printf( "El ID ya existe..." );
					    }
					}
				}
				break;
								
			case 3:
				printf("\n\t 1. Ver todo");			
				printf("\n\t 2. Buscar por nombre");
				printf("\n\t 3. Buscar por letra inicial");
				printf("\n\t 4. Buscar por apellido");
				printf("\n\t 5. Buscar por  menor o igual al numero de membresia" );
				printf("\n\t 6. Buscar por  mayor o igual al numero de membresia");
				printf("\n\t 7. Buscar por edad" );
				printf("\n\t 8. Buscar entre edades");
				printf("\n\t 9. Buscar por numero de membrecia");
				printf("\n\t Elija un Opcion");
				scanf("%d",&opcMostrar);
				switch(opcMostrar){
					case 1:
						op=0;
						mostrarRegistro(&inicio, nuevo,op);
						system("pause");
						break;
					case 2:
						break;
					case 3:
						break;
					case 4:
						break;
					case 5:
						break;
					case 6:
						
						break;
					case 7:
						break;
					case 8:
						break;
					case 9:
						break;
					case 10:
						break;
				}
											
				break;
								
			case 4:
				
				break;
				
			default: 
				printf("\nEsa no es una opcion");
			}
		
		
		
	}while(opmenu != 0);
  
  
}
