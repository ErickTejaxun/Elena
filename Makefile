PROJECT_ROOT = $(dir $(abspath $(lastword $(MAKEFILE_LIST))))

all:	Elena

OBJ = ./dist/parser.o ./dist/scanner.o 

Elena : $(OBJ)     #segunda fase de la tradicción. Generación del código ejecutable 
	cp -r ./src ./dist	
	cd dist		
	g++ -o Elena $(OBJ)

./dist/parser.o : ./dist/parser.c        #primera fase de la traducción del analizador sintáctico
	g++ -c -o ./dist/parser.o  ./dist/parser.c 
	
./dist/scanner.o : ./dist/lex.yy.c		#primera fase de la traducción del analizador léxico	
	g++ -c -o ./dist/scanner.o  ./dist/lex.yy.c -I./dist/parser.h	

./dist/parser.c :       #obtenemos el analizador sintáctico en C
	bison -d -v -o ./dist/parser.c ./dist/parser.y 	

./dist/lex.yy.c: 	#obtenemos el analizador léxico en C
	flex  --outfile=./dist/lex.yy.c ./dist/scanner.l

prueba: 
	Elena ./archivos-prueba/Gala_factorial.gdl salida.cpp

clean : 
	rm -f  ./dist/*.c ./dist/*.o ./dist/*.h ./dist/*.output	
	rm -f ./dist/*.y ./dist/*.l ./dist/*.cpp