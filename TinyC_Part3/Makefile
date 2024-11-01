YACC_FILE = "tinyC3_22CS10058_22CS10063.y"
LEX_FILE = "tinyC3_22CS10058_22CS10063.l"
C_FILE = "tinyC3_22CS10058_22CS10063.cxx"
INPUT_FILE = "input_22CS10058_22CS10063.c"
OUTPUT_FILE = "output_22CS10058_22CS10063.txt"

all:
	yacc -d ${YACC_FILE}
	lex ${LEX_FILE}
	g++ ${C_FILE}

run:
	./a.exe < ${INPUT_FILE}

clean:
	rm -f lex.yy.c y.tab.c y.tab.h a.out a.exe ${OUTPUT_FILE}