/**
  * @file interfaz.h
  * @brief Fichero cabecera para la gestión simplificada de la parte gráfica del juego tetris.
  *
  * Ofrece una interfaz simple para manejar la interfaz gráfica del juego tetris.
  *
  */


/* ***************************************** */

#ifndef __INTERFAZ__H__
#define __INTERFAZ__H__

/* ***************************************** */

#include "imagen.h"
#include "pieza.h"
#include "tablero.h"
#include "cola_piezas.h"
#include "marcador.h"
#include "graficos.h"
#include <string>

using namespace graficos;

class interfaz{
 public:
 
/**
  * @brief Constructor por defecto.
  */
interfaz();

/**
  * @brief Destructor por defecto.
  */
~interfaz();

 /**
  * @brief Constructor de copias.
  * @param i Interfaz desde donde se realiza la copia.
  * @return Una interfaz gráfica con los mismos datos que el origianl.
  */
interfaz(const interfaz &i);

 /**
  * @brief sobrecarga del operador =.
  * @param itz Interfaz gráfica desde donde se realiza la igualación o copia.
  * @return Una interfaz gráfica con los mismos datos que el origianl.
  */
interfaz& operator=(const interfaz &itz);

 /**
  * @brief Da valor a la semilla para que la cola de piezas sea siempre diferente en cada partida.
  * @param x valor de la semilla; Si es 0, coge el valor del reloj del sistema.
  */
void SetSemilla(int x);

 /**
  * @brief Devuelve el valor de la semilla.
  * @return Valor de la semilla.
  */
int GetSemilla();

 /**
  * @brief Da valor al tiempo de bajada de las fichas.
  * @param x Valor en milisegundos.
  */
void SetEspera(int x);

 /**
  * @brief Devuelve el valor de la velocidad de bajada de las fichas en milisegundos.
  * @return Valor de la velocidad de bajada.
  */
int GetEspera();

 /**
  * @brief Da valor al número de líneas para que pase de nivel.
  * @param x Número de líneas.
  * @ pre @x Debe ser mayor que 0.
  */
void SetNumLineas(int x);

 /**
  * @brief Devuelve el número de líneas para aumentar de nivel.
  * @return Número de líneas.
  */
int GetNumLineas();

 /**
  * @brief Da valor al número de piezas de la cola de piezas.
  * @param x Número de piezas.
  */
void SetNumPzsCol(int x);

 /**
  * @brief Devuelve el número de piezas de la cola.
  * @return Número de piezas de la cola de piezas.
  */
int GetNumPzsCol();

 /**
  * @brief Da valor al número de imágenes que se van a usar.
  * @param x Número de imágenes.
  */
void SetNumImgs(int x);

 /**
  * @brief Devuelve el número de imágenes.
  * @return Número de imágenes.
  */
int GetNumImgs();

 /**
  * @brief Da valor al directorio de donde se van a coger las imágenes.
  * @param dir Directorio de donde se encuentran las imágenes.
  */
void SetDirImgs(string dir);

 /**
  * @brief Devuelve el directorio donde se encuentran las imágenes.
  * @return Directorio con las imágenes.
  */
string GetDirImgs();

 /**
  * @brief Carga una imagen desde el directorio de imágenes y con la imagen @s.
  * @param @pos Posición en el vactor de imágenes.
  * @param @s Nombre de la imagen.
  */
void SetImgs(int pos, string s);

 /**
  * @brief Devuelve una imagen del vector de imágenes.
  * @param @pos Posición en el vector
  * @return La imagen del vector según posición..
  * @pre EL vector a de estar construido y las imágenes cargadas.
  */
imagen GetImgs(int pos)const;

///////////////*********************Tablero********************

 /**
  * @brief Da valor a la coordenada de la fila en la ventana del tablero.
  * @param @x Fila en la ventana.
  */
void SetFilT(int x);

 /**
  * @brief Devuelve el valor de la fila en la ventana del tablero.
  * @param @x Fila en la ventana.
  */
int GetFilT();

 /**
  * @brief Da valor a la coordenada de la columna en la ventana del tablero.
  * @param @x Columna en la ventana.
  */
void SetColT(int x);

 /**
  * @brief Devuelve el valor de la columna en la ventana del tablero.
  * @param @x Columna en la ventana.
  */
int GetColT();

 /**
  * @brief Da valor al ancho del tablero o acumulador.
  * @param @x Ancho del tablero.
  */
void SetAnchoT(int x);

 /**
  * @brief Devuelve el valor del ancho del tablero.
  * @return El ancho del tablero.
  */
int GetAnchoT();

 /**
  * @brief Da valor al alto del tablero o el acumulador.
  * @param @x Alto del tablero.
  */
void SetAltoT(int x);

 /**
  * @brief Devuelve el valor del alto del tablero.
  * @return El alto del tablero.
  */
int GetAltoT();

 /**
  * @brief Da Valor al marco del tablero o el acumulador.
  * @param @x Marco del tablero.
  */
void SetMarcoT(int x);

 /**
  * @brief Devuelve el valor del marco del tablero.
  * @return El marco del tablero.
  */
int GetMarcoT();

 /**
  * @brief Da Valor a la intensidad del rojo del borde del tablero o el acumulador.
  * @param @x Intensidad del color rojo del borde.
  */
void SetRBordeT(int x);

 /**
  * @brief Devuelve el valor del color rojo del borde del tablero.
  * @return La intensidad del color rojo del borde.
  */
int GetRBordeT();

 /**
  * @brief Da Valor a la intensidad del verde del borde del tablero o el acumulador.
  * @param @x Intensidad del color verde del borde.
  */
void SetGBordeT(int x);

 /**
  * @brief Devuelve el valor del color rojo del borde del tablero.
  * @return La intensidad del color rojo del borde.
  */
int GetGBordeT();

 /**
  * @brief Da Valor a la intensidad del azul del borde del tablero o el acumulador.
  * @param @x Intensidad del color azul del borde.
  */
void SetBBordeT(int x);

 /**
  * @brief Devuelve el valor del color verde del borde del tablero.
  * @return La intensidad del color verde del borde.
  */
int GetBBordeT();

 /**
  * @brief Da Valor a la intensidad del rojo del fondo del tablero o el acumulador.
  * @param @x Intensidad del color rojo del fondo.
  */
void SetRFondoT(int x);

 /**
  * @brief Devuelve el valor del color rojo del fondo del tablero.
  * @return La intensidad del color rojo del fondo.
  */
int GetRFondoT();

 /**
  * @brief Da Valor a la intensidad del verde del fondo del tablero o el acumulador.
  * @param @x Intensidad del color verde del fondo.
  */
void SetGFondoT(int x);

 /**
  * @brief Devuelve el valor del color verde del fondo del tablero.
  * @return La intensidad del color verde del fondo.
  */
int GetGFondoT();

 /**
  * @brief Da Valor a la intensidad del azul del fondo del tablero o el acumulador.
  * @param @x Intensidad del color azul del fondo.
  */
void SetBFondoT(int x);

 /**
  * @brief Devuelve el valor del color azul del fondo del tablero.
  * @return La intensidad del color azul del fondo.
  */
int GetBFondoT();

//*******************************Configuración cola*********************

 /**
  * @brief Da valor a la coordenada de la fila en la ventana de la cola de piezas.
  * @param @x Fila en la ventana.
  */
void SetFilC(int x);

 /**
  * @brief Devuelve el valor de la fila en la ventana de la cola de piezas.
  * @param @x Fila en la ventana.
  */
int GetFilC();

 /**
  * @brief Da valor a la coordenada de la columna en la ventana de la cola de piezas.
  * @param @x Columna en la ventana.
  */
void SetColC(int x);

 /**
  * @brief Devuelve el valor de la columna en la ventana de la cola de piezas.
  * @param @x Columna en la ventana.
  */
int GetColC();

 /**
  * @brief Da valor al ancho de la cola de piezas.
  * @param @x Ancho de la cola de piezas.
  */
void SetAnchoC(int x);

 /**
  * @brief Devuelve el valor del ancho de la cola de piezas.
  * @return El ancho de la cola de piezas.
  */
int GetAnchoC();


 /**
  * @brief Da valor al alto de la cola de piezas.
  * @param @x Alto de la cola de piezas.
  */
void SetAltoC(int x);

 /**
  * @brief Devuelve el valor del alto de la cola de piezas.
  * @return El alto de la cola de piezas.
  */
int GetAltoC();

 /**
  * @brief Da Valor al marco de la cola de piezas.
  * @param @x Marco de la cola de piezas.
  */
void SetMarcoC(int x);

 /**
  * @brief Devuelve el valor del marco de la cola de piezas.
  * @return El marco de la cola de piezas.
  */
int GetMarcoC();

 /**
  * @brief Da Valor a la intensidad del rojo del borde de la cola de piezas.
  * @param @x Intensidad del color rojo del borde.
  */
void SetRBordeC(int x);

 /**
  * @brief Devuelve el valor del color rojo del borde de la cola de piezas.
  * @return La intensidad del color rojo del borde.
  */
int GetRBordeC();

 /**
  * brief Da Valor a la intensidad del verde del borde de la cola de piezas.
  * @param @x Intensidad del color verde del borde.
  */
void SetGBordeC(int x);

 /**
  * @brief Devuelve el valor del color verde del borde de la cola de piezas.
  * @return La intensidad del color verde del borde.
  */
int GetGBordeC();

/**
  * @brief Da Valor a la intensidad del azul del borde de la cola de piezas.
  * @param @x Intensidad del color azul del borde.
  */
void SetBBordeC(int x);

 /**
  * @brief Devuelve el valor del color azul del borde del tablero.
  * @return La intensidad del color azul del borde.
  */
int GetBBordeC();

 /**
  * @brief Da Valor a la intensidad del rojo del fondo de la cola de piezas.
  * @param @x Intensidad del color rojo del fondo.
  */
void SetRFondoC(int x);

 /**
  * @brief Devuelve el valor del color rojo del fondo de la cola de piezas.
  * @return La intensidad del color rojo del fondo.
  */
int GetRFondoC();

 /**
  * @brief Da Valor a la intensidad del verde del fondo de la cola de piezas.
  * @param @x Intensidad del color verde del fondo.
  */
void SetGFondoC(int x);

 /**
  * @brief Devuelve el valor del color verde del fondo de la cola de piezas.
  * @return La intensidad del color verde del fondo.
  */
int GetGFondoC();

 /**
  * @brief Da Valor a la intensidad del azul del fondo de la cola de piezas.
  * @param @x Intensidad del color azul del fondo.
  */
void SetBFondoC(int x);

 /**
  * @brief Devuelve el valor del color azul del fondo de la cola de piezas.
  * @return La intensidad del color azul del fondo.
  */
int GetBFondoC();

//********************************** Marcador Titulo **************************

 /**
  * @brief Da valor a la frase que aparece en el marcador de titulo.
  * @param x Frase a mostrar.
  */
void SetTitulo(string x);

 /**
  * @brief Devuelve el valor de la frase del titulo del marcador.
  * @return La frase en si.
  */
string GetTituloT();

 /**
  * @brief Da valor al tipo de letra del marcador.
  * @param x Tipo de letra.
  */
void SetTLetraT(string x);

 /**
  * @brief Devuelve el valor del tipo de letra del titulo del marcador.
  * @return el tipo de letra.
  */
string GetTLetraT();

 /**
  * @brief Da valor al tamaño del título de la letra.
  * @param x Tamaño de la letra.
  */
void SetTamTitulo(int x);

 /**
  * @brief Devuelve el valor el tamaño del tipo de letra del titulo.
  * @return Tamaño del tipo de letra.
  */
int GetTamTitulo();

 /**
  * @brief Da valor al estilo de la letra.
  * @param x Estilo de la letra.
  * @pre Valores entre 0 - 4.
  */
void SetEstiloTitulo(int x);

 /**
  * @brief Devuelve el valor del estilo del tipo de letra.
  * @return Estilo del tipo de letra.
  */
int GetEstiloTitulo();

 /**
  * @brief Da valor a la intensidad del color rojo del tipo de letra.
  * @param x Intensidad del color rojo.
  */
void SetRTitulo(int x);

 /**
  * @brief Devuelve el valor de la intensidad del color rojo de la letra.
  * @return Intensidad del color rojo.
  */
int GetRTitulo();

 /**
  * @brief Da valor a la intensidad del color verde del tipo de letra.
  * @param x Intensidad del color verde.
  */
void SetGTitulo(int x);

 /**
  * @brief Devuelve el valor de la intensidad del color verde de la letra.
  * @return Intensidad del color verde.
  */
int GetGTitulo();

 /**
  * @brief Da valor a la intensidad del color azul del tipo de letra.
  * @param x Intensidad del color azul.
  */
void SetBTitulo(int x);

 /**
  * @brief Devuelve el valor de la intensidad del color azul de la letra.
  * @return Intensidad del color azul.
  */
int GetBTitulo();


//////////////////  Las siguientes funciones son iguales que la del marcador de titulo.
//Marcador Nivel

void SetTLetraN(string x);
string GetTLetraN();
void SetTamN(int x);
int GetTamN();
void SetEstiloN(int x);
int GetEstiloN();
void SetRNivel(int x);
int GetRNivel();
void SetGNivel(int x);
int GetGNivel();
void SetBNivel(int x);
int GetBNivel();


//Marcador Lineas
void SetTLetraL(string x);
string GetTLetraL();
void SetTamL(int x);
int GetTamL();
void SetEstiloL(int x);
int GetEstiloL();
void SetRLineas(int x);
int GetRLineas();
void SetGLineas(int x);
int GetGLineas();
void SetBLineas(int x);
int GetBLineas();


//Marcador Piezas

void SetTLetraP(string x);
string GetTLetraP();
void SetTamP(int x);
int GetTamP();
void SetEstiloP(int x);
int GetEstiloP();
void SetRPiezas(int x);
int GetRPiezas();
void SetGPiezas(int x);
int GetGPiezas();
void SetBPiezas(int x);
int GetBPiezas();

//Marcador Estado

void SetTLetraE(string x);
string GetTLetraE();
void SetTamE(int x);
int GetTamE();
void SetEstiloE(int x);
int GetEstiloE();
void SetREstado(int x);
int GetREstado();
void SetGEstado(int x);
int GetGEstado();
void SetBEstado(int x);
int GetBEstado();

/////////////////////////////




//void Escribir();

 /**
  * @brief Dibuja en la ventana gráfica la pieza según coordenadas @fil @col.
  * @param @fil fila de donde se dibuja la pieza.
  * @param @col columna de donde se dibuja la pieza.
  * @param p Pieza en si.
  */
void Pieza(int fil, int col, const pieza &p);

 /**
  * @brief Dibuja en la ventana gráfica el tablero.
  * @param @t Tablero en si.
  */
void Tablero(const tablero &t);

 /**
  * @brief Dibuja en la ventana gráfica el marcador de título.
  * @param @t Marcador en si.
  */
void Titulo(const marcador &m);

 /**
  * @brief Dibuja en la ventana gráfica el marcador de nivel.
  * @param @t Marcador en si.
  */
void Nivel(const marcador &m, string s1);

 /**
  * @brief Dibuja en la ventana gráfica el marcador de lineas.
  * @param @t Marcador en si.
  */
void Lineas(const marcador &m, string s1);

 /**
  * @brief Dibuja en la ventana gráfica el marcador de piezas.
  * @param @t Marcador en si.
  */
void Piezas(const marcador &m, string s1);

 /**
  * @brief Dibuja en la ventana gráfica el marcador de estado.
  * @param @t Marcador en si.
  */
void Estado(const marcador &m, string s1);

 /**
  * @brief Dibuja en la ventana gráfica la cola de piezas.
  * @param @t La cola de piezas en si.
  */
void Cola(const cola_piezas &c);
 private:
	int semilla;
	int espera;
	int num_lineas;
	int num_piezas_cola;
	int num_imagenes;
	string imagenes;
	imagen imgs[7];
//Tablero
	int fil_t;
	int col_t;
	int ancho_t;
	int alto_t;
	int marco_t;
	int Rborde_t;
	int Gborde_t;
	int Bborde_t;
	int Rfondo_t;
	int Gfondo_t;
	int Bfondo_t;
//Configuración cola
	int fil_c;
	int col_c;
	int ancho_c;
	int alto_c;
	int marco_c;
	int Rborde_c;
	int Gborde_c;
	int Bborde_c;
	int Rfondo_c;
	int Gfondo_c;
	int Bfondo_c;
//Marcador Titulo
	string titulo;
	string TLetraT;
	int tam_titulo;
	int estilo_titulo;
	int Rletra_titulo;
	int Gletra_titulo;
	int Bletra_titulo;

//Marcador Nivel
	string nivel;
	int tam_niv;
	int estilo_niv;
	int Rletra_niv;
	int Gletra_niv;
	int Bletra_niv;


//Marcador Lineas
	string lineas;
	int tam_lin;
	int estilo_lin;
	int Rletra_lin;
	int Gletra_lin;
	int Bletra_lin;

//Marcador Piezas

	string piezas;
	int tam_pzs;
	int estilo_pzs;
	int Rletra_pzs;
	int Gletra_pzs;
	int Bletra_pzs;

//Marcador Estado

	string e;
	int tam_e;
	int estilo_e;
	int Rletra_e;
	int Gletra_e;
	int Bletra_e;


	
};
 #endif
