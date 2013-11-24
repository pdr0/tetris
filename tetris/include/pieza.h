/**
  * @file pieza.h
  * @brief Fichero cabecera para la gestión simplificada de las piezas.
  *
  * Ofrece una interfaz simple para trabajar con las piezas.
  *
  */


/* ***************************************** */

#ifndef __PIEZA__H__
#define __PIEZA__H__

/* ***************************************** */

#include "matriz.h"
#include "imagen.h"

class pieza{
 public:

/**
  * @brief Constructor por defecto.
  */
 pieza();
 
/**
  * @brief Constructor con parámetros.
  * @param f filas de la pieza.
  * @param c columnas de la pieza.
  */
pieza(int f, int c);

/**
  * @brief Destructor.
  */
 ~pieza();
 
/**
  * @brief Constructor de copias; Indica la manera de como se realizan las copias al compilador.
  * @param p Pieza desde donde se obtiene la copia.
  * @return Una pieza con la copia realizada desde la pieza original. 
  */
 pieza(const pieza &p);
 
 /**
  * @brief Rota la pieza a la derecha.
*/
void RotarPiezaDer();

/**
  * @brief Rota la pieza a la izquierda.
  */
void RotarPiezaIzq();

/**
  * @brief Devuelve el tamaño de las filas de la pieza.
  * @return Un entero con el valor de las filas de la pieza.
  */
int FilPieza()const;

/**
  * @brief Devuelve el tamaño de las columnas de la pieza.
  * @return Un entero con el tamaño de las columnas de la pieza.
  */
int ColPieza()const; 

/**
  * @brief Obtiene desde la entrada estándar los valores para la pieza.
  */
void LeerPieza();

/**
  * @brief Escribe por la salida estándar los datos de la pieza.
  */
void EscribirPieza()const;

/**
  * @brief Sobrecarga del operador =, obteniendo una copia de una pieza a otra.
  * @param p Pieza desde donde se obtiene la copia.
  * @return Una pieza con la copia de la pieza original.
  */
pieza& operator=(const pieza &p);

/**
  * @brief Obtiene el valor correspondiente a una pieza según posición determinada.
  * @param i Fila de la pieza (como coordenada).
  * @param j Columna de la pieza (como coordenada).
  * @return El valor de la pieza según coordenadas.
  */
int Get(int i, int j)const;

/**
  * @brief Devuelve la matriz de la pieza en si.
  * @return Una matriz con los valores de la pieza.
  */
matriz GetPieza()const;

/**
  * @brief Dar valores a la pieza según coordenadas por parámetro.
  * @param i Fila de la pieza (como coordenada).
  * @param j Columna de la pieza (como coordenada).
  * @param v Entero como valor para introducir en la pieza.
  * @pre Las coordenadas no pueden ser negativas ni mayores que las dimensiones de la pieza.
  */
void Set(int i, int j, int v);
 private:
	matriz p;
	int f;
	int c;
};
 #endif
