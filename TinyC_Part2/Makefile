mYACC_FILE = "tinyc_yacc.y"
LEX_FILE = "ass3_58_63.l"
C_FILE = "tinyc_parse_tree.c"

all:
	bison -d ${mYACC_FILE}
	flex ${LEX_FILE}
	gcc ${C_FILE}

run :
	./a.exe < test.txt

clean:
	rm -f lex.yy.c y.tab.c y.tab.h a.out