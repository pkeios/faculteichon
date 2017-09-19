#include <stdlib.h>
#include "funciones.h"
void initEstado(EPersona lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        lista[i].estado = 0;
        lista[i].edad = -1;
    }
}
/*void cargarPersona(EPersona lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==0)
        {
            printf("Ingrese Nombre: ");
            fflush(stdin);
            gets(lista[i].nombre);
            printf("Ingrese Edad: ");
            scanf("%d", &lista[i].edad);
            printf("Ingrese DNI: ");
            scanf("%d", &lista[i].dni);
            lista[i].estado = 1;
            break;
        }
    }
    system("pause");
    system("cls");
}*/
void inicializarPersona(EPersona lista[], int tam)
{
    char nombre[][50]= {"Milena","Pablo","Ester","Lucio","Felix","Javier","Beatriz","Mercedes","Ramona","Ramon","Eustaquio","Juan","Jaime","Bernardo","Jazmin","Nicolas","Graciela","Lucas","Emiliano","Alejandro"};
    int edad[]= {3,25,43,55,43,3,29,32,27,23,33,22,60,58,13,2,26,25,10,41};
    int dni[]= {36705277,36705278,36705279,6784510,36685423,38705159,21705123,16418270,14705220,22697279,20555277,12455278,18705222,6705278,36705279,78705277,22705278,18735279,31745278,20705234};
    int estado[]= {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int i;
    for(i=0; i<tam; i++)
    {
        strcpy(lista[i].nombre,nombre[i]);
        lista[i].edad = edad[i];
        lista[i].dni = dni[i];
        lista[i].estado = estado[i];
    }
    system("pause");
    system("cls");
}
void mostrarPersona(EPersona lista[], int tam)
{
    int i;
    int j;
    EPersona auxPersona;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==1)
        {



    for(i=0; i<tam-1; i++)
    {

        for(j=i+1; j<tam; j++)
        {

            if(stricmp(lista[i].nombre, lista[j].nombre)>0)
            {
                auxPersona=lista[i];
                lista[i]=lista[j];
                lista[j]=auxPersona;

            }
        }
        printf("%s---%d---%d\n", lista[i].nombre,lista[i].edad,lista[i].dni);
    }

        }

    }
    system("pause");
    system("cls");
}

void eliminarPersona(EPersona lista[], int tam)
{
    int i;
    int aux;
    char aux2[10];
    printf("\n Ingrese DNI de la persona a eliminar: ");
    scanf("%d",&aux);
    for(i=0; i<tam; i++)
    {
        if(lista[i].dni == aux && lista[i].estado==1)
        {
            printf("Persona encontrada:\n\n");
            printf("%s---%d---%d\n\n\n\n", lista[i].nombre,lista[i].edad,lista[i].dni);
            printf("estas seguro que quiere eliminarla?: ");
            fflush(stdin);
            gets(aux2);
            if(strcmp(aux2,"s")==0)
            {
                lista[i].estado=0;
                printf("PERSONA ELIMINADA SATISFACTORIAMENTE!\n");
                system("pause");
                system("cls");
                break;
            }


            else
            {
                printf("CANCELADO POR EL USUARIO!\n");
                system("pause");
                system("cls");
                break;

            }
        }
        else
        {
            printf("PERSONA NO ENCONTRADA\n");
            system("pause");
            system("cls");
            break;

        }

    }
}
void graficoPersona(EPersona lista[], int tam)
{
    int i;
    int j;
    int l;
    int max=0;
    int aux[]= {0,0,0};
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==1)
        {
            if(lista[i].edad>0 && lista[i].edad<18)
            {
                aux[0]++;
            }
            else
            {
                if(lista[i].edad>18 && lista[i].edad<35)
                {
                    aux[1]++;
                }
                else
                {
                    aux[2]++;
                }
            }
        }

    }

    for(i=0; i<3; i++)
    {
        if (aux[i] > max)
        {
            max = aux[i];
        }
    }

    for (l = max; l > 0; l--)
    {
        for (j = 0; j < 3; j++)
        {
            if (aux[j] >= l)
            {
                printf(" *    ");
            }
            else
            {
                printf("      ");
            }
        }
        putchar('\n');

    }
    printf("<18  19-35  >35\n");

    for(i=0; i<3; i++)
    {
        printf("(%d)   ",aux[i]);
    }
    putchar('\n');
    putchar('\n');
    system("pause");
    system("cls");



}
