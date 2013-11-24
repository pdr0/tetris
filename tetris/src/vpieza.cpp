#include <iostream>
#include "vpieza.h"

using namespace std;

vpieza::vpieza(){
	this->n=0;
}
vpieza::vpieza(int n){
	this->n=n;
	this->v = new pieza [n];
}
vpieza::~vpieza(){
	if (this->v!=0 && this->n!=0){
		delete [] this->v;
		this->n=0;
	}
}
vpieza::vpieza(const vpieza &v){
	if (this!=&v){
		delete [] this->v;
		this->n=v.Tam();
		this->v = new pieza [this->n];		
		for (int i=0; i<this->Tam(); i++)
			this->Set(i,v.Get(i));
	}
}
vpieza& vpieza::operator=(const vpieza &v){
	if (this!=&v){
		if (this->n!=0)
			delete [] this->v;
		this->n=v.Tam();
		this->v = new pieza [this->n];
		for (int i=0; i<this->Tam(); i++)
			this->Set(i,v.Get(i));
	}	
	return *this;
}
pieza vpieza::Get(int i)const{
	return this->v[i];
}
void vpieza::Set(int i,const pieza p){

	if (this!=0 && i<this->Tam()){
		this->v[i]=p;
	}
		
}
int vpieza::Tam()const{
	return this->n;
}
void vpieza::Push(const pieza &p){
	if (this!=0){
		vpieza aux(this->Tam()+1);
		for (int i=0; i<this->Tam(); i++)
			aux.Set(i,this->Get(i));
		aux.Set(this->Tam(),p);
		*this=aux;
	}
	else{
		this->v=new pieza [1];
		this->Set(0,p);
		this->n=1;
	}
}

void vpieza::Escribir()const{
	if (this!=0)
		for (int i=0; i<this->Tam(); i++)
			this->v[i].EscribirPieza();
}
