YACC_FILE = "tinyc_yacc.y"
LEX_FILE = "ass3_58_63.l"
C_FILE = "tinyc_parse_tree.c"

all:
	yacc -d ${YACC_FILE}
	lex ${LEX_FILE}
	gcc ${C_FILE}

run :
	./a.out < test.txt

clean:
	rm -f lex.yy.c y.tab.c y.tab.h a.out