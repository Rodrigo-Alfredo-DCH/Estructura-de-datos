#include<stdio.h>
#include<conio.h>
 
/* Declaración de funciones */
int potencia(int, int);
 
int main(void){
	int base, exponente;
 
	printf("Base: ");
	fflush(stdin);
	scanf("%i", &base);
 
	printf("Exponente: ");
	fflush(stdin);
	scanf("%i", &exponente);
 
	printf("\nLa pontencia del numero %i con exponente %i es %i", base, exponente, potencia(base, exponente));
 
	
	return 0;
}
 
int potencia(int base, int exponente){
	if (exponente  == 0) return 1;
 	else{
	  if(exponente%2 == 0){
	  	return pow(potencia(base, (exponente/2)),2);
	 }
	else{
		return base * potencia(base, exponente -1); // llamada recursiva
	}}
}
