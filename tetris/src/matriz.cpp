#include "matriz.h"
#include <iostream>

using namespace std;

matriz::matriz(){
	this->filas=0;
	this->columnas=0;
	this->v=NULL;
}
matriz::matriz(int f, int c){
	this->filas = f;
	this->columnas = c;	
	this->v = new int *[f];
	for (int i=0; i<f; i++)
		this->v[i] = new int [c];
}
matriz& matriz::operator=(const matriz &m)
{
	if (this != &m){
		this->filas = m.filas;
		this->columnas = m.columnas;
		this->v = new int *[this->filas];
		for (int i=0; i<this->filas; i++)
			this->v[i] = new int [this->columnas];

		for (int i=0; i<m.FilasMatriz(); i++)
			for (int j=0; j<m.ColumnasMatriz(); j++)
				this->v[i][j] = m.v[i][j];
	}
	return *this;
}

matriz::matriz(const matriz &m){
	if (this != &m){
		this->filas = m.filas;
		this->columnas = m.columnas;
		this->v = new int *[this->filas];
		for (int i=0; i<this->filas; i++)
			this->v[i] = new int [this->columnas];

		for (int i=0; i<m.FilasMatriz(); i++)
			for (int j=0; j<m.ColumnasMatriz(); j++)
				this->v[i][j] = m.v[i][j];
	}
}

int matriz::FilasMatriz ()const{
	return this->filas;
}

int matriz::ColumnasMatriz ()const{
	return this->columnas;
}

void matriz::SetMatriz(int i, int j, int v){
	this->v[i][j] = v;
}

int matriz::GetMatriz (int i, int j)const{
	return this->v[i][j];
}

matriz::~matriz(){
	if (this->v!=0){
		for (int i=0; i<this->filas; i++)
			delete this->v[i];
		delete [] this->v;
	}
}
void matriz::LeerMatriz(){
	int dato=0;
	for (int i=0; i<this->filas; i++){
		for (int j=0; j<this->columnas; j++){
			cout << endl <<"dato: ";
			this->SetMatriz(i,j,dato);
		}
	}
}

void matriz::EscribirMatriz()const{
	cout << endl << this->FilasMatriz() << " " << this->ColumnasMatriz();
	for (int i=0; i<this->filas; i++){
		cout << endl;	
		for (int j=0; j<this->columnas; j++)
			cout << this->GetMatriz(i,j)<< "  ";
	}
}
