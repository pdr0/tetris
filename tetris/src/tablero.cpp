#include <iostream>
#include "tablero.h"

using namespace std;


tablero::tablero(){

}
tablero::tablero(int f, int c){
	matriz m(f,c);
	this->m=m;
}

tablero::~tablero(){

}

tablero::tablero (const tablero &t){
	if(this!=&t){
		this->m=t.m;
	}
}

tablero& tablero::operator=(const tablero &t){
	if(this!=&t){
		this->m=t.m;
	}
	return *this;
}



int tablero::FilTablero()const{
	return this->m.FilasMatriz();
}

int tablero::ColTablero()const{
	return this->m.ColumnasMatriz();
}

void tablero::SetTablero(int posi, int posj, const pieza &p){
	int k=posi-1,z;
	for (int i=0; i<p.FilPieza(); i++){
		k++;
		z=posj-1;
		for (int j=0; j<p.ColPieza(); j++){
			z++;
			if (p.Get(i,j)!=0)
				this->m.SetMatriz(k,z,p.Get(i,j));
		}
	}	
}

int tablero::GetTablero(int posi, int posj)const{
	if (posi<=this->FilTablero() && posj<=this->ColTablero())
		return this->m.GetMatriz(posi,posj);
	else
		return -1;
}

bool tablero::Encaja(int posi, int posj,const pieza &p)const{
	int k=posi-1,z=posj-1;
	bool encaja = true;
	if (posi+p.FilPieza()-1<this->FilTablero() && posj<this->ColTablero()){
		for (int i=0; i<p.FilPieza() && encaja; i++){
			k++;
			for (int j=0; j<p.ColPieza() && encaja; j++){
				z++;
				if (this->m.GetMatriz(k,z)!=0&&p.Get(i,j)!=0)
					encaja = false;
			}
			z=posj-1;
		}
	}
	return encaja;
}
int tablero::LineaCompleta(){
	int cnt=0;
	bool ok = false;
	int completa=0;
	for (int i=0; i<this->FilTablero(); i++){
		cnt=0;
		for (int j=0; j<this->ColTablero()&&!ok; j++){
			if (this->m.GetMatriz(i,j)!=0)
				cnt++;
			if (cnt==this->ColTablero()){
				completa = i;
				ok = true;
			}
			else
				completa = -1;
		}
	}
	return completa;
}
int tablero::BorrarLinea(){
	int fila=0;
	int lineas=0;
	bool fin=false;
	while (!fin){
		fila=this->LineaCompleta();
		if (fila==-1)
			fin = true;
		else 
			lineas++;
		for (int i=fila; i>0; i--){
			for (int j=0; j<this->ColTablero(); j++){
				this->m.SetMatriz(i,j,this->m.GetMatriz(i-1,j));
				//Inicializa la primera línea del tablero a 0
				if (i==1)
					this->m.SetMatriz(0,j,0);
			}
		}		
	}
	return lineas;
}

void tablero::EscribirTablero()const{
	for (int i=0; i<this->FilTablero(); i++){
		cout << endl;
		for (int j=0; j<this->ColTablero(); j++)
			cout << this->GetTablero(i,j)<< " ";
	}
}

void tablero::LeerTablero(){
	int dato;
	for (int i=0; i<this->FilTablero(); i++){
		for (int j=0; j<this->ColTablero(); j++){
			cin >> dato;
			this->m.SetMatriz(i,j,dato);
		}
	}
}

void tablero::Set(int posi, int posj, int v){
	this->m.SetMatriz(posi, posj,v);
}
