/**
  * @file marcador.h
  * @brief Fichero cabecera para la gestión simplificada de la parte gráfica de un marcador.
  *
  * Ofrece una interfaz simple para trabajar con la interfaz gráfica de un marcador.
  *
  */
 
/* ***************************************** */
 
#ifndef __MARCADOR__H__
#define __MARCADOR__H__

/* ***************************************** */

#include <string>
using namespace std;

class marcador{
public:

/**
  * @brief Constructor por defecto.
  */
marcador();

/**
  * @brief Constructor de copias de un marcador.
  * @param m Marcador de donde se obtiene la copia.
  */
marcador(const marcador &m);

/**
  * @brief Destructor por defecto.
  */
~marcador();

/**
  * @brief Constructor con parámetros.
  * @param dir Directorio 
  * @param fil Fila de la posición en la ventana.
  * @param col Columna de la posición en la ventana.
  * @param ancho Ancho del marcador. 
  * @param alto Alto del marcador.
  * @param marco Grosor del marco del marcador.
  * @param R Intensidad del color rojo para el borde del marcador.
  * @param G Intensidad del color verde para el borde del marcador.
  * @param B Intensidad del color azul para el borde del marcador.
  * @param R1 Intensidad del color rojo para el fondo del marcador.
  * @param G1 Intensidad del color verde para el fondo del marcador.
  * @param B1 Intensidad del color azul para el fondo del marcador.
  * @pre Debe estar una ventana previamente creada con dimensiones igual o mayor al tamaño del maracador.
  */
marcador(int fil, int col, int ancho, int alto, int marco,int R,int G,int B,int R1, int G1, int B1);
	marcador& operator=(const marcador &m);
	
/**
  * @brief Da valor a la posición de la fila.
  * @param f Coordenada de la fila.
  */	
void SetFil(int f);

/**
  * @brief Devuelve valor de la posición de la columna.
  * @return Posición de la fila.
  */	
int GetFil()const;

/**
  * @brief Da valor a la posición de la columna.
  * @param c Coordenada de la columna.
  */	
void SetCol(int c);

/**
  * @brief Devuelve la posición de la columna.
  * @return Posición de la columna.
  */	
int GetCol()const;

/**
  * @brief Da valor al ancho en la ventana.
  * @param a Coordenada del ancho.
  */	
void SetAncho(int a);

/**
  * @brief Devuelve el ancho del marcador.
  * @return El ancho del marcador en la ventana.
  */	
int GetAncho()const;

/**
  * @brief Da valor al alto del marcador.
  * @param a Valor del alto del marcador.
  */	
void SetAlto(int a);

/**
  * @brief Devuelve el alto del marcador en la ventana.
  * @return Altura del marcador.
  */	
int GetAlto()const;

/**
  * @brief Da valor al grosor del marco del marcador.
  * @param m Número de grosor del marco del marcador.
  */	
void SetMarco(int m);

/**
  * @brief Devuelve el tamaño del marco del marcador.
  * @return Grosor del marco.
  */	
int GetMarco()const;

/**
  * @brief Da valor a la intensidad del color rojo del borde (RGB).
  * @param r Intensidad comprendida entre 0-255.
  */	
void SetR(int r);

/**
  * @brief Devuelve la intensidad del color rojo del borde según estándar (RGB).
  * @return Intensidad del color rojo del borde.
  */	
int GetR()const;

/**
  * @brief Da valor a la intensidad del color verde del borde (RGB).
  * @param g Intensidad comprendida entre 0-255.
  */	
void SetG(int g);

/**
  * @brief Devuelve la intensidad del color verde del borde según estándar (RGB).
  * @return Intensidad del color verde del borde.
  */	
int GetG()const;

/**
  * @brief Da valor a la intensidad del color azul del borde (RGB).
  * @param b Intensidad comprendida entre 0-255.
  */	
void SetB(int b);

/**
  * @brief Devuelve la intensidad del color azul del borde según estándar (RGB).
  * @return Intensidad del color azul del borde.
  */	
int GetB()const;

/**
  * @brief Da valor a la intensidad del color rojo del fondo (RGB).
  * @param r1 Intensidad comprendida entre 0-255.
  */	
void SetR1(int r1);

/**
  * @brief Devuelve la intensidad del color rojo del fondo según estándar (RGB).
  * @return Intensidad del color rojo del fondo.
  */	
int GetR1()const;

/**
  * @brief Da valor a la intensidad del color verde del fondo (RGB).
  * @param g1 Intensidad comprendida entre 0-255.
  */	
void SetG1(int g1);

/**
  * @brief Devuelve la intensidad del color verde del fondo según estándar (RGB).
  * @return Intensidad del color verde del fondo.
  */	
int GetG1()const;

/**
  * @brief Da valor a la intensidad del color azul del fondo (RGB).
  * @param g1 Intensidad comprendida entre 0-255.
  */	
void SetB1(int g1);

/**
  * @brief Devuelve la intensidad del color azul del fondo según estándar (RGB).
  * @return Intensidad del color azul del fondo.
  */	
int GetB1()const;	

/**
  * @brief Da valores a todas las variables de la interfaz gráfica del marcador desde un flujo.
  */	
void LeerMarcador();

/**
  * @brief Escribe por la salida estándar o flujo los valores de la interfaz gráfica del marcador.
  */	
void EscribirMarcador()const;

/**
  * @brief Pinta el marcador en la ventana.
  * @pre debe existir una ventana gráfica.
  */	
void PintarMarcador()const;

private:
	int fil;
	int col;
	int ancho;
	int alto;
	int marco;
	int R;
	int G;
	int B;
	int R1;
	int G1;
	int B1;
};
#endif
