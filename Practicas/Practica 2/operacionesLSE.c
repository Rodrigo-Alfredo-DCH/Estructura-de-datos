#include "cabecera.h"

nodo* crearNodo(){
	
	nodo* p= NULL;
	p = (nodo*)malloc(sizeof(nodo));
	if( p != NULL ){  //Falto inicializar el apuntador sig a NULL...Su comentario profe, util xd
  	
    	p->sig = NULL;
    	
  	}
	return p;
}

//-----------------------------------------------------------------------------------------------------------------------------
/** Insertar Nodo*/

booleano insertarNodo( nodo** cabecera, nodo* nuevo ){

	nodo* navegador = NULL;

	//caso 1
	if(*cabecera == NULL){
		
		*cabecera = nuevo;
		
		return true;
		
	}
	//caso2 : Insertar antes del primer Nodo
	if(nuevo->matricula<(*cabecera)->matricula){
		
		nuevo->sig= *cabecera;
		*cabecera=nuevo;
	
		return true;
	}	
	// posicionar navegador al inicio de la lista
	navegador = *cabecera;
	
	//Recorrer la lista
	while( navegador->sig != NULL && nuevo->matricula > navegador->sig->matricula){
		
		navegador = navegador->sig;
	
	}
	
	// CASO 5 El id esta repetido
	if(navegador->sig != NULL && nuevo->matricula == navegador->sig->matricula){
	
		return false;
		
	}
			
	//caso3 y 4
	
	nuevo->sig = navegador->sig;
	navegador->sig= nuevo;

	return true;
}

//------------------------------------------------------------------------------------------------------------------

//para crear la funcion  borrar nodo , debe de ser de tipo boolenao como el de acomodar 

booleano borrarNodo (nodo** cabecera, int mat ){
	
	nodo* navegador = NULL;
	nodo* aux = NULL;

	/*caso 1 lista vacia*/
	if(*cabecera == NULL){
		
		return true;
	}
	
	/*caso 2  si nuestro nodo a borrar esta al inico de la lista*/ 
	
	if((*cabecera)->matricula == mat){
		
		aux = *cabecera;
		*cabecera = (*cabecera)->sig;
		
		free(aux);
	
		return true;
	}
	//pocicionar navegador
	navegador = *cabecera;
	
	//** RECORRER LISTA*/
	
	while( navegador->sig != NULL && mat != navegador->sig->matricula){
		
		navegador = navegador->sig;
		
	}
	
	if(navegador->sig == NULL){	
	
	return false;	
	}
	
	aux = navegador->sig;
	navegador->sig = aux->sig;
	
	free(aux);
	
}	

//------------------------------------------------------------------------------------------------------------------

//para crear la funcion  borrar nodo , debe de ser de tipo boolenao como el de acomodar 
 booleano borrarLista(nodo** pNodo)
{
    nodo* aBorrar;
    while(*pNodo!=NULL)
    {
        aBorrar=*pNodo;
        *pNodo=(*pNodo)->sig;
        free(aBorrar);
    }
    return true;
}

booleano borrarMenorIgualQ(nodo** pNodo, int memb)
{
    nodo* aBorrar;
    while((*pNodo)->sig >= memb)
    {
        aBorrar=*pNodo;
        *pNodo=(*pNodo)->sig;
        free(aBorrar);
    }
    return true;
}

//-------------------------------------------------------------------------
void membresias(){
	printf("\n Tenemos 3 tipos de membresias");
	printf("\n1. Basica  \n\t Te da un descuento del 15% en tu consumo \n\t +Bebida gratis \n");
	printf("\n2. intermedia \n\t + 25% de descuento en tu consumo, \n\t + 5 productos en Barra \n\t + suma de puntos de visita frecuente");
	printf("\n3. VIP \n\t+ 40% de descuento en tu consumo \n\t + Barra libre para ti y un acompañante \n\t+entrada libre sin reservacion \n\t+ postre gratis \n");
	
}
//-----------------------------------------------------------------------

/* Asignacion de  los Datos*/

void asignarNombre(nodo* pNodo, char* nom){
	
	strcpy(pNodo->info.nombre, nom);
	
}

void asignarApellido(nodo* pNodo, char* ape){
	
	strcpy(pNodo->info.apellidoP, ape);

}

void asignarEdad (nodo* pNodo, int ed){
	pNodo->info.edad = ed;

}

void asignarDireccion(nodo* pNodo, char* dir){
	
	strcpy(pNodo->info.direccion, dir);	
	
}

void asignarTipoMembresia(nodo* pNodo, int tmemb){
	if(tmemb==1){
		strcpy(pNodo->info.tipoMembresia, "basica");
	
	}
	if(tmemb==2){
		strcpy(pNodo->info.tipoMembresia, "Intermedio");
	}
	if(tmemb==3){
		strcpy(pNodo->info.tipoMembresia, "VIP");
	}
}

void asignarMatricula(nodo* pNodo, int mat){

	pNodo->matricula = mat;
	
}

//_____________________________________________________
void mostrarNombre (nodo* pNodo){
	printf("\n %s guardado ",pNodo->info.nombre);
}

void mostrarApellido (nodo* pNodo){
	printf("\n %s guardado ",pNodo->info.apellidoP);
}

void mostrarEdad (nodo* pNodo){
	printf("\n %d guardado ", pNodo->info.edad);
}

void mostrarTipoMembresia (nodo* pNodo){
	printf("\n %s guardado ",pNodo->info.tipoMembresia);
}

void mostrarDireccion (nodo* pNodo){
	printf("\n %d guardado ",pNodo->info.direccion);
}

void mostrarNumMembresia (nodo* pNodo){
	printf("\n %d guardado ",pNodo->matricula);
}

//-----------------------------------------------------

/*Mostrar datos del nodos*/

void mostrarRegistro(nodo** cabecera, nodo* nuevo, int op){
	
	nodo* navegador=NULL;
	int tf=1;
	navegador=*cabecera;
	
	printf("\n\nRegistros:\n");
	//Mostrar todos los registros
	if(op==0){
		while(navegador!=NULL){
			printf("Numero de membresia: %d\n",navegador->matricula);
			printf("El nombre del meimbro: %s\n",navegador->info.nombre);
			printf("El apellido del meimbro: %s\n",navegador->info.apellidoP);
			printf("Edad: %d\n",navegador->info.edad);
			printf("La dirección del usuario es: %s\n",navegador->info.direccion);
			printf("Membresia: %s\n\n",navegador->info.tipoMembresia);
			navegador=navegador->sig;
		}
		
	}
	//Mostrar solo un registro	
		while(navegador!=NULL){
			//la comparación se da por matricula
			
			if(navegador->matricula==op){
				
				printf("Numero de membresia: %d\n",navegador->matricula);
				printf("El nombre del meimbro: %s\n",navegador->info.nombre);
				printf("El apellido del meimbro: %s\n",navegador->info.apellidoP);
				printf("Edad: %d\n",navegador->info.edad);
				printf("La dirección del usuario es: %s\n\n",navegador->info.direccion);
				printf("Membresia: %s\n",navegador->info.tipoMembresia);
				tf=1;
				break;
			}
			
			else{
				//Variable condicionante true-false para saber cuando no exista un registro
				tf=0;
			}
			navegador=navegador->sig;
		}
		
		if(tf==0){
			printf("La matricula ingresada no existe\n");
		}
	
}

