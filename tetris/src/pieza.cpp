#include "matriz.h"
#include "pieza.h"
#include <iostream>

using namespace std;
 
pieza::pieza(){
	this->f=0;
	this->c=0;
}
pieza::pieza(int f, int c){
	matriz aux(f,c);
	this->f=f;
	this->c=c;
	this->p=aux;
}
pieza::~pieza(){
	this->f=0;
	this->c=0;
}

pieza::pieza(const pieza &p){
	if (this != &p){
		matriz aux(p.FilPieza(),p.ColPieza());
		this->f=p.FilPieza();
		this->c=p.ColPieza();
		for (int i=0; i<this->f; i++)
			for (int j=0; j<this->c; j++)
				aux.SetMatriz(i,j,p.Get(i,j));
		this->p=aux;
	}
 }
void pieza::RotarPiezaDer(){
	int y=0;
	matriz aux(this->c, this->f);
	int x=aux.ColumnasMatriz();
	for (int i=0; i<this->f; i++){
		y=0;
		x--;
		for (int j=0; j<this->c; j++){	
			aux.SetMatriz(y,x,this->p.GetMatriz(i,j));
			y++;
			}
	}
	this->p=aux;
	this->f=aux.FilasMatriz();
	this->c=aux.ColumnasMatriz();
}
void pieza::RotarPiezaIzq(){
	int x=-1,y;
	matriz aux(this->c, this->f);
	for (int i=0; i<this->f; i++){
		y=aux.FilasMatriz();
		x++;
		for (int j=0; j<this->c; j++){	
			y--;
			aux.SetMatriz(y,x,this->Get(i,j));
		}
	}
	this->p=aux;
	this->f=aux.FilasMatriz();
	this->c=aux.ColumnasMatriz();
}
int pieza::FilPieza()const{
	return this->f;
}
int pieza::ColPieza()const{
	return this->c;
}

void pieza::LeerPieza(){
	int dato;
	for (int i=0; i<this->f; i++)
		for (int j=0; j<this->c; j++){
			cin >> dato;
			this->p.SetMatriz(i,j,dato);
		}
}
void pieza::EscribirPieza()const{
	cout << endl << this->f << " " << this->c;
	for (int i=0; i<this->f; i++){
		cout << endl;
		for (int j=0; j<this->c; j++){
			cout << this->p.GetMatriz(i,j)<<" ";
		}
	}
}
pieza& pieza::operator=(const pieza &p){
	if (this != &p){
		matriz aux(p.FilPieza(),p.ColPieza());
		this->f=p.FilPieza();
		this->c=p.ColPieza();
		for (int i=0; i<this->f; i++)
			for (int j=0; j<this->c; j++)
				aux.SetMatriz(i,j,p.Get(i,j));
		this->p=aux;
	}
 
	return *this;
}

int pieza::Get(int i, int j)const{
	return this->p.GetMatriz(i,j);
}

void pieza::Set(int i, int j, int v){
	this->p.SetMatriz(i,j,v);
}

matriz pieza::GetPieza()const{
	return this->p;
}
