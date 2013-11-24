/**
  * @file vpieza.h
  * @brief Fichero cabecera para la gestión simplificada de un vector de piezas.
  *
  * Ofrece una interfaz simple para manejar un contendeor de piezas.
  *
  */


/* ***************************************** */

#ifndef __VPIEZA__H__
#define __VPIEZA__H__

/* ***************************************** */
#include "pieza.h"

class vpieza{
 public:
/**
  * @brief Constructor por defecto.
  */
vpieza();

/**
  * @brief Constructor con parámetros.
  * @param n tamaño del vector de piezas.
  * @pre @n debe ser mayor que 0.
  */
vpieza(int n);

/**
  * @brief Destructor.
  */
 ~vpieza();
 
 /**
  * @brief Constructor de copias.
  * @param v Vector de piezas original desde donde se realiza la copia.
  * @return Un vector de piezas con los mismos datos que el origianl.
  */
vpieza(const vpieza &v);

/**
  * @brief Sobrecarga del operador igual.Para realizar copias de vectores de piezas.
  * @param v Vector de piezas original desde donde se obtiene la copia.
  * @return Una copia del vector de piezas.
  */
vpieza& operator=(const vpieza &v);

/**
  * @brief Obtiene una pieza del vector de piezas, desde una posición determinada.
  * @param i posición en el vector para devolver la pieza.
  * @return Una pieza desde la posición i.
  * @pre @i Debe ser positivo y no igual o mayor que el tamaño del vector.
  */
pieza Get(int i)const;

/**
  * @brief Introduce una pieza en el vector de piezas desde una posición determinada.
  * @param i Posición del vector donde se introduce la pieza.
  * @param p Pieza a introducir en el vector.
  * @pre @i Debe ser positivo y no igual o mayor que el tamaño del vector.
  */
void Set(int i,const pieza p);

/**
  * @brief Introduce una pieza en el vector de piezas, en la útlima posición, redimensionando el vector.
  * @param p Pieza a introducir en el vector.
  */
void Push(const pieza &p);

/**
  * @brief Escribe por la salida estándar las piezas del vector de piezas.
  */
void Escribir()const;

/**
  * @brief Devuelve el tamaño del vector de piezas.
  * @return Un entero con el tamaño del vector de piezas.
  */
int Tam()const;

 private:
	pieza *v;
	int n;
};
 #endif
