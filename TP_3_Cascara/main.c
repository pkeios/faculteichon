#include "funciones.h"
int main()
{
    EMovie movie[TAM];
    if(cargarDesdeArchivo(movie))
	{
		printf("No se pudo leer la BD");
	}
	else
	{
		printf("Datos actualizados correctamente!!!\n");
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
        printf("3- Modificar datos cargados\n");
        printf("4- Generar pagina web\n");
        printf("5- Salir & guardar cambios\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                agregarPelicula(movie);
                break;
            case 2:
                eliminarMovie(movie);
                break;
            case 3:
                editMovie(movie);
               break;
            case 4:
                generarPagina(movie);
               break;
            case 5:
                printf("\nGuardar cambios S/N ?: ");
				guardar = tolower(getche());

				if(guardar == 's')
				{
					if(guardarEnArchivo(movie))
					{
						printf("\nNo se pudo grabar los datos\n");
					}
					else
					{
						printf("\nSe guardaron los datos correctamente!!!\n");
					}
				}
                seguir = 'n';
                break;
            default:
                printf("\nINGRESE UNA OPCION CORRECTA!!!\n");
                system("pause");
                system("cls");
        }
    }

    return 0;
}

