/**
  * @file cola_piezas.h
  * @brief La cola de piezas del programa TETRIS.
  *
  * Ofrece una cola de piezas de donde se va tomando piezas para jugar.
  */


/* ***************************************** */
#ifndef COLA__PIEZAS__H__
#define COLA__PIEZAS__H__
/* ***************************************** */

#include "vpieza.h"

class cola_piezas{
 public:
 
 /**
  * @brief Constructor por defecto.
  */
cola_piezas();

/**
  * @brief Constructor con parámetros.
  * @param n Número de piezas en la cola.
  * @pre @n Debe ser mayor que 0.
  */
cola_piezas(int n);

/**
  * @brief Constructor de copias.
  * @param c es una cola de piezas desde donde se realiza la copia.
  * @return Una copia de una cola de piezas, aunque esto es sólo para indicar al compilador como debe realiza las copias.
  */
cola_piezas(const cola_piezas &c);

/**
  * @brief Sobrecarga del operador igual, para realizar copias de objetos.
  * @param c Es la cola de piezas desde donde se realiza la copia.
  * @return Una copia desde la cola de piezas.
  */
cola_piezas& operator=(const cola_piezas &c);

/**
  * @brief Obtiene una piezas de la cola de piezas y a su vez Regenera la cola, moviendo las piezas una posición para dar lugar a una nueva pieza que se obtiene de manera externa desde la bolsa de piezas.
  * @return Una pieza que se obtiene de la primera posición.
  */
pieza Pop();

/**
  * @brief Introduce una pieza en la última posición de la cola.
    */
void Push(const pieza p);

/**
  * @brief Escribe por la salida estándar la cola de piezas.
  * @pre La cola debe estar inicializada o declarada. 
  */
void Escribir()const;

/**
  * @brief Devuelve el tamaño de la cola de piezas.
  * @return Un entero con el tamaño de la cola.
  */
int Tam()const;

/**
  * @brief Introduce una pieza en la última posición sin redimensionar el vector.
  * @param p es la pieza a introducir en la cola de piezas.
  */
void PushTop(const pieza p);

pieza Get(int x)const;

 private:
	vpieza v;
	int n;
};
 #endif
