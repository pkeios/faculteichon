#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

/** \brief Estructura EPERSONA
 *
 * \param nombre se define en char con un maximo de 50 caracteres.
 * \param edad se define tipo de dato a entrar en int para edades.
 * \param dni se define entero para dni.
 * \param estado variable para dar bajas logicas.
 */
typedef struct
{
    char nombre[50];
    int edad;
    int dni;
    int estado;
} EPersona;
/** \brief inicializamos EPersona[] en 0 para poder realizar bajas logicas.
 *
 * \param EPersona estructura creada.
 * \param int tamaño de estructura.
 * \return valores de la estructura en estado = 0.
 *
 */
void initEstado(EPersona[], int);
/** \brief funcion creada para dar altas de personas, permite cargar de uno a la vez.
 *
 * \param EPersona estructura creada.
 * \param int tamaño de estructura.
 *
 */
void cargarPersona(EPersona[], int);
/** \brief carga mediante un vector creado 20 interacciones para facilitar la carga de los datos
 *
 * \param EPersona estructura creada.
 * \param int tamaño de estructura.
 *
 */
void inicializarPersona(EPersona[], int);
/** \brief muestra los datos cargados anteriormente filtrando por estado si estado = 0 no lo muestra, ademas ordena la estructura por nombre de la A - Z.
 *
 * \param EPersona estructura creada.
 * \param int tamaño de estructura.
 *
 */
void mostrarPersona(EPersona[], int);
/** \brief busca en la estructura el DNI de la persona a buscar, y corrobora si el usuario realmente quiere eliminar ese dato, luego de aceptar realiza la baja logica colocando en estado = 0 para poder volver a reutilizar esa posicion.
 *
 * \param EPersona estructura creada.
 * \param int tamaño de estructura.
 *
 */
void eliminarPersona(EPersona[], int);
/** \brief se crea un vector auxiliar el cual realizamos un conteo de <18,  19-35,  >35 el mismo se guarda y luego se imprime recorriendo el vector auxiliar con sus respectivos datos cargados
 *
 * \param EPersona estructura creada.
 * \param int tamaño de estructura.
 *
 */
void graficoPersona(EPersona[], int);
#endif
