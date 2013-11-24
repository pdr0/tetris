
all: 
	clear
	make -C graficos 
	make -C tetris

# ************ Limpieza ************
clean :
	make clean -C graficos 
	make clean -C tetris

mrproper : clean
	make mrproper -C graficos
	make mrproper -C tetris



