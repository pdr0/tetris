/**
  * @file imagen.h
  * @brief Fichero cabecera para la gestión de imágenes.
  *
  * Ofrece una interfaz simple para trabajar con imágenes.
  */


/* ***************************************** */
#ifndef __IMAGEN__H__
#define __IMAGEN__H__
/* ***************************************** */

#include "graficos.h"
using namespace graficos;

class imagen {
public:
/**
  * @brief Constructor por defecto.
  */
imagen();

/**
  * @brief Constructor con parámetros.
  * @param fich Es la ruta con el fichero o el fichero de la imagen a cargar.
  * @pre La imagen o ruta debe ser correcta.
  */
imagen(const char *fich);

/**
  * @brief Destructor.
  */
~imagen();

/**
  * @brief Constructor de copias para indicar al compilador como se realiza la copia del objeto.
  * @param i imagen desde donde se obtiene la copia.
  * @pre La imagen ha sido previamente cargada.
  */
imagen(const imagen &i);

/**
  * @brief Información de la altura de la imagen en píxeles.
  * @pre La imagen ha sido previamente creada.
  * @return Altura de la imagen en píxeles.
  */
int Alto();

/**
  * @brief Obtiene la imagen desde un fichero.
  * @pre La ruta del fichero ha de ser correcta, sino no se obtiene la imagen.
  */
void Cargar(const char *fich);

/**
  * @brief Obtiene información del ancho de la imagen en píxeles.
  * @pre La imagen ha sido previamente creada.
  * @return El ancho de la imagen.
  */
int Ancho();

/**
  * @brief Liberar la memoria ocupada por una imagen BMP.
  * @pre La imagen ha sido previamente creada.
  */
void Liberar();

/**
  * @brief Limpia el contenido de una imagen.
  * @pre La imagen ha sido previamente creada.
  * @post El contenido de @ img se modifica para que todos sus puntos tengan el
  *       color negro (0,0,0)
  */
void Limpiar();

/**
  * @brief Dibuja la imagen, según unas coordenadas.
  * @pre La imagen ha sido previamente creada.
  * @pre Una venta ha sido previamente creada con simensiones igules o mayores al tamaño de la imagen.
*/
void Dibujar(int x, int y);

/**
  * @brief Sobrecarga del operador igual, que obtiene una copia de un objeto, es decir los iguala.
  * @pre La imagen ha sido previamente creada.
  * @return una imagen con los mismos valores que la otra imagen desde donde se obtiene la imagen.
  */
imagen& operator=(const imagen &img);
private:
	GRF_Imagen img;
};
#endif
