mYACC_FILE = "tinyc_yacc.y"
LEX_FILE = "ass3_58_63.l"
C_FILE = "tinyc_parse_tree.c"
OUTPUT_FILE = "output.txt"

all:
	yacc -d ${mYACC_FILE}
	lex ${LEX_FILE}
	gcc ${C_FILE}

run:
	./a.exe < test.txt > ${OUTPUT_FILE}

clean:
	rm -f lex.yy.c y.tab.c y.tab.h a.out ${OUTPUT_FILE}