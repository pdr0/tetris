#include <iostream>
#include "cola_piezas.h"

using namespace std;

cola_piezas::cola_piezas(){
	this->n=0;
}
cola_piezas::cola_piezas(int n){
	vpieza aux(n);
	this->n=n;
}
cola_piezas::cola_piezas(const cola_piezas &c){
	this->n=c.Tam();
	this->v=c.v;
}
cola_piezas& cola_piezas::operator=(const cola_piezas &c){
	if (this!=0){
		this->n=c.Tam();
		this->v=c.v;
	}
	return *this;
}
pieza cola_piezas::Pop(){
	pieza p;
	if (this->Tam()>0){
		p=this->v.Get(0);
		if (this->Tam()==1){
			cola_piezas auxcola;
			*this=auxcola;
		}
		if (this->Tam() > 1){
			vpieza aux(this->Tam());
			for (int i=0; i<aux.Tam()-1; i++){
				aux.Set(i,this->Get(i+1));
			}	
			this->v=aux;
			this->n=aux.Tam();
		}
	}
	return p; 
}
void cola_piezas::Push(const pieza p){
	this->v.Push(p);
	this->n=this->v.Tam();
}
void cola_piezas::PushTop(const pieza p){
	this->v.Set(this->Tam()-1, p);
	this->n=v.Tam();
}
pieza cola_piezas::Get(int x)const{
	return this->v.Get(x);
}
void cola_piezas::Escribir()const{
	this->v.Escribir();
}
int cola_piezas::Tam()const{
	return this->n;
}
