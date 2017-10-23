#include "funciones.h"

void agregarPelicula(EMovie *movie)
{
	int i;
	for (i = 0; i < TAM; ++i)
	{
			if ((movie+i)->estado==0)
			{


				printf("\nIngrese Titulo: ");
	            fflush(stdin);
	            gets((movie+i)->titulo);

	            printf("Ingrese URL img Pelicula: ");
	            fflush(stdin);
	            gets((movie+i)->linkImagen);

	            printf("\nIngrese Genero: ");
	            fflush(stdin);
	            gets((movie+i)->genero);

	            printf("\nIngrese Puntaje(1-10)");
	            fflush(stdin);
	            gets((movie+i)->puntaje);

	            printf("\nIngrese Duracion - (en minutos//ej:120) ");
	            fflush(stdin);
	            gets((movie+i)->duracion);

	            printf("\nIngrese Descripcion: ");
	            fflush(stdin);
	            gets((movie+i)->descripcion);

	            (movie+i)->id=i;

	            (movie+i)->estado=1;

                printf("\nCARGADO CORRECTAMENTE!!!\n");
                system("pause");
                system("cls");
	            break;
	        }

	}

}


void generarPagina(EMovie *movie)
{

		FILE *pagina;
		char buffer[60800]={};
		int i;

	    strcat(buffer,"<!DOCTYPE html><html lang='en'><head><meta http-equiv='Content-Type' content='text/html; charset=UTF-8'/><meta name='viewport' content='idth=device-width, initial-scale=1'><title>Lista peliculas</title><link href='css/bootstrap.min.css' rel='stylesheet'><link href='css/custom.css' rel='stylesheet'><style>body{background:#000 url('https://wallpaperscraft.com/image/dark_spots_texture_background_50355_1920x1080.jpg');margin:0 auto;background-repeat:no-repeat;background-size:100% 100%;color:white;padding: 0;margin: 0; background-size: cover;} h2{color: white; margin-bottom:65px;} h3 a{text-decoration:none;color:red;font-weight: bold;}.box1{background-color:rgba(0, 0, 0, 0.30);height: 600px;border-radius: 24px 24px 24px 24px; border: 0px solid #000000;} h3 a:hover{text-decoration:none;color:white;}</style></head><body><div class='container'><div class='row'>");
        strcat(buffer,"<h2>Trabajo Practico 3</h2>");
        for (i = 0; i < TAM; ++i)
        {
            if((movie+i)->estado==1)
            {
                strcat(buffer,"<article class='col-md-2 article-intro box1'>");
                strcat(buffer,"<img class='img-responsive img-rounded' src='");
                strcat(buffer,movie[i].linkImagen);
                strcat(buffer,"' alt=''>");

                strcat(buffer,"<h3><a href='#'>");
                strcat(buffer,movie[i].titulo);
                strcat(buffer,"</a></h3>");

                strcat(buffer,"<ul>");

                strcat(buffer,"<li>G&eacute;nero:");
                strcat(buffer,movie[i].genero);
                strcat(buffer,"</li>");

                strcat(buffer,"<li>Puntaje:");
                strcat(buffer,movie[i].puntaje);
                strcat(buffer,"</li>");

                strcat(buffer,"<li>Duracion:");
                strcat(buffer,movie[i].duracion);
                strcat(buffer," min</li>");

                strcat(buffer,"</ul>");

                strcat(buffer,"<p>");
                strcat(buffer,movie[i].descripcion);
                strcat(buffer,"</p>");
                strcat(buffer,"</article>");
            }
        }
	    strcat(buffer,"</div></div><script src='js/jquery-1.11.3.min.js'></script><script src='js/bootstrap.min.js'></script><script src='js/ie10-viewport-bug-workaround.js'></script><script src='js/holder.min.js'></script></body></html>");



	    pagina = fopen("index.html","w");

	    fprintf(pagina,buffer);

		fclose(pagina);
		printf("\nPagina creada satisfactoriamente!\n");
        system("pause");
		system("cls");


}

void eliminarMovie(EMovie *movie)
{
	int aux;
	char s;
	int j;
	int i;
	int contador=0;
	printf("\nListado de peliculas:\n");
	for (j = 0; j < TAM; ++j)
	{
		if ((movie+j)->estado==1)
		{
			printf("%d -- %s\n",(movie+j)->id,(movie+j)->titulo);
			contador++;
		}
	}
    if (contador>0)
    {
	    printf("\nColoque el id de la pelicula a eliminar:\n");
	    scanf("%d",&aux);
    }
    else
    {
   		printf("\nNo hay datos para mostrar!!!\n");
   		system("pause");
		system("cls");
    }

	for (i = 0; i < TAM; ++i)
		{

			if (aux==(movie+i)->id && (movie+i)->estado==1)
			{
				printf("Estas a punto de eliminar %s\n",(movie+i)->titulo);
				printf("S/N?\n");
				fflush(stdin);
				s= tolower(getche());
				if (s=='s')
				{
					(movie+i)->estado=0;
					printf("\nBorrado Exitosamente\n");
					system("pause");
					system("cls");
					break;
				}
				else
				{
					printf("cancelado por el usuario\n");
					system("pause");
					system("cls");
					break;
				}
			}

		}
}

void editMovie(EMovie *movie)
{
	int aux;
	int opcion;
	char s;
	int j;
	int i;
	int contador=0;
	printf("\nListado de peliculas:\n");
	for (j = 0; j < TAM; ++j)
	{
		if ((movie+j)->estado==1)
		{
			printf("%d -- %s\n",(movie+j)->id,(movie+j)->titulo);
			contador++;
		}
	}
    if (contador>0)
    {
	    printf("\nColoque el id de la pelicula a modificar:\n");
	    scanf("%d",&aux);
    }
    else
    {
   		printf("\nNo hay datos para mostrar!!!\n");
   		system("pause");
		system("cls");
    }
	for (i = 0; i < TAM; ++i)
	{

		if (aux==(movie+i)->id && (movie+i)->estado==1)
		{
			printf("Estas a punto de modificar los datos de %s\n",(movie+i)->titulo);
			printf("S/N?\n");
			fflush(stdin);
			s= tolower(getche());
			if (s=='s')
			{
				printf("\nSeleccione segun corresponda:\n");
				printf("1- Modificar Titulo\n");
    			printf("2- Modificar LINK IMG\n");
    			printf("3- Modificar Genero\n");
    			printf("4- Modificar Puntaje\n");
    			printf("5- Modificar Duracion\n");
    			printf("6- Modificar Descripcion\n");
    			fflush(stdin);
    			scanf("%d",&opcion);
				switch(opcion)
    			{
    				case 1:
    				printf("\nIngrese Nuevo Titulo: ");
            		fflush(stdin);
            		gets((movie+i)->titulo);
    				break;
    				case 2:
    				printf("Ingrese Nueva URL img Pelicula: ");
            		fflush(stdin);
            		gets((movie+i)->linkImagen);
    				break;
    				case 3:
    				printf("\nIngrese Nuevo Genero: ");
            		fflush(stdin);
            		gets((movie+i)->genero);
    				break;
    				case 4:
    				printf("\nIngrese Nuevo Puntaje(1-10)");
            		fflush(stdin);
            		gets((movie+i)->puntaje);
    				break;
    				case 5:
    				printf("\nIngrese Nueva Duracion: ");
            		fflush(stdin);
            		gets((movie+i)->descripcion);
    				break;
    				case 6:
    				printf("\nIngrese Nueva Descripcion: ");
            		fflush(stdin);
            		gets((movie+i)->descripcion);
    				break;
    				default:
                    printf("\nNO ES UNA OPCION VALIDA");


    			}
				system("pause");
				system("cls");
				break;
			}
			else
			{
				printf("cancelado por el usuario\n");
				system("pause");
				system("cls");
				break;
			}
		}

	}

}

int cargarDesdeArchivo(EMovie *x)
{
	int flag = 0;
	FILE *f;

	f=fopen("bin.dat", "rb");
	if(f==NULL)
	{
		f= fopen("bin.dat", "wb");
		if(f==NULL)
		{
			return 1;
		}

		flag=1;

	}

	if(flag ==0)
	{
	fread(x,sizeof(EMovie),TAM,f);
    }

	fclose(f);
	return 0;

}
int guardarEnArchivo(EMovie * x)
{

	FILE *f;

		f=fopen("bin.dat","wb");
		if(f == NULL)
		{
			return 1;
		}

	fwrite(x,sizeof(EMovie),TAM,f);

	fclose(f);

	return 0;
}

