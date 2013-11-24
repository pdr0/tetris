#include <iostream>
#include "bolsa_piezas.h"
#include <cstdlib>

using namespace std;

bolsa_piezas::bolsa_piezas(){
	this->n=0;
}
bolsa_piezas::bolsa_piezas(int n){
	vpieza aux(n);
	this->n=aux.Tam();
}
bolsa_piezas::~bolsa_piezas(){
	this->n=0;
}
bolsa_piezas::bolsa_piezas(const bolsa_piezas &b){
	if (this != &b){
		this->n=b.n;
		this->v=b.v;
	}
}

bolsa_piezas& bolsa_piezas::operator=(const bolsa_piezas &b){
	if (this != &b){
		this->n=b.n;
		this->v=b.v;
	}
	return *this;
}
pieza bolsa_piezas::Pop(int i)const{
	return this->v.Get(i);
}
void bolsa_piezas::Push(const pieza p){
	this->v.Push(p);
	this->n=v.Tam();
}
void bolsa_piezas::Escribir()const{
	this->v.Escribir();
}
int bolsa_piezas::Tam()const{
	return this->n;
}
pieza bolsa_piezas::Aleatoria()const{
	return this->v.Get(rand()%7);
//	return this->v.Get(0);
}
