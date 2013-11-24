#include <fstream>
#include "tablero.h"
#include <iostream>
#include <cstdlib>
#include "graficos.h"
#include "pieza.h"
#include "matriz.h"
#include "marcador.h"
#include "vpieza.h"
#include "bolsa_piezas.h"
#include "cola_piezas.h"
#include "tablero.h"
#include "imagen.h"
#include "interfaz.h"
#include <string>

void Configuracion(istream &i,interfaz &I);
void Tablero(istream &i,interfaz &I);
void Cola(istream &i,interfaz &I);
void Titulo(istream &i, interfaz &I, marcador &M);
void Nivel(istream &i, interfaz &I, marcador &M);
void Lineas(istream &i, interfaz &I, marcador &M);
void Piezas(istream &i, interfaz &I, marcador &M);
void Estado(istream &i, interfaz &I, marcador &M);
void CargarPiezas(istream &i, bolsa_piezas &B, cola_piezas &C);
void CargarTablero(istream &i, tablero &T);
void Pintar(interfaz &I, tablero &Ta, cola_piezas &C,marcador &T, marcador &N, marcador &L, marcador &P, marcador &E);
void Juego(interfaz &I, tablero &Ta, cola_piezas &C, bolsa_piezas &B,marcador &T, marcador &N, marcador &L, marcador &P, marcador &E);
void Saltar (istream &i);

using namespace std;
using namespace graficos;

int main (int argc, char *argv[]){
	interfaz I;
	tablero T;
	bolsa_piezas B;
	cola_piezas C;
	marcador Title, Level, Lines, Pieces, Status;
	ifstream f;
	imagen tetris("./tetris/data/piezas1/tetris.bmp");
	f.open(argv[1]);
	if (f.fail()) {
  		cerr << "Error al abrir el fichero" << endl;
		  exit(1);    // No podemos trabajar
	}
	else{
		Configuracion(f,I);
		if (I.GetSemilla()!=0)
			srand(I.GetSemilla());
		else
			srand(time(0));
		Tablero(f,I);
		Cola(f,I);
		Titulo(f,I,Title);
		Nivel(f,I,Level);
		Lineas(f,I,Lines);
		Piezas(f,I,Pieces);
		Estado(f,I,Status);
		CrearVentana(I.GetAnchoT()+I.GetAnchoC()+Title.GetAncho(),I.GetAltoT(),"Tetris---->>");
		CargarPiezas(f,B,C);
		CargarTablero(f,T);
		Juego(I,T,C,B,Title,Level,Lines,Pieces,Status);
		
	}		
	f.close();   
	
}
void Configuracion(istream &i, interfaz &I){
	int a;
	string s;
	if (!i.eof() ) {
		Saltar(i);											
		i >> a;		
		I.SetSemilla(a);
		
		Saltar(i);
		i >> a;
		I.SetEspera(a);
		
		Saltar(i);
		i >> a;	
		I.SetNumLineas(a);
		
		Saltar(i);
		i >> a;	
		I.SetNumPzsCol(a);
		
		Saltar(i);
		i >> a;	
		I.SetNumImgs(a);
		
		Saltar(i);
		i >> s;
		I.SetDirImgs(s);

		Saltar(i);
		i >> s;
		s="./tetris/"+I.GetDirImgs()+"/"+s;
		I.SetImgs(0,s);
		
		Saltar(i);
		i >> s;
		s="./tetris/"+I.GetDirImgs()+"/"+s;
		I.SetImgs(1,s);
		
		Saltar(i);
		i >> s;
		s="./tetris/"+I.GetDirImgs()+"/"+s;
		I.SetImgs(2,s);		
		
		Saltar(i);
		i >> s;
		s="./tetris/"+I.GetDirImgs()+"/"+s;
		I.SetImgs(3,s);
		
		Saltar(i);
		i >> s;
		s="./tetris/"+I.GetDirImgs()+"/"+s;
		I.SetImgs(4,s);	
		
		Saltar(i);
		i >> s;
		s="./tetris/"+I.GetDirImgs()+"/"+s;
		I.SetImgs(5,s);
		
		Saltar(i);
		i >> s;
		s="./tetris/"+I.GetDirImgs()+"/"+s;
		I.SetImgs(6,s);		
		
	}
}

void Tablero(istream &i,interfaz &I){
	int a;
	string s;
	if (!i.eof() ) {
		Saltar(i);											
		i >> a;		
		I.SetFilT(a);
		
		i >> a;		
		I.SetColT(a);
		
		Saltar(i);											
		i >> a;		
		I.SetAnchoT(a);

		
		i >> a;		
		I.SetAltoT(a);


		i >> a;		
		I.SetMarcoT(a);		
		
		Saltar(i);									
		i >> a;	
		I.SetRBordeT(a);
		
		i >> a;	
		I.SetGBordeT(a);
		
		//Saltar(i);										
		i >> a;	
		I.SetBBordeT(a);
		
		Saltar(i);										
		i >> a;	
		I.SetRFondoT(a);	
		
		i >> a;	
		I.SetGFondoT(a);		
		
		i >> a;	
		I.SetBFondoT(a);		
		
	}

}

void Cola(istream &i,interfaz &I){
	int a;
	string s;
	if (!i.eof() ) {
		Saltar(i);											
		i >> a;		
		I.SetFilC(a);
		
		i >> a;		
		I.SetColC(a);
		
		Saltar(i);											
		i >> a;		
		I.SetAnchoC(a);
		
		i >> a;		
		I.SetAltoC(a);
		
		i >> a;		
		I.SetMarcoC(a);		
		
		Saltar(i);										
		i >> a;	
		I.SetRBordeC(a);
		
		i >> a;	
		I.SetGBordeC(a);
		
		i >> a;	
		I.SetBBordeC(a);
		
		Saltar(i);										
		i >> a;	
		I.SetRFondoC(a);	
		
		i >> a;	
		I.SetGFondoC(a);		
		
		i >> a;	
		I.SetBFondoC(a);		

	}


}
void Titulo(istream &i, interfaz &I, marcador &M){
	int a;
	string s,s1,s2;
	
	if (!i.eof() ) {
	
		Saltar(i);										
		i >> s;	
		i >> s1; 
		i>>s2;
		I.SetTitulo(s+s1+s2);
		
		
		Saltar(i);
		i >> s;	
		s="./tetris/"+s;
		I.SetTLetraT(s);
		
//		Saltar(i);											
		i >> a;		
		I.SetTamTitulo(a);
		
//		Saltar(i);
		i >> a;		
		I.SetEstiloTitulo(a);
		
		Saltar(i);
		i >> a;		
		I.SetRTitulo(a);		
		
		i >> a;	
		I.SetGTitulo(a);
		
		i >> a;	
		I.SetBTitulo(a);
		
		Saltar(i);
		i >> a;
		M.SetFil(a);
		
		i >> a;
		M.SetCol(a);
		
		Saltar(i);
		i >> a;
		M.SetAncho(a);
		
		i >> a;
		M.SetAlto(a);
		
		i >> a;
		M.SetMarco(a);
		
		Saltar(i);
		i >> a;
		M.SetR(a);
		
		i >> a;
		M.SetG(a);
		
		i >> a;
		M.SetB(a);
		
		i >> a;
		M.SetR1(a);
		
		i >> a;
		M.SetG1(a);
		
		i >> a;
		M.SetB1(a);		
	}
}

void Nivel(istream &i, interfaz &I, marcador &M){
	int a;
	string s;
	
	if (!i.eof() ) {
	
		Saltar(i);
		i >> s;		
		s="./tetris/"+s;
		I.SetTLetraN(s);
		
		i >> a;		
		I.SetTamN(a);
		
		i >> a;		
		I.SetEstiloN(a);
		
		Saltar(i);
		i >> a;		
		I.SetRNivel(a);		
		
		i >> a;	
		I.SetGNivel(a);
		
		i >> a;	
		I.SetBNivel(a);
		
		Saltar(i);
		i >> a;
		M.SetFil(a);
		
		i >> a;
		M.SetCol(a);
		
		Saltar(i);
		i >> a;
		M.SetAncho(a);
		
		i >> a;
		M.SetAlto(a);
		
		i >> a;
		M.SetMarco(a);
		
		Saltar(i);
		i >> a;
		M.SetR(a);
		
		i >> a;
		M.SetG(a);
		
		i >> a;
		M.SetB(a);
		
		i >> a;
		M.SetR1(a);
		
		i >> a;
		M.SetG1(a);
		
		i >> a;
		M.SetB1(a);		
	}
}
void Lineas(istream &i, interfaz &I, marcador &M){
	int a;
	string s;
	
	if (!i.eof() ) {
	
		Saltar(i);
		i >> s;		
		s="./tetris/"+s;		
		I.SetTLetraL(s);
		
		i >> a;		
		I.SetTamL(a);
		
		i >> a;		
		I.SetEstiloL(a);
		
		Saltar(i);
		i >> a;		
		I.SetRLineas(a);		
		
		i >> a;	
		I.SetGLineas(a);
		
		i >> a;	
		I.SetBLineas(a);
		
		Saltar(i);
		i >> a;
		M.SetFil(a);
		
		i >> a;
		M.SetCol(a);
		
		Saltar(i);
		i >> a;
		M.SetAncho(a);
		
		i >> a;
		M.SetAlto(a);
		
		i >> a;
		M.SetMarco(a);
		
		Saltar(i);
		i >> a;
		M.SetR(a);
		
		i >> a;
		M.SetG(a);
		
		i >> a;
		M.SetB(a);
		
		i >> a;
		M.SetR1(a);
		
		i >> a;
		M.SetG1(a);
		
		i >> a;
		M.SetB1(a);		
	}

}
void Piezas(istream &i, interfaz &I, marcador &M){
	int a;
	string s;
	
	if (!i.eof() ) {
	
		Saltar(i);
		i >> s;		
		s="./tetris/"+s;		
		I.SetTLetraP(s);
		
		i >> a;		
		I.SetTamP(a);
		
		i >> a;		
		I.SetEstiloP(a);
		
		Saltar(i);
		i >> a;		
		I.SetRPiezas(a);		
		
		i >> a;	
		I.SetGPiezas(a);
		
		i >> a;	
		I.SetBPiezas(a);
		
		Saltar(i);
		i >> a;
		M.SetFil(a);
		
		i >> a;
		M.SetCol(a);
		
		Saltar(i);
		i >> a;
		M.SetAncho(a);
		
		i >> a;
		M.SetAlto(a);
		
		i >> a;
		M.SetMarco(a);
		
		Saltar(i);
		i >> a;
		M.SetR(a);
		
		i >> a;
		M.SetG(a);
		
		i >> a;
		M.SetB(a);
		
		i >> a;
		M.SetR1(a);
		
		i >> a;
		M.SetG1(a);
		
		i >> a;
		M.SetB1(a);		
	}
}
void Estado(istream &i, interfaz &I, marcador &M){
	int a;
	string s;
	
	if (!i.eof() ) {
	
		Saltar(i);
		i >> s;		
		s="./tetris/"+s;		
		I.SetTLetraE(s);
		
		i >> a;		
		I.SetTamE(a);
		
		i >> a;		
		I.SetEstiloE(a);
		
		Saltar(i);
		i >> a;		
		I.SetREstado(a);		
		
		i >> a;	
		I.SetGEstado(a);
		
		i >> a;	
		I.SetBEstado(a);
		
		Saltar(i);
		i >> a;
		M.SetFil(a);
		
		i >> a;
		M.SetCol(a);
		
		Saltar(i);
		i >> a;
		M.SetAncho(a);
		
		i >> a;
		M.SetAlto(a);
		
		i >> a;
		M.SetMarco(a);
		
		Saltar(i);
		i >> a;
		M.SetR(a);
		
		i >> a;
		M.SetG(a);
		
		i >> a;
		M.SetB(a);
		
		i >> a;
		M.SetR1(a);
		
		i >> a;
		M.SetG1(a);
		
		i >> a;
		M.SetB1(a);		
	}
}

void CargarPiezas(istream &i, bolsa_piezas &B, cola_piezas &C){
	int a, b, c, tam;
	pieza p1;
	if (!i.eof() ) {
	
		Saltar(i);
		i >> a;	
		tam = a;	
		for (int k=0; k<tam; k++){
			Saltar(i);
			i >> a;
			i >> b;
			pieza p(a,b);
			for (int x=0; x<p.FilPieza(); x++){
				for (int z=0; z<p.ColPieza(); z++){
					i >> c;
					p.Set(x,z,c);
				}
			}
			B.Push(p);
		}
		for (a=0; a<4; a++){
			p1=B.Aleatoria();
			C.Push(p1);
		}
	}
}
void CargarTablero(istream &i, tablero &T){
	int a, b, c;
	string s;
	
	if (!i.eof() ) {
		Saltar (i);
		i >> a;
		i >> b;
		tablero aux(a,b);
		T=aux;
		for (int x=0; x<T.FilTablero(); x++){
			for (int z=0; z<T.ColTablero(); z++){
				i >> c;
				T.Set(x,z,c);
			}
		}
	}	
}

void Saltar (istream &i){
	char c;
	bool fin=false;
	while(!i.eof() && !fin){
		c=i.peek();
		if (c=='#'){
			i.ignore(1000,'\n');
		}
		if (c=='\n')
			i.ignore(1000,'\n');
		if (c==' '){
			c=i.peek();
			while(c==' '){
				i.get(c);
				if (c=='#'){
					i.ignore(1000,'\n');
				}
			}
		}
		if (c!='#' && c!='\n' && c!=' '){
			fin = true;
		}
	}
}
void Juego(interfaz &I, tablero &Ta, cola_piezas &C, bolsa_piezas &B,marcador &T, marcador &N, marcador &L, marcador &P, marcador &E){
	ActivarDibujo();
	bool lleno = false, fin=false;
	int col=(Ta.ColTablero()/2)-2, fil=0, x=fil*20+I.GetMarcoT(), y=col*20+I.GetMarcoT(), lin=0,pzs=1,completas=0,next=0,n_nivel=0,espera=I.GetEspera();
	TTecla tecla;
	char cad[50],cad1[50],cad3[50];
	string s,s1,s3;
	C.PushTop(B.Aleatoria());
	pieza p=C.Pop();
	sprintf(cad,"%d",pzs);			
	s=cad;
	s="Piezas: "+s;	
	C.PushTop(B.Aleatoria());

	while (!lleno){//Si no el acumulador no esta lleno
		sprintf(cad1,"%d",completas);
		s1=cad1;
		s1="Lineas: "+s1;
		sprintf(cad3,"%d",n_nivel);
		s3=cad3;
		s3="Nivel "+s3;
		I.Nivel(N,s3);
		DesactivarDibujo();
		LimpiarVentana();
		Pintar (I,Ta,C,T,N,L,P,E);
		if (fin == true){ 	
			p=C.Pop();
			pzs++;
			sprintf(cad,"%d",pzs);			
			s=cad;
			s="Piezas: "+s;	
			C.PushTop(B.Aleatoria());
			col=(Ta.ColTablero()/2)-2;
			fil=0;
			x=fil*20+I.GetMarcoT();
			y=col*20+I.GetMarcoT();
			if (!Ta.Encaja(fil,col,p))
				lleno=true;
		}
		fin = false;
		//Borrado de lineas
		lin=Ta.BorrarLinea();
		if (lin!=0){
			completas = completas +lin;
			next++;
		}
		//Descienden solas
		if(!Ta.Encaja(fil+1,col,p)){
			fil++;
			x=x+20;
			Ta.SetTablero(fil,col,p);
			I.Pieza(x,y,p);
		}
		else{
			fil++;
			x=x+20;
			I.Pieza(x,y,p);
		}
		//	Esperar(100);
		DesactivarDibujo();
		LimpiarVentana();
		Pintar (I,Ta,C,T,N,L,P,E);
		I.Estado(E, "Jugando..");
		I.Piezas(P,s);	
		I.Lineas(L,s1);
		I.Nivel(N,s3);
		ActivarDibujo();
	//Colocar Ficha		
		CronometroInicio();
		long int TIME=CronometroValor();
		if(next==5){
			if (espera >=50){
				espera=espera-50;
				I.SetEspera(espera);
				sprintf(cad3,"%d",n_nivel);
				s3=cad3;
				s3="Nivel "+s3;
				I.Nivel(N,s3);
				next=0;	
			}
		}
		while (Ta.Encaja(fil,col,p) && (CronometroValor()-TIME)<I.GetEspera()){
			tecla = QueTeclaHayPulsada();		
			I.Pieza(x,y,p);		
			if (tecla == SDLK_DOWN ){
				
				if (fil+p.FilPieza()<Ta.FilTablero() && Ta.Encaja(fil+1,col,p)){//Limite del tablero
					fil++;
					x=x+20;
					DesactivarDibujo();
					LimpiarVentana();
					Pintar (I,Ta,C,T,N,L,P,E);
					I.Estado(E, "Jugando..");
					I.Lineas(L,s1);
					I.Piezas(P,s);						
					I.Pieza(x,y,p);
					I.Nivel(N,s3);
					ActivarDibujo();
				}
				else{
					Ta.SetTablero(fil,col,p);
					fin = true;
				}
			}
			if (tecla == SDLK_LEFT ){
				if (col!=0 && fil+p.FilPieza()<Ta.FilTablero() && Ta.Encaja(fil+1,col-1,p) ){
					col--;
					y=y-20;
					DesactivarDibujo();
					LimpiarVentana();
					Pintar (I,Ta,C,T,N,L,P,E);
					I.Pieza(x,y,p);
					I.Estado(E, "Jugando..");
					I.Lineas(L,s1);
					I.Piezas(P,s);	
					I.Nivel(N,s3);
					ActivarDibujo();

				}
			}
			if (tecla == SDLK_RIGHT){
				if ((col+(p.ColPieza())!=Ta.ColTablero()) && fil+p.FilPieza()<Ta.FilTablero() && Ta.Encaja(fil+1,col+1,p)){
					col++;
					y=y+20;
					DesactivarDibujo();
					LimpiarVentana();
					Pintar (I,Ta,C,T,N,L,P,E);
					I.Pieza(x,y,p);
					I.Estado(E, "Jugando..");
					I.Lineas(L,s1);
					I.Piezas(P,s);						
					I.Nivel(N,s3);
					ActivarDibujo();

				}
			}
			if (tecla == SDLK_q){
				pieza aux;
				aux=p;
				aux.RotarPiezaIzq();
				if ((col+(aux.ColPieza()-1)<=Ta.ColTablero()-1)&&(fil+aux.FilPieza()-1<=Ta.FilTablero()-1)){
					p=aux;
					DesactivarDibujo();
					LimpiarVentana();
					Pintar (I,Ta,C,T,N,L,P,E);
					I.Pieza(x,y,p);
					I.Estado(E, "Jugando..");
					I.Lineas(L,s1);
					I.Piezas(P,s);	
					I.Nivel(N,s3);
					ActivarDibujo();

				}
			}
			if (tecla == SDLK_w){
				pieza aux2;
				aux2=p;
				aux2.RotarPiezaDer();
				if ((col+(aux2.ColPieza()-1)<=Ta.ColTablero()-1)&&(fil+aux2.FilPieza()-1<=Ta.FilTablero()-1)){
					DesactivarDibujo();
					LimpiarVentana();
					p=aux2;
					DesactivarDibujo();
					LimpiarVentana();
					Pintar (I,Ta,C,T,N,L,P,E);
					I.Pieza(x,y,p);
					I.Estado(E, "Jugando..");
					I.Lineas(L,s1);
					I.Piezas(P,s);	
					I.Nivel(N,s3);
					ActivarDibujo();
				}
			}
			if (fil+p.FilPieza()==Ta.FilTablero() && Ta.Encaja(fil,col,p)){
				Ta.SetTablero(fil,col,p);
				fin = true;
			}
			else if (!Ta.Encaja(fil+1,col,p)){
				Ta.SetTablero(fil,col,p);
				fin = true;
			}
		}
	}
	DesactivarDibujo();
}
void Pintar(interfaz &I, tablero &Ta, cola_piezas &C,marcador &T, marcador &N, marcador &L, marcador &P, marcador &E){
	I.Tablero(Ta);
	T.PintarMarcador();
	N.PintarMarcador();
	L.PintarMarcador();
	E.PintarMarcador();
	P.PintarMarcador();
	I.Titulo(T);		
	I.Cola(C);	
}

