#include <string>
#include "marcador.h"
#include <iostream>
#include "graficos.h"

using namespace std;
using namespace graficos;

marcador::marcador(){
	this->fil=0;
	this->col=0;
	this->ancho=0;
	this->alto=0;
	this->marco=0;
	this->R=0;
	this->G=0;
	this->B=0;
	this->R1=0;
	this->G1=0;
	this->B1=0;
}
marcador::marcador(const marcador &m){
	if (this != &m){
		this->fil=m.fil;
		this->col=m.col;
		this->ancho=m.ancho;
		this->alto=m.alto;
		this->marco=m.marco;
		this->R=m.R;
		this->G=m.G;
		this->B=m.B;
		this->R1=m.R1;
		this->G1=m.G1;
		this->B1=m.B1;		
	}
}

marcador::marcador(int fil, int col, int ancho, int alto, int marco,int R,int G,int B,int R1, int G1, int B1){
	
	this->fil=fil;
	this->col=col;
	this->ancho=ancho;
	this->alto=alto;
	this->marco=marco;
	this->R=R;
	this->G=G;
	this->B=B;
	this->R1=R1;
	this->G1=G1;
	this->B1=B1;
}

marcador::~marcador(){

}

marcador& marcador::operator=(const marcador &m){
	if (this != &m){
		this->fil=m.fil;
		this->col=m.col;
		this->ancho=m.ancho;
		this->alto=m.alto;
		this->marco=m.marco;
		this->R=m.R;
		this->G=m.G;
		this->B=m.B;
		this->R1=m.R1;
		this->G1=m.G1;
		this->B1=m.B1;		
	}
	return *this;
}

void marcador::SetFil(int f){
	this->fil=f;
}

int marcador::GetFil()const{
	return this->fil;
}

void marcador::SetCol(int c){
	this->col=c;
}

int marcador::GetCol()const{
	return this->col;
}

void marcador::SetAncho(int a){
	this->ancho=a;
}

int marcador::GetAncho()const{
	return this->ancho;
}

void marcador::SetAlto(int a){
	this->alto = a;
}

int marcador::GetAlto()const{
	return this->alto;
}

void marcador::SetMarco(int m){
	this->marco=m;
}

int marcador::GetMarco()const{
	return this->marco;
}

void marcador::SetR(int r){
	this->R=r;
}

int marcador::GetR()const{
	return this->R;
}

void marcador::SetG(int g){
	this->G=g;
}

int marcador::GetG()const{
	return this->G;
}

void marcador::SetB(int b){
	this->B=b;
}

int marcador::GetB()const{
	return this->B;
}

void marcador::SetR1(int r1){
	this->R1=r1;
}

int marcador::GetR1()const{
	return this->R1;
}

void marcador::SetG1(int g1){
	this->G1=g1;
}

int marcador::GetG1()const{
	return this->G1;
}
void marcador::SetB1(int g1){
	this->B1=g1;
}

int marcador::GetB1()const{
	return this->B1;
}

void marcador::LeerMarcador(){
	cin >> this->fil;
	cin >> this->col;
	cin >> this->ancho;
	cin >> this->alto;
	cin >> this->marco;
	cin >> this->R;
	cin >> this->G;
	cin >> this->B;
	cin >> this->R1;
	cin >> this->G1;
	cin >> this->B1;
}
void marcador::EscribirMarcador()const{
	cout << endl << this->fil;
	cout << endl << this->col;
	cout << endl << this->ancho;
	cout << endl << this->alto;
	cout << endl << this->marco;
	cout << endl << this->R;
	cout << endl << this->G;
	cout << endl << this->B;
	cout << endl << this->R1;
	cout << endl << this->G1;
	cout << endl << this->B1;
}

void marcador::PintarMarcador()const{
	
	
	int posi=this->GetFil();
	int posj=this->GetCol();
	int ancho=this->GetCol()+this->GetAncho();
	int alto=this->GetFil()+this->GetAlto();
	for (int i=0; i<this->GetMarco(); i++){
		Rectangulo(posj,posi,ancho,alto,this->GetR(),this->GetG(),this->GetB());
			posi++;
			posj++;
			ancho--;
			alto--;
	}
	RectanguloR(posj,posi,ancho,alto,R1,G1,B1);	
}

