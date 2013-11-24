/**
  * @file tablero.h
  * @brief Fichero cabecera para la gestión simplificada del tablero.
  *
  * Ofrece una interfaz simple para trabajar con el tablero del juego.
  *
  */


/* ***************************************** */

#ifndef __TABLERO__H__
#define __TABLERO__H__

/* ***************************************** */

#include "matriz.h"
#include "pieza.h"

class tablero{
  private:
	matriz m;
	
  public:

/**
  * @brief Constructor por defecto.
  */
tablero();

/**
  * @brief Constructor con parámetros.
  * @param i Número de filas del tablero.
  * @param j Número de columnas del tablero.
  * @pre Las filas y columnas deben ser valores positivos.
  */
tablero(int f, int c);

/**
  * @brief Destructor.
  */
~tablero();

/**
  * @brief Constructor de copias.
  * @param t Es el tablero original desd donde se realiza la copia.
  * @return Una copia del tablero.
  */
tablero (const tablero &t);

/**
  * @brief Sobrecarga del operador =, que obtiene o iguala dos objetos tableros.
  * @param t Es el tablero original, desde donde se obtiene la copia.
  * @return Una copia del tablero original.
  */
tablero& operator=(const tablero &t);

/**
  * @brief Obtiene información sobre el número de filas del tablero.
  * @return Un entero con el número de filas del tablero.
  */
int FilTablero()const;

/**
  * @brief Obtiene información sobre el número de columnas del tablero.
  * @return Un entero con el número de columnas del tablero.
  */
int ColTablero()const;

/**
  * @brief Inserta en el tablero una pieza desde una posición determinada.
  * @param posi Coordenada de la fila donde empieza a insertar la pieza.
  * @param posj Coordenada de la columna donde empieza a insertar la pieza.
  * @param p Pieza a insertar en el tablero.
  * @pre Las dimensiones de la pieza no puede sobrepasar las dimensiones del tablero desde las coordenadas.
  */
void SetTablero(int posi, int posj, const pieza &p);

/**
  * @brief Inserta en el tablero un valor del tablero
  * @param posi Coordenada de la fila donde empieza a insertar el valor
  * @param posj Coordenada de la columna donde empieza a insertar el valor.
  * @param v valor a poner en el tablero.
  * @pre El tablero debe estar construido previamente.
  */
void Set(int posi, int posj, int v);

/**
  * @brief Devuelve el valor del tablero desde unas coordenadas específicas.
  * @param posi Posición de la fila del tablero.
  * @return posj Posición de la columna del tablero.
  * @return Un entero con el valor de la casilla según coordenadas.
  */
int GetTablero(int posi, int posj)const;

/**
  * @brief Comprueba si encaja una pieza en el tablero; es decir si no hay casillas ocupadas.
  * @param posi Posición de la fila del tablero.
  * @return posj Posición de la columna del tablero.
  * @param p Pieza con la que se comprueba.
  * @pre  Las dimensiones de la pieza no puede sobrepasar las dimensiones del tablero desde las coordenadas.
  * @return Si se puede o no encajar.
  */
bool Encaja(int posi, int posj, const pieza &p)const;

/**
  * @brief Comprueba si hay líneas completas.
  * @return Un entero con el número de fila de la línea que está completa.
  */
int LineaCompleta();

/**
  * @brief Borra las lineas completa, llamando a la función LineaCompleta().
  */
int BorrarLinea();

/**
  *@brief Escribe por la salida estándar el tablero.
  */
void EscribirTablero()const;

/**
  *@brief Lee desde la entrada estándar el tablero.
  */
void LeerTablero();
};
#endif
