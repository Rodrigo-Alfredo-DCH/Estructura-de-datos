#include <stdio.h>
#include <stdlib.h>

int catalan( int n )
{
    if ( n == 0 )
        return 1;  
    else
        return ( ( 4 * n - 2 ) * catalan( n - 1 ) / ( n + 1 ) );
}

int main()
{
	int n;
	
    printf( "\n\tNUMEROS DE CATALAN\n\n" );
    printf( "  Ingrese un numero positivo: " );
    scanf( "%d", &n );
    
	if( n < 0 )
    	printf( "\n\n\tError, el numero ingresado es incorrecto.\n\n\n  " );
    else
    	printf( "\n  El numero catalan de %d es: %d\n\n  ", n, catalan(n) );
    
    system( "pause" );
    
    return 0;
}
