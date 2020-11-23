#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include"cabecera.h"


int main(){
	setlocale(LC_ALL, "");
	char nombre[100];
	char apeP[50];
	char direc[200];
	int matri=0,tipoMemb, edad, i=0, nNodos=0, opmenu,opcMostrar,op, opcBorrar;
	

	booleano resp;
	nodo* inicio =NULL;
	nodo* nuevo =NULL;
	
	
	do{
		system("cls");
		printf("\n\t********* DEJAVU LIVE CLUB *********\n\n");
		printf("\t 1. Ver tipos de membresia \n");
		printf("\t 2. Crear un nuevo registro \n");
		printf("\t 3. Mostrar y buscar en los registros \n");
		printf("\t 4. Eliminar un registro \n");
		printf("\t 0. Salir");
		printf("\n\t\tElija una opcion: ");
		scanf("%d", &opmenu);
		
		switch(opmenu){
			case 0:
				return 0;
				break;
				
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
	  		  	
	   					printf( "\n\n*********************************************************************************" );
						printf( "\n   Ingresar nombre: " );
					    setbuf(stdin, NULL);
					    scanf( "%s", &nombre );	   
					    printf( "   Ingresa el primer apellido: " );
					    setbuf(stdin, NULL);
					    scanf( "%s", &apeP );	  
					    printf( "   Ingrese la edad: " );
					    setbuf(stdin, NULL);
					    scanf("%d", &edad);
					    printf( "   Ingresa la direccion: " );
					    setbuf(stdin, NULL);
					    gets(direc);
					    printf( "   --------------------------------------------------------------------------" );
					    printf( "\n   |                          MEMBRECIAS                                    |" );
						printf( "\n   |          1. Basica           2. intermedia           3. VIP            |" );
						printf( "\n   --------------------------------------------------------------------------" );
						printf( "\n   Elija una membrecia: " );
					    setbuf(stdin, NULL);
						scanf( "%d",&tipoMemb );
					    printf( "   Ingrese el numero de membresia: " );
						setbuf(stdin, NULL);
						scanf( "%d", &matri );
					    
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
				printf("\n\t 1. Ver todo o Buscar por numero de Membresia");			
				printf("\n\t 2. Buscar por nombre");
				printf("\n\t 3. Buscar por letra inicial");
				printf("\n\t 4. Buscar por apellido");
		/**/	printf("\n\t 5. Buscar por  menor o igual al numero de membresia" );
				printf("\n\t 6. Buscar por  mayor o igual al numero de membresia");
				printf("\n\t 7. Buscar por edad" );
		/**/	printf("\n\t 8. Buscar entre edades");
				printf("\n\t Elija un Opcion");
				scanf("%d",&opcMostrar);
				switch(opcMostrar){
					case 1:
						printf("\n Presione 0 si desea ver toda la lista o digite el numero de la membresia");
						op=0;
						scanf("%d",&op);
						mostrarRegistro(&inicio, nuevo,op);
						system("pause");
						break;
					case 2:
						system("cls");
						printf("\n\tBUSQUEDA DE REGISTRO POR NOMBRE\n\n");
						mostrarnombre(&inicio);
						printf("\n\t");
						system("pause");
						break;
					case 3:
						system("cls");
						printf("\n\tBUSQUEDA DE REGISTRO POR LETRA INICIAL DEL NOMBRE\n\n");
						mostrarletra(&inicio);
						printf("\n\t");
						system("pause");
						break;
					case 4:
						system("cls");
						printf("\n\tBUSQUEDA DE REGISTRO POR APELLIDO\n\n");
						mostrarapellido(&inicio);
						printf("\n\t");
						system("pause");
						break;
					case 5:
						buscarXMembresia(&inicio,nuevo,matri);
						break;
					case 6:
						buscarXmembresia(&inicio,nuevo,matri);
						break;
					case 7:
						buscarEdad(&inicio, nuevo,edad);
						break;
					case 8:
						buscarEntreEdades(&inicio,nuevo,edad);
						break;
				}
				break;
								
			case 4:
				printf("\n\t Borrar");
				printf("\n 1.Un registro por Numero de membresia");
				printf("\n 2.Registros menores a un numero de membresia");
				printf("\n 3.Registros meyores a un numero de membresia");
				printf("\n 4.Registros que esten entre ndos numeros de la membresia");
				printf("\n 5. Borrar lista");
				printf("\n Elija una una opcion");
				scanf("%d",&opcBorrar);
				switch(opcBorrar){
					case 1:
						printf("ingrese la matricula a borrar");		
						scanf("%d",&matri);		
						borrarNodo (&inicio, matri);
						break;
					case 2:
						printf("\nHasta que numero de membresia desea borrar: ");
						scanf("%d", &matri);
						borrarMenorIgualQ( &inicio, matri );
						break;
					case 3:
						printf("\nApartir de que numero de membresia desea borrar: ");
						scanf("%d", &matri);
						borrarMayorIgualQ( &inicio, matri );
						break;
					case 4:
						break;
					case 5:
						borrarLista(&inicio);
						printf("lista borrada");
						system("pause");
						break;
				}
				
				break;
				
			default: 
				printf("\nEsa no es una opcion");
			}	
	}
	while(opmenu != 0);
}
