#include "interfaz.h"
#include "imagen.h"
#include <iostream>



using namespace std;
using namespace graficos;


interfaz::interfaz(){

}

interfaz::~interfaz(){

}
interfaz::interfaz(const interfaz &i){
	if (this != &i){
		this->semilla=i.semilla;
		this->espera=i.espera;
		this->num_lineas=i.num_lineas;
		this->num_piezas_cola=i.num_piezas_cola;
		this->num_imagenes=i.num_imagenes;
		for (int j=0; j<7; j++)
			this->imgs[j]=i.imgs[j];
	
//Tablero
		this->fil_t=i.fil_t;
		this->col_t=i.col_t;
		this->ancho_t=i.ancho_t;
		this->alto_t=i.alto_t;
		this->marco_t=i.marco_t;
		this->Rborde_t=i.Rborde_t;
		this->Gborde_t=i.Gborde_t;
		this->Bborde_t=i.Bborde_t;
		this->Rfondo_t=i.Rfondo_t;
		this->Gfondo_t=i.Gfondo_t;
		this->Bfondo_t=i.Bfondo_t;
//Configuración cola
		this->fil_c=i.fil_c;
		this->col_c=i.col_c;
		this->ancho_c=i.ancho_c;
		this->alto_c=i.alto_c;
		this->marco_c=i.marco_c;
		this->Rborde_c=i.Rborde_c;
		this->Gborde_c=i.Gborde_c;
		this->Bborde_c=i.Bborde_c;
		this->Rfondo_c=i.Rfondo_c;
		this->Gfondo_c=i.Gfondo_c;
		this->Bfondo_c=i.Bfondo_c;
//Marcador Titulo
		this->titulo=i.titulo;
		this->TLetraT=i.TLetraT;
		this->tam_titulo=i.tam_titulo;
		this->estilo_titulo=i.estilo_titulo;		
		this->Rletra_titulo=i.Rletra_titulo;
		this->Gletra_titulo=i.Gletra_titulo;
		this->Bletra_titulo=i.Bletra_titulo;

//Marcador Nivel
		this->nivel=i.nivel;
		this->tam_niv=i.tam_niv;
		this->estilo_niv=i.estilo_niv;
		this->Rletra_niv=i.Rletra_niv;
		this->Gletra_niv=i.Gletra_niv;
		this->Bletra_niv=i.Bletra_niv;

	
//Marcador Lineas
		this->lineas=i.lineas;
		this->tam_lin=i.tam_lin;
		this->estilo_lin=i.estilo_lin;
		this->Rletra_lin=i.Rletra_lin;
		this->Gletra_lin=i.Gletra_lin;
		this->Bletra_lin=i.Bletra_lin;
	
	
//Marcador Piezas
	
		this->piezas=i.piezas;
		this->tam_pzs=i.tam_pzs;
		this->estilo_pzs=i.estilo_pzs;	
		this->Rletra_pzs=i.Rletra_pzs;
		this->Gletra_pzs=i.Gletra_pzs;
		this->Bletra_pzs=i.Bletra_pzs;
		
		
//Marcador Estado

		this->e=i.e;
		this->Rletra_e=i.Rletra_e;
		this->Gletra_e=i.Gletra_e;
		this->Bletra_e=i.Bletra_e;
		this->tam_e=i.tam_e;
		this->estilo_e=i.estilo_e;

	

	}
}

interfaz& interfaz::operator=(const interfaz &i){
	if (this != &i){
		this->semilla=i.semilla;
		this->espera=i.espera;
		this->num_lineas=i.num_lineas;
		this->num_piezas_cola=i.num_piezas_cola;
		this->num_imagenes=i.num_imagenes;
		for (int j=0; j<7; j++)
			this->imgs[j]=i.imgs[j];
	
//Tablero
		this->fil_t=i.fil_t;
		this->col_t=i.col_t;
		this->ancho_t=i.ancho_t;
		this->alto_t=i.alto_t;
		this->marco_t=i.marco_t;
		this->Rborde_t=i.Rborde_t;
		this->Gborde_t=i.Gborde_t;
		this->Bborde_t=i.Bborde_t;
		this->Rfondo_t=i.Rfondo_t;
		this->Gfondo_t=i.Gfondo_t;
		this->Bfondo_t=i.Bfondo_t;
//Configuración cola
		this->fil_c=i.fil_c;
		this->col_c=i.col_c;
		this->ancho_c=i.ancho_c;
		this->alto_c=i.alto_c;
		this->marco_c=i.marco_c;
		this->Rborde_c=i.Rborde_c;
		this->Gborde_c=i.Gborde_c;
		this->Bborde_c=i.Bborde_c;
		this->Rfondo_c=i.Rfondo_c;
		this->Gfondo_c=i.Gfondo_c;
		this->Bfondo_c=i.Bfondo_c;
//Marcador Titulo
		this->titulo=i.titulo;
		this->TLetraT=i.TLetraT;
		this->tam_titulo=i.tam_titulo;
		this->estilo_titulo=i.estilo_titulo;		
		this->Rletra_titulo=i.Rletra_titulo;
		this->Gletra_titulo=i.Gletra_titulo;
		this->Bletra_titulo=i.Bletra_titulo;

//Marcador Nivel
		this->nivel=i.nivel;
		this->tam_niv=i.tam_niv;
		this->estilo_niv=i.estilo_niv;
		this->Rletra_niv=i.Rletra_niv;
		this->Gletra_niv=i.Gletra_niv;
		this->Bletra_niv=i.Bletra_niv;

//Marcador Lineas
		this->lineas=i.lineas;
		this->Rletra_lin=i.Rletra_lin;
		this->Gletra_lin=i.Gletra_lin;
		this->Bletra_lin=i.Bletra_lin;
		this->tam_lin=i.tam_lin;
		this->estilo_lin=i.estilo_lin;

//Marcador Piezas

		this->piezas=i.piezas;
		this->Rletra_pzs=i.Rletra_pzs;
		this->Gletra_pzs=i.Gletra_pzs;
		this->Bletra_pzs=i.Bletra_pzs;
		this->tam_pzs=i.tam_pzs;
		this->estilo_pzs=i.estilo_pzs;	
	
//Marcador Estado

		this->e=i.e;
		this->tam_e=i.tam_e;
		this->estilo_e=i.estilo_e;
		this->Rletra_e=i.Rletra_e;
		this->Gletra_e=i.Gletra_e;
		this->Bletra_e=i.Bletra_e;



	}
	return *this;
}
//////

void interfaz::SetSemilla(int x){
	this->semilla=x;
}
int interfaz::GetSemilla(){
	return this->semilla;
}
void interfaz::SetEspera(int x){
	this->espera=x;
}
int interfaz::GetEspera(){
	return this->espera;
}
void interfaz::SetNumLineas(int x){
	this->num_lineas=x;
}
int interfaz::GetNumLineas(){
	return this->num_lineas;
}
void interfaz::SetNumPzsCol(int x){
	this->num_piezas_cola=x;
}
int interfaz::GetNumPzsCol(){
	return this->num_piezas_cola;
}
void interfaz::SetNumImgs(int x){
	this->num_imagenes=x;
}
int interfaz::GetNumImgs(){
	return this->num_imagenes;
}
void interfaz::SetDirImgs(string dir){
	this->imagenes=dir;
}
string interfaz::GetDirImgs(){
	return this->imagenes;
}

void interfaz::SetImgs(int pos, string s){
	const char *c;
	c=s.c_str();
	this->imgs[pos].Cargar(c);
}
imagen interfaz::GetImgs(int pos)const{
	return this->imgs[pos];
}

//Tablero
void interfaz::SetFilT(int x){
	this->fil_t=x;
}
int interfaz::GetFilT(){
	return this->fil_t;
}
void interfaz::SetColT(int x){
	this->col_t=x;
}
int interfaz::GetColT(){
	return this->col_t;
}

void interfaz::SetAnchoT(int x){
	this->ancho_t=x;
}
int interfaz::GetAnchoT(){
	return this->ancho_t;
}
void interfaz::SetAltoT(int x){
	this->alto_t=x;
}
int interfaz::GetAltoT(){
	return this->alto_t;
}
void interfaz::SetMarcoT(int x){
	this->marco_t=x;
}
int interfaz::GetMarcoT(){
	return this->marco_t;
}
void interfaz::SetRBordeT(int x){
	this->Rborde_t=x;
}
int interfaz::GetRBordeT(){
	return this->Rborde_t;
}
void interfaz::SetGBordeT(int x){
	this->Gborde_t=x;
}
int interfaz::GetGBordeT(){
	return this->Gborde_t;
}
void interfaz::SetBBordeT(int x){
	this->Bborde_t=x;
}
int interfaz::GetBBordeT(){
	return this->Bborde_t;
}
void interfaz::SetRFondoT(int x){
	this->Rfondo_t=x;
}
int interfaz::GetRFondoT(){
	return this->Rfondo_t;
}
void interfaz::SetGFondoT(int x){
	this->Gfondo_t=x;
}
int interfaz::GetGFondoT(){
	return this->Gfondo_t;
}
void interfaz::SetBFondoT(int x){
	this->Bfondo_t=x;
}
int interfaz::GetBFondoT(){
	return this->Bfondo_t;
}

//Configuración cola
void interfaz::SetFilC(int x){
	this->fil_c=x;
}
int interfaz::GetFilC(){
	return this->fil_c;
}
void interfaz::SetColC(int x){
	this->col_c=x;
}
int interfaz::GetColC(){
	return this->col_c;
}

void interfaz::SetAnchoC(int x){
	this->ancho_c=x;
}
int interfaz::GetAnchoC(){
	return this->ancho_c;
}
void interfaz::SetAltoC(int x){
	this->alto_c=x;
}
int interfaz::GetAltoC(){
	return this->alto_c;
}
void interfaz::SetMarcoC(int x){
	this->marco_c=x;
}
int interfaz::GetMarcoC(){
	return this->marco_c;
}
void interfaz::SetRBordeC(int x){
	this->Rborde_c=x;
}
int interfaz::GetRBordeC(){
	return this->Rborde_c;
}
void interfaz::SetGBordeC(int x){
	this->Gborde_c=x;
}
int interfaz::GetGBordeC(){
	return this->Gborde_c;
}
void interfaz::SetBBordeC(int x){
	this->Bborde_c=x;
}
int interfaz::GetBBordeC(){
	return this->Bborde_c;
}
void interfaz::SetRFondoC(int x){
	this->Rfondo_c=x;
}
int interfaz::GetRFondoC(){
	return this->Rfondo_c;
}
void interfaz::SetGFondoC(int x){
	this->Gfondo_c=x;
}
int interfaz::GetGFondoC(){
	return this->Gfondo_c;
}
void interfaz::SetBFondoC(int x){
	this->Bfondo_c=x;
}
int interfaz::GetBFondoC(){
	return this->Bfondo_c;
}

//Marcador Titulo
void interfaz::SetTitulo(string x){
	this->titulo=x;
}
string interfaz::GetTituloT(){
	return this->titulo;
}
void interfaz::SetTLetraT(string x){
	this->TLetraT=x;
}
string interfaz::GetTLetraT(){
	return this->TLetraT;
}
void interfaz::SetTamTitulo(int x){
	this->tam_titulo=x;
}
int interfaz::GetTamTitulo(){
	return this->tam_titulo;
}
void interfaz::SetEstiloTitulo(int x){
	this->estilo_titulo=x;
}

int interfaz::GetEstiloTitulo(){
	return this->estilo_titulo;
}

void interfaz::SetRTitulo(int x){
	this->Rletra_titulo=x;
}
int interfaz::GetRTitulo(){
	return this->Rletra_titulo;
}
void interfaz::SetGTitulo(int x){
	this->Gletra_titulo=x;
}
int interfaz::GetGTitulo(){
	return this->Gletra_titulo;
}
void interfaz::SetBTitulo(int x){
	this->Bletra_titulo=x;
}
int interfaz::GetBTitulo(){
	return this->Bletra_titulo;
}

//Marcador Nivel

void interfaz::SetTLetraN(string x){
	this->nivel=x;
}
string interfaz::GetTLetraN(){
	return this->nivel;
}
void interfaz::SetTamN(int x){
	this->tam_niv=x;
}
int interfaz::GetTamN(){
	return this->tam_niv;
}
void interfaz::SetEstiloN(int x){
	this->estilo_niv=x;
}
int interfaz::GetEstiloN(){
	return this->estilo_niv;
}
void interfaz::SetRNivel(int x){
	this->Rletra_niv=x;
}
int interfaz::GetRNivel(){
	return this->Rletra_niv;
}
void interfaz::SetGNivel(int x){
	this->Gletra_niv=x;
}
int interfaz::GetGNivel(){
	return this->Gletra_niv;
}
void interfaz::SetBNivel(int x){
	this->Bletra_niv=x;
}
int interfaz::GetBNivel(){
	return this->Bletra_niv;
}


//Marcador Lineas
void interfaz::SetTLetraL(string x){
	this->lineas=x;
}
string interfaz::GetTLetraL(){
	return this->lineas;
}
void interfaz::SetTamL(int x){
	this->tam_niv=x;
}
int interfaz::GetTamL(){
	return this->tam_niv;
}
void interfaz::SetEstiloL(int x){
	this->estilo_niv=x;
}
int interfaz::GetEstiloL(){
	return this->estilo_niv;
}
void interfaz::SetRLineas(int x){
	this->Rletra_lin=x;
}
int interfaz::GetRLineas(){
	return this->Rletra_lin;
}
void interfaz::SetGLineas(int x){
	this->Gletra_lin=x;
}
int interfaz::GetGLineas(){
	return this->Gletra_lin;
}
void interfaz::SetBLineas(int x){
	this->Bletra_lin=x;
}
int interfaz::GetBLineas(){
	return this->Bletra_lin;
}


//Marcador Piezas

void interfaz::SetTLetraP(string x){
	this->piezas=x;
}
string interfaz::GetTLetraP(){
	return this->piezas;
}
void interfaz::SetTamP(int x){
	this->tam_pzs=x;
}
int interfaz::GetTamP(){
	return this->tam_pzs;
}
void interfaz::SetEstiloP(int x){
	this->estilo_pzs=x;
}
int interfaz::GetEstiloP(){
	return this->estilo_pzs;
}
void interfaz::SetRPiezas(int x){
	this->Rletra_pzs=x;
}
int interfaz::GetRPiezas(){
	return this->Rletra_pzs;
}
void interfaz::SetGPiezas(int x){
	this->Gletra_pzs=x;
}
int interfaz::GetGPiezas(){
	return this->Gletra_pzs;
}
void interfaz::SetBPiezas(int x){
	this->Bletra_pzs=x;
}
int interfaz::GetBPiezas(){
	return this->Bletra_pzs;
}

//Marcador Estado

void interfaz::SetTLetraE(string x){
	this->e=x;
}
string interfaz::GetTLetraE(){
	return this->e;
}
void interfaz::SetTamE(int x){
	this->tam_e=x;
}
int interfaz::GetTamE(){
	return this->tam_e;
}
void interfaz::SetEstiloE(int x){
	this->estilo_e=x;
}
int interfaz::GetEstiloE(){
	return this->estilo_e;
}
void interfaz::SetREstado(int x){
	this->Rletra_e=x;
}
int interfaz::GetREstado(){
	return this->Rletra_e;
}
void interfaz::SetGEstado(int x){
	this->Gletra_e=x;
}
int interfaz::GetGEstado(){
	return this->Gletra_e;
}
void interfaz::SetBEstado(int x){
	this->Bletra_e=x;
}
int interfaz::GetBEstado(){
	return this->Bletra_e;
}



//////////////////////

void interfaz::Pieza(int fil, int col, const pieza &p){
	int filp=fil;//Coordenadas
	int colp=col;
	if (p.FilPieza() == 4){
		for (int k=0; k<4; k++){
			if (p.Get(k,0)==1){
				this->imgs[0].Dibujar(colp,filp);
			}
			if (p.Get(k,0)==2){
				this->imgs[1].Dibujar(colp,filp);
			}
			if (p.Get(k,0)==3){
				this->imgs[2].Dibujar(colp,filp);
			}
			if (p.Get(k,0)==4){
				this->imgs[3].Dibujar(colp,filp);
			}
			if (p.Get(k,0)==5){
				this->imgs[4].Dibujar(colp,filp);
			}
			if (p.Get(k,0)==6){
				this->imgs[5].Dibujar(colp,filp);
			}
			if (p.Get(k,0)==7){
				this->imgs[6].Dibujar(colp,filp);
			}
			filp=filp+20;
		}
			
	}
	if (p.ColPieza() == 4){
		for (int k=0; k<4; k++){
			if (p.Get(0,k)==1){
				this->imgs[0].Dibujar(colp,filp);
			}
			if (p.Get(0,k)==2){
				this->imgs[1].Dibujar(colp,filp);
			}
			if (p.Get(0,k)==3){
				this->imgs[2].Dibujar(colp,filp);
			}
			if (p.Get(0,k)==4){
				this->imgs[3].Dibujar(colp,filp);
			}
			if (p.Get(0,k)==5){
				this->imgs[4].Dibujar(colp,filp);
			}
			if (p.Get(0,k)==6){
				this->imgs[5].Dibujar(colp,filp);
			}
			if (p.Get(0,k)==7){
				this->imgs[6].Dibujar(colp,filp);
			}
			colp=colp+20;
		}
			
	}	
	if (p.FilPieza() != 4 && p.ColPieza()!=4){
		for (int i=0; i<p.FilPieza(); i++){
			colp=col;
			if (i>0)
				filp=filp+20;
			for (int j=0; j<p.ColPieza(); j++){
				if (p.Get(i,j)==1){
					this->imgs[0].Dibujar(colp,filp);
				}
				if (p.Get(i,j)==2){
					this->imgs[1].Dibujar(colp,filp);
				//	this->GetImgs(1).Liberar();
				}
				if (p.Get(i,j)==3){
					this->imgs[2].Dibujar(colp,filp);
				//	this->GetImgs(2).Liberar();			
				}
				if (p.Get(i,j)==4){
					this->imgs[3].Dibujar(colp,filp);
					//this->GetImgs(3).Liberar();
				}
				if (p.Get(i,j)==5){
					this->imgs[4].Dibujar(colp,filp);
					//this->GetImgs(4).Liberar();			
				}
				if (p.Get(i,j)==6){
					this->imgs[5].Dibujar(colp,filp);
					//this->GetImgs(5).Liberar();			
				}
				if (p.Get(i,j)==7){
					this->imgs[6].Dibujar(colp,filp);
					//this->GetImgs(6).Liberar();			
				}
				colp=colp+20;
			}
		}
	}	

}	

void interfaz::Tablero(const tablero &t){
	int posi=this->fil_t;
	int posj=this->col_t;
	int ancho=this->ancho_t;
	int alto=this->alto_t;
	for (int i=0; i<this->marco_t; i++){
		Rectangulo(posj,posi,ancho,alto,this->Rborde_t,this->Gborde_t,this->Bborde_t);
			posi++;
			posj++;
			ancho--;
			alto--;
	}
	RectanguloR(posj,posi,ancho,alto,this->Rfondo_t,this->Gfondo_t,this->Bfondo_t);
	//Pinta las piezas que haya dentro del tablero;
	for (int i=0; i<t.FilTablero(); i++){
		posj=this->col_t+this->marco_t;
		if (i>0)
			posi=posi+20;
		for (int j=0; j<t.ColTablero(); j++){
			if (t.GetTablero(i,j)==1){
				this->imgs[0].Dibujar(posj,posi);
			}
			if (t.GetTablero(i,j)==2){
				this->imgs[1].Dibujar(posj,posi);			
			}
			if (t.GetTablero(i,j)==3){
				this->imgs[2].Dibujar(posj,posi);			
			}
			if (t.GetTablero(i,j)==4){
				this->imgs[3].Dibujar(posj,posi);			
			}
			if (t.GetTablero(i,j)==5){
				this->imgs[4].Dibujar(posj,posi);			
			}
			if (t.GetTablero(i,j)==6){
				this->imgs[5].Dibujar(posj,posi);			
			}
			if (t.GetTablero(i,j)==7){
				this->imgs[6].Dibujar(posj,posi);			
			}																			
			posj=posj+20;
		}
	}	
	
}

//Titulo
void interfaz::Titulo(const marcador &m){
	GRF_Fuente tletra;
	const char *cadena;
	const char *fuente;
	string s=this->TLetraT;
	string s1=this->GetTituloT();
	fuente = s.c_str();
	cadena=s1.c_str();
//	tletra = CargarFuente ("./tetris/data/fuentes/Astro.ttf",25);
	tletra = CargarFuente(fuente,this->GetTamTitulo());
	EscribirTexto(m.GetCol()+40,m.GetFil()+40,cadena,tletra,this->Rletra_titulo,this->Gletra_titulo,this->Bletra_titulo);
	LiberarFuente(tletra);
}

//Nivel

void interfaz::Nivel(const marcador &m, string s1){
	GRF_Fuente tletra;
	const char *cadena;
	const char *fuente;
	string s=this->nivel;
	fuente = s.c_str();
	cadena=s1.c_str();
	tletra = CargarFuente(fuente,this->GetTamN());
	EscribirTexto(m.GetCol()+40,m.GetFil()+40,cadena,tletra,this->Rletra_titulo,this->Gletra_titulo,this->Bletra_titulo);
	LiberarFuente(tletra);
}
//Lineas
void interfaz::Lineas(const marcador &m, string s1){
	GRF_Fuente tletra;
	const char *cadena;
	const char *fuente;
	string s=this->lineas;
	fuente = s.c_str();
	cadena=s1.c_str();
	tletra = CargarFuente(fuente,this->GetTamN());
	EscribirTexto(m.GetCol()+40,m.GetFil()+40,cadena,tletra,this->Rletra_niv,this->Gletra_niv,this->Bletra_niv);
	LiberarFuente(tletra);
}
//Piezas
void interfaz::Piezas(const marcador &m, string s1){
	GRF_Fuente tletra;
	const char *cadena;
	const char *fuente;
	string s=this->piezas;
	fuente = s.c_str();
	cadena=s1.c_str();
	tletra = CargarFuente(fuente,this->GetTamP());
	EscribirTexto(m.GetCol()+40,m.GetFil()+40,cadena,tletra,this->Rletra_pzs,this->Gletra_pzs,this->Bletra_pzs);
	LiberarFuente(tletra);
}

//Estado
void interfaz::Estado(const marcador &m, string s1){
	GRF_Fuente tletra;
	const char *cadena;
	const char *fuente;
	string s=this->e;
	fuente = s.c_str();
	cadena=s1.c_str();
	tletra = CargarFuente(fuente,this->GetTamN());
	EscribirTexto(m.GetCol()+40,m.GetFil()+40,cadena,tletra,this->Rletra_e,this->Gletra_e,this->Bletra_e);
	LiberarFuente(tletra);
}

void interfaz::Cola(const cola_piezas &c){
	int fil=this->fil_c;
	int col=this->col_c;
	int ancho = this->ancho_c+col;
	int alto = this->alto_c;
	for (int i=0; i<this->marco_c; i++){
		Rectangulo(col,fil,ancho,alto,this->Rborde_c,this->Gborde_c,this->Bborde_c);
			fil++;
			col++;
			ancho--;
			alto--;
	}
	RectanguloR(col,fil,ancho,alto,this->Rfondo_c,this->Gfondo_c,this->Bfondo_c);
	fil=fil+10;
	col=col+10;
	for (int i=0; i<4; i++){
		this->Pieza(fil,col,c.Get(i));
		fil=fil+100;
	}
}


