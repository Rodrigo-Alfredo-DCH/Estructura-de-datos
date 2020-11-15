#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define false 0
#define true 1

typedef char booleano;

typedef struct Datos{
	
	char nombre[100];
	char apellidoP[100];
	char direccion[200];
	int menbresia;
	
}datos;
/*Struct que define un dodo para una LSE*/
typedef struct Nodo{
	
	int matricula;
	
	/**Datos*/
	
	datos info;
	
	/**apuntador siguiente**/
	struct Nodo* sig;	
}nodo;

nodo* crearNodo();
void asignarMatricula(nodo* pNodo, int mat);
void asignarNombre(nodo* pNodo, char* nom);
void asignarDireccion(nodo* pNodo, char* dir);

void membresias();

void mostrarRegistro(nodo** cabecera, nodo* nuevo, int op);


booleano insertarNodo( nodo** cabecera, nodo* nuevo );
booleano borrarNodo (nodo** cabecera, int mat );
