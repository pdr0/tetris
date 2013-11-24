SRC = src
INC = include
OBJ = obj
BIN = bin
LIB = lib

CXX = g++
CPPFLAGS = -Wall -g -I../graficos/include -Iinclude -c 
LDFLAGS = -Llib -L../graficos/lib -ltetris -lgraficos -lSDL -lSDL_gfx -lSDL_ttf -lfreetype 

# ************ Objetivos principales ************
all : $(BIN)/tetris $(OBJ)/imagen.o $(OBJ)/matriz.o $(OBJ)/pieza.o $(OBJ)/vpieza.o $(OBJ)/tablero.o $(OBJ)/marcador.o $(OBJ)/bolsa_piezas.o $(OBJ)/cola_piezas.o $(OBJ)/interfaz.o $(LIB)/libtetris.a 

# ************ Bibliotecas ************
$(LIB)/libtetris.a : $(OBJ)/pieza.o $(OBJ)/matriz.o $(OBJ)/imagen.o $(OBJ)/marcador.o $(OBJ)/tablero.o $(OBJ)/vpieza.o $(OBJ)/bolsa_piezas.o $(OBJ)/cola_piezas.o $(OBJ)/interfaz.o
	ar -rvs $(LIB)/libtetris.a $(OBJ)/pieza.o $(OBJ)/matriz.o $(OBJ)/imagen.o $(OBJ)/vpieza.o $(OBJ)/marcador.o $(OBJ)/tablero.o $(OBJ)/bolsa_piezas.o $(OBJ)/cola_piezas.o $(OBJ)/interfaz.o
	
# ************ Compilación de módulos ************
$(OBJ)/matriz.o : $(SRC)/matriz.cpp $(INC)/matriz.h
	$(CXX) $(CPPFLAGS) $(SRC)/matriz.cpp -o $(OBJ)/matriz.o
	
$(OBJ)/imagen.o : $(SRC)/imagen.cpp $(INC)/imagen.h  
	$(CXX) $(CPPFLAGS) $(SRC)/imagen.cpp -o $(OBJ)/imagen.o
	
$(OBJ)/pieza.o : $(SRC)/pieza.cpp $(INC)/pieza.h $(INC)/imagen.h $(INC)/matriz.h
	$(CXX) $(CPPFLAGS) $(SRC)/pieza.cpp -o $(OBJ)/pieza.o
	
$(OBJ)/vpieza.o : $(SRC)/vpieza.cpp $(INC)/vpieza.h $(INC)/pieza.h
	$(CXX) $(CPPFLAGS) $(SRC)/vpieza.cpp -o $(OBJ)/vpieza.o  
	
$(OBJ)/marcador.o : $(SRC)/marcador.cpp $(INC)/marcador.h 
	$(CXX) $(CPPFLAGS) $(SRC)/marcador.cpp -o $(OBJ)/marcador.o
	
$(OBJ)/tablero.o : $(SRC)/tablero.cpp $(INC)/tablero.h $(INC)/matriz.h $(INC)/pieza.h
	$(CXX) $(CPPFLAGS) $(SRC)/tablero.cpp -o $(OBJ)/tablero.o
	
$(OBJ)/bolsa_piezas.o : $(SRC)/bolsa_piezas.cpp $(INC)/bolsa_piezas.h $(INC)/vpieza.h 
	$(CXX) $(CPPFLAGS) $(SRC)/bolsa_piezas.cpp -o $(OBJ)/bolsa_piezas.o
	
$(OBJ)/cola_piezas.o : $(SRC)/cola_piezas.cpp $(INC)/cola_piezas.h $(INC)/vpieza.h 
	$(CXX) $(CPPFLAGS) $(SRC)/cola_piezas.cpp -o $(OBJ)/cola_piezas.o
	
$(OBJ)/interfaz.o : $(SRC)/interfaz.cpp $(INC)/interfaz.h $(INC)/pieza.h $(INC)/cola_piezas.h  $(INC)/tablero.h $(INC)/marcador.h 
	$(CXX) $(CPPFLAGS) $(SRC)/interfaz.cpp -o $(OBJ)/interfaz.o
	
$(OBJ)/tetris.o : $(SRC)/tetris.cpp $(INC)/pieza.h $(INC)/matriz.h $(INC)/imagen.h $(INC)/marcador.h $(INC)/tablero.h $(INC)/vpieza.h $(INC)/bolsa_piezas.h $(INC)/cola_piezas.h $(INC)/interfaz.h 
	$(CXX) $(CPPFLAGS) $(SRC)/tetris.cpp -o $(OBJ)/tetris.o

# ************ Enlazado y creación de ejecutables ************
tetris : $(BIN)/tetris
$(BIN)/tetris : $(OBJ)/tetris.o $(OBJ)/pieza.o $(OBJ)/matriz.o $(OBJ)/imagen.o $(OBJ)/vpieza.o $(OBJ)/marcador.o $(OBJ)/tablero.o $(OBJ)/bolsa_piezas.o $(OBJ)/cola_piezas.o $(OBJ)/interfaz.o $(LIB)/libtetris.a
	$(CXX) -o $(BIN)/tetris $(OBJ)/tetris.o $(LDFLAGS)

# ************ Limpieza ************
clean :
	-rm $(OBJ)/* $(SRC)/*~ $(INC)/*~ ./*~

mrproper : clean
	-rm $(BIN)/* doc/html/*
