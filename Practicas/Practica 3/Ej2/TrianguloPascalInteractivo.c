#include "stdio.h"

int main()
{
	int n, i, j, x;
	
	printf( "\n\tTRIANGULO DE PASCAL\n\n" );
    printf( "  Ingrese un numero positivo: " );
    scanf( "%d", &n );
    
	if( n < 0 )
    	printf( "\n\n\tError, el numero ingresado es incorrecto.\n\n\n  " );
    else
    {
    	int pasc[n];
    	x = 0;
        for(i = 1;i <= n;i++)
        {
            for (j=x; j>=0; j--)
        	{
            	if(j==x || j==0)
                	pasc[j] = 1;
             	else
            		pasc[j] = pasc[j] + pasc[j-1];
        	}
    	    x++;
        	printf("\n");
        
    	    //for (j=1; j<=n-i; j++)
        	    printf("   ");
       		for(j=0; j<x; j++)
            	printf("%5d   ", pasc[j]);
		}
	}
	
	printf("\n\n  ");
	system("pause");
	
	return 0;
}
