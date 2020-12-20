#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, catalan = 1;
	
    printf( "\n\tNUMEROS DE CATALAN\n\n" );
    printf( "  Ingrese un numero positivo: " );
    scanf( "%d", &n );
    
	if( n < 0 )
    	printf( "\n\n\tError, el numero ingresado es incorrecto.\n\n\n  " );
    else
    {
        for(i = 1;i <= n;i++)
            catalan = catalan * ( 4 * i - 2 ) / ( i + 1 );
	}
	
	printf( "\n  El numero catalan de %d es: %d\n\n  ", n, catalan );
    
    system( "pause" );
    
    return 0;
}
