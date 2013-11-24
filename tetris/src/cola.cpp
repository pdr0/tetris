#include "cola.h"
#include <iostream>
#include <cstdlib>

using namespace std;

cola::cola(){
	this->tam = 0;
	int f,c;
	for (int i=0; i<7; i++){
		cout << endl << "Filas pieza: ";
		cin >> f;
		cout << endl << "Columnas pieza: ";
		cin >> c;
		matriz aux(f,c);
		aux.LeerMatriz();
		this->pzs[i]=aux;
	}
		
}
//Falla aqui
cola::cola(int n){
	int f,c;
	this->tam = n;
	for (int i=0; i<7; i++){
		cout << endl << "Filas pieza: ";
		cin >> f;
		cout << endl << "Columnas pieza: ";
		cin >> c;
		matriz aux(f,c);
		aux.LeerMatriz();
		this->pzs[i]=aux;
	}
 	this->tail = new matriz [n];
 	for (int i=0; i<n; i++)
 		SetCola(i,this->pzs[(1+rand()%7)]);
 	
 }
 
cola::cola(const cola &c){
	if (this!=&c)
	{
	 	for (int i=0; i<c.TamCola(); i++)
		 	this->SetCola(i,c.GetCola(i));
 	}
 }
cola::~cola(){
 	delete [] this->tail;
 	//delete [] this->pzs;
 }

void cola::Generar(){
 	for (int i=0; i<this->TamCola()-1; i++)
 		this->SetCola(i,this->GetCola(i+1));
 	this->tail[this->TamCola()-1] = this->pzs[(1+rand()%7)];
 }

void cola::SetCola(const int x,const matriz &p){
 	this->tail[x]=p;
 }
matriz cola::GetCola(const int x)const{
 	return this->tail[x];
 }
int cola::TamCola()const{
 	return this->tam;
 }

cola& cola::operator=(const cola &c){
	if (this != &c){
	 	this->tam=c.TamCola();
 		for (int i=0; i<c.TamCola(); i++)
		 	this->SetCola(i,c.GetCola(i));
	}
	 return *this;
 }
 
 void cola::EscribirCola(){
 	for (int i=0; i<this->tam; i++)
 		this->tail[i].EscribirMatriz();
 }
 

