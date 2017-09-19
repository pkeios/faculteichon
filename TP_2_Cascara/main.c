#include "funciones.h"
#define TAM 20

int main()
{
    EPersona listaPersona[TAM];//creamos estructura con el tamaño definido por la constante TAM = 20.
    char seguir='s';
    int opcion=0;
    initEstado(listaPersona, TAM);//inicializamos el estado de la estructura en 0
    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            /*cargarPersona(listaPersona, TAM); deshabilitamos la opcion de cargar manual para cargar los datos por la funcion inicializarPersona*/
            inicializarPersona(listaPersona, TAM);//esta funcion carga un vector de 20 personas con sus respectivos datos.
            break;
        case 2:
            eliminarPersona(listaPersona, TAM);//realiza la eliminacion logica del dato buscado en la estructura.
            break;
        case 3:
            mostrarPersona(listaPersona, TAM);//muestra los datos de la estructura y los ordena de A-Z
            break;
        case 4:
            graficoPersona(listaPersona, TAM);//imprime grafico de edades <18,  19-35,  >35
            break;
        case 5:
            seguir = 'n';
            break;
        }
    }

    return 0;
}
