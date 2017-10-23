#include "funciones.h"
int main()
{
    EMovie movie[TAM];
    if(cargarDesdeArchivo(movie))
	{
		printf("No se pudo abrir el fichero");
	}
	else
	{
		printf("Se cargaron las estructuras con exito\n");
	}

	system("pause");


	system("cls");


    char seguir='s';
    char guardar= 's';
    int opcion=0;
    while(seguir=='s')
    {
        printf("1- Agregar pelicula\n");
        printf("2- Borrar pelicula\n");
        printf("3- Generar pagina web\n");
        printf("4- Salir & guardar cambios\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
               agregarPelicula(movie);
                break;
            case 2:
                listarMovie(movie);
                eliminarMovie(movie);
                break;
            case 3:
                generarPagina(movie);
               break;
            case 4:

                printf("\nGuardar cambios S/N ?: ");
				guardar = tolower(getche());

				if(guardar == 's')
				{
					if(guardarEnArchivo(movie))
					{
						printf("\nNo se pudo abrir el fichero\n");
					}
					else
					{
						printf("\nSe guardo la informacion con exito\n");
					}
				}
                seguir = 'n';
                break;
        }
    }

    return 0;
}
