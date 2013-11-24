#include "imagen.h"
#include "graficos.h"
#include <iostream>

using namespace graficos;

using namespace std;

imagen::imagen(){

}

imagen::imagen(const char *fich){
	int ancho,alto;
	if (DimensionesImagenFichero(fich, ancho, alto) == false)
		cout << endl <<"error al cargar el fichero.." << endl;
	else
		this->img = LeerImagen(fich);
}

imagen::~imagen(){

}

imagen::imagen(const imagen &i){
	if (this != &i){
		this->img = ObtenerCopiaImagen(i.img);
	}
}


void imagen::Cargar(const char *fich){
	this->img = LeerImagen(fich);
}
int imagen::Ancho(){
	return AnchoImagen(this->img);
}

int imagen::Alto(){
	return AltoImagen(this->img);
}

void imagen::Liberar(){
	LiberarImagen(this->img);
}

void imagen::Limpiar(){
	LimpiarImagen(this->img);
}

void imagen::Dibujar(int x, int y){
	DibujarImagen(this->img,x,y);
}

imagen& imagen::operator=(const imagen &i){
	if (this != &i){
		this->img = ObtenerCopiaImagen(i.img);
	}		
	return *this;
}

