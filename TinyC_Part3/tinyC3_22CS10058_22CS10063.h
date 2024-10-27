#ifndef _TRANSLATOR_h_
#define _TRANSLATOR_h_

#include <iostream>
#include <vector>
#include <stack>
#include <map>

using namespace std;

class Array;
class SymbolType;
class SymbolTableEntry;
class SymbolTable;
class Quad;

class Array {
    public:
        int size;
        int width;
        SymbolType type;

        Array(int, int, SymbolType);
};

class SymbolType {
    public:
        enum type_name {INT, FLOAT, CHAR, DOUBLE, ARRAY, POINTER, VOID} name;
        int width;
        Array * array;
        SymbolType* type;

        SymbolType(type_name name, int width, Array * array, SymbolType * type);
};

class Symbol {
    public:
        string name;
        SymbolType type;
        string init_val;
        int size;
        int offset;
        SymbolTable* nested;

        Symbol(string, SymbolType);
        Symbol::Symbol(string);
};

class SymbolTable {
    public:
        string name;
        vector<Symbol> symbols;
        map<string, Symbol *> symbol_instance;
        SymbolTable * parent;

        SymbolTable(string, SymbolTable *);
        void update();
        void print();
        Symbol * lookup(string);
        SymbolTable* gentemp();
};

class Quad {
    public:
        string op;
        string arg1;
        string arg2;
        string result;

        Quad(string, string, string, string);
};

class QuadArray {
    public:
        vector<Quad> quads;

        QuadArray();
        void emit();
        void print();
};

class Expression {
    public:
        Symbol * symbol;
        int type;
        vector<int> truelist, falselist;

        Expression(Symbol *, int);
};

int makelist();
int merge();
int backpatch();
int typecheck();
Symbol * gentemp();

#endif