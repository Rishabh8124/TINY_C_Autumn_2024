#ifndef _TRANSLATOR_h_
#define _TRANSLATOR_h_

#include <iostream>
#include <vector>
#include <stack>
#include <map>
#include <iomanip>
#include <string>

using namespace std;

#define INT_SIZE 4
#define FLOAT_SIZE 8
#define CHAR_SIZE 1
#define POINTER_SIZE 4
#define VOID_SIZE 0

class Array;
class Symbol;
class SymbolType;
class SymbolTableEntry;
class SymbolTable;
class Quad;

class Array {
    public:

        Symbol * symbol;
        Symbol * temp;
        SymbolType * elem;

        Array(Symbol * = NULL, Symbol * = NULL, SymbolType * = NULL);
};

class Expression {
    public:
        Symbol * symbol;
        int type;
        vector<int> * truelist, * falselist;

        Expression(Symbol * = NULL, int = 0);
};

class SymbolType {
    public:
        enum type_name {TYPE_INT, TYPE_FLOAT, TYPE_CHAR, TYPE_STRING_LITERAL, TYPE_ARRAY, TYPE_POINTER, TYPE_VOID} name;
        int width;
        SymbolType * array_elem_type;

        SymbolType(type_name = TYPE_VOID, int = -1, SymbolType * = NULL);
        void print();
};

class Symbol {
    public:
        string name;
        SymbolType * type;
        string init_val;
        int size;
        int offset;
        SymbolTable* nested;

        Symbol(string = "", SymbolType * = NULL);
};

class SymbolTable {
    public:
        string name;
        vector<Symbol *> symbols;
        map<string, Symbol *> symbol_instance;
        SymbolTable * parent;

        SymbolTable(string = "", SymbolTable * = NULL);
        void update();
        void print();
        Symbol * lookup(string);
        Symbol * gentemp(SymbolType::type_name, int = 0);
};

class Quad {
    public:
        string op;
        string arg1;
        string arg2;
        string result;

        Quad(string="", string="", string="", string="");
};

class QuadArray {
    public:
        vector<Quad> quads;

        QuadArray();
        void emit(Quad);
        void print();
};

vector<int> * makelist(int);
vector<int> * merge(vector<int> *, vector<int> *);
void backpatch(vector<int> *, int);
int getlineno();
int typecheck();
string int_to_string(int x);
int string_to_int(string s);

#endif