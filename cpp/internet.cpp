#include <stdio.h>

#define ELEMENTOS	3

struct estructura_amigo {
	char nombre[30];
	char apellido[40];
	char telefono[10];
	int edad;
	};

struct estructura_amigo amigo[ELEMENTOS];

main()
{
	int num_amigo;

	for( num_amigo=0; num_amigo<ELEMENTOS; num_amigo++ ) {
		printf( "\nDatos del amigo número %i:\n", num_amigo+1 );

		printf( "Nombre: " );
		fgets(amigo[num_amigo].nombre);
		printf( "Apellido: " );
		gets(amigo[num_amigo].apellido);
		printf( "Teléfono: " );
		fgets(amigo[num_amigo].telefono);
		printf( "Edad: " );
		scanf( "%i", &amigo[num_amigo].edad );

		while(getchar()!= '\n');	/* Vacía el buffer de entrada */
	}

	/* Impresión de los datos */
	for( num_amigo=0; num_amigo<ELEMENTOS; num_amigo++ ) {
		printf( "Mi amigo %s ", amigo[num_amigo].nombre );
		printf( "%s tiene ", amigo[num_amigo].apellido );
		printf( "%i años ", amigo[num_amigo].edad );
		printf( "y su teléfono es el %s.\n" , amigo[num_amigo].telefono );
	}
}