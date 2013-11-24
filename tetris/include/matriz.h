/**
  * @file matriz.h
  * @brief Fichero cabecera para la gestión simplificada de las matrices.
  *
  * Ofrece una interfaz simple para trabajar con matrices.
  *
  */


/* ***************************************** */

#ifndef __MATRIZ__H__
#define __MATRIZ__H__

/* ***************************************** */

class matriz{
 public:
   /**
     @brief Constructor por defecto
   */
matriz();

   /**
     @brief Constructor con parámetros
     @param Filas y columnas
   */
matriz(int f, int c);

   /**
     @brief Destructor
   */
~matriz();

   /**
     @brief Constructor de copia
   */
matriz(const matriz &m);

   /**
     @brief Filas de la matriz
     @return Número de filas de la matriz
   */
int FilasMatriz ()const;

   /**
   @brief Columnas de la matriz
   @return Numero de columnas de la matriz
   */
int ColumnasMatriz ()const;

   /**
   @brief Inserción de un elemento en la matriz, en una fila y columna específica
   @param i Fila de la matriz
   @param j Columna de la matriz
   @param v Valor a introducir en la matriz
   */
void SetMatriz(int i, int j, int v);

   /**
   @brief Coger elemento de la matriz
   @param i Columna de la matriz
   @param j Fila de la matriz
   @return Elemento de la matriz según fila y columna
   */
int GetMatriz (int i, int j)const;


   /**
   @brief Operador =
   @param Una matriz origen
   @return Una copia de la matriz
   */
matriz& operator=(const matriz &m);

   /**
   @brief Leer matriz desde la entrada estandar
   */
void LeerMatriz();

   /**
   @brief Escribe matriz por la salida estandar
   */
void EscribirMatriz()const;

private:
	int **v;
	int filas;
	int columnas;
};

#endif

