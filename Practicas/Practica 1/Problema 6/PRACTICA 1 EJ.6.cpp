#include <stdio.h>
#include <stdlib.h>
struct alumno{
char a[50];
char b[50];
};
main()
{
	alumno *b;
	int max,i;
	
	printf("De el numero de registros a manejar:");
	scanf("%d",&max);
	b=(alumno *)malloc(sizeof(alumno)*max);
	for (i=0;i<max;i++)
	{
		printf("Da el nombre de la persona numero %d:",i+1);
		scanf("%s",(b+i)->a);
		fflush(stdin);
	}
	for (i=0;i<max;i++)
	{
		printf("%s\n",(b+i)->a);
	}
getchar();
}
