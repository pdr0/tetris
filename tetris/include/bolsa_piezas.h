/**
  * @file bolsa_piezas.h
  *
  * Ofrece un contenedor de piezas para el juego.
  * 
  *
  */

/***********************************/
#ifndef BOLSA__PIEZAS__H__
#define BOLSA__PIEZAS__H__
/***********************************/

#include "vpieza.h"

class bolsa_piezas{
 public:
 /**
  * @brief Costructor por defecto.
  */
bolsa_piezas();

/**
  * @brief Constructor con parámetros.
  * @param n Número de piezas.
  * @pre  @a n debe ser mayor que 0.
  */
bolsa_piezas(int n);

/**
  * @brief Destrucotr
  */
~bolsa_piezas();

/**
  * @brief Constructor de copias
  * @param b Bolsa de donde se realiza la copia.
  * @return Copia del objeto.
  */
bolsa_piezas(const bolsa_piezas &b);

/**
  * @brief Sobrecarga del operador =.
  * @param b Bolsa de copias de donde se realiza la copia.
  * @return Una copia del objeto mediante el operador.
  */
bolsa_piezas& operator=(const bolsa_piezas &b);

/**
  * @brief Obtiene una pieza de la bolsa según posición.
  * @param i Posción desde donde se obitiene la pieza.
  * @pre  @a i Debe ser positivo.
  * @return La pieza según posición.
  */
pieza Pop(int i)const;

/**
  * @brief Introduce una pieza en la bolsa de piezas, redimensionando el vector de piezas de manera automática debido a que se incluye la clase vpieza.
  * @param p es la pieza a introducir en la bolsa.
  * @pre  @a p debe estar inicializada y la bolsa también.
  */
void Push(const pieza p);

/**
  * @brief Escribe por la salida estándar la bolsa de piezas.
  * @pre  @a bolsa_piezas debe contener alguna pieza o inicializada.
  */
void Escribir()const;

/**
  * @brief Obtiene el tamaño de la bolsa de piezas.
  * @return El tamaño de la bolsa de piezas.
  */
int Tam()const;

/**
  * @brief Obtiene una pieza aleatoria de la bolsa de piezas.
  * @return La pieza según posición en la bolsa de piezas, semilla y número de piezas.
  */
pieza Aleatoria()const;


 private:
	vpieza v;
	int n;
};
 #endif
