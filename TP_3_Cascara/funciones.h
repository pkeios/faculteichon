#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define TAM 10
#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
/** \brief estructura movie
 *
 * \param titulo  char de pelicula.
 * \param id unico y entero de pelicula.
 * \param genero char para completar con lo que corresponda.
 * \param duracion char para completar con lo que corresponda, cabe aclarar que esta en char a proposito.
 * \param descripcion char para completar con descripcion de pelicula.
 * \param puntaje en entero para completar
 * \param link imagen en char para pegar link de imagen de pelicula
 * \param utilizamos un estado para menjar las bajas logicas
*/

typedef struct{
	int id;
    char titulo[100];
    char genero[100];
    char duracion[10];
    char descripcion[10000];
    char puntaje[10];
    char linkImagen[500];
    int estado;
}EMovie;

/** \brief carga de archivo binario
 *
 * \param puntero a estructura EMovie
 *
 */
int cargarDesdeArchivo(EMovie *);
/** \brief funcion que guarda el archivo binario
 *
 * \param puntero a estructura EMovie
 *
 */
int guardarEnArchivo(EMovie *);

/** \brief funcion que agrega nueva pelicula a la lista
 *
 * \param puntero a EMovie*
 *
 */
void agregarPelicula(EMovie*);
/** \brief funcion que lista la lista de peliculas activas
 *
 * \param puntero a EMovie*
 *
 */
void listarMovie(EMovie*);
/** \brief funcion que elimina peliculas activas dando una baja logica
 *
 * \param puntero a EMovie*
 *
 */
void eliminarMovie(EMovie*);
/** \brief generador de pagina html
 *
 * \param puntero a EMovie**
 *
 */
void generarPagina(EMovie*);

#endif
