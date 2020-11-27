PROJECT_ROOT = $(dir $(abspath $(lastword $(MAKEFILE_LIST))))

all:	Elena

OBJ = parser.o scanner.o 

Elena : $(OBJ)     #segunda fase de la tradicción. Generación del código ejecutable 
	g++ -o Elena $(OBJ)

parser.o : parser.c        #primera fase de la traducción del analizador sintáctico
	g++ -c -o parser.o  parser.c 
	
scanner.o : lex.yy.c		#primera fase de la traducción del analizador léxico
	g++ -c -o scanner.o  lex.yy.c 	

parser.c : parser.y       #obtenemos el analizador sintáctico en C
	bison -d -v parser.y -o parser.c	

lex.yy.c: scanner.l	#obtenemos el analizador léxico en C
	flex scanner.l

prueba: 
	./Elena ./archivos-prueba/Gala_factorial.gdl salida.cpp

clean : 
	rm  -f  *.c *.o 
	rm  parser.h Elena
	rm  parser.output