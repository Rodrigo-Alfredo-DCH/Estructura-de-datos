#include<stdio.h>
#include<conio.h>
#include<math.h>
 
/* Declaración de funciones */
int potencia (int, int);
 
int main(void){
int base, exponente;
 
	printf("Base: ");
	fflush(stdin);
	scanf("%i", &base);
 
	printf("Exponente: ");
	fflush(stdin);
	scanf("%i", &exponente);
 
	printf("\nLa pontencia del numero %i con exponente %i es %i", base, exponente, potencia(base, exponente));
 
	getch();
	return 0;
}
 
int potencia(int x, int n){
 int resultado=0;
 
	if (n == 0) return 0;
 
	if (n == 1) return 1;
 
	if (n % 2 == 0){
	resultado=pow((pow(x,(n/2))),2);
	
	return resultado;
	}
	else{
	resultado=x*pow(x,(n-1));
	return resultado;
	}
 
 
}
