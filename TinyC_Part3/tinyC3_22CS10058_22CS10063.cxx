#include "tinyC3_22CS10058_22CS10063.h"
// #include "y.tab.c"
// #include "lex.yy.c"

SymbolTable * global_table = new SymbolTable("global");
SymbolTable * current_table = global_table;
stack<SymbolTable *> symboltables;

QuadArray three_address_code;
int temporary_count, line_count;

SymbolType::SymbolType(type_name name = VOID, int width = 0, Array * array = NULL, SymbolType * type = NULL): name(name), width(width), array(array), type(type) { }

Array::Array(int size, int width, SymbolType type): size(size), width(width), type(type) {}

Symbol::Symbol(string name, SymbolType type): name(name), type(type) { }
Symbol::Symbol(string name): name(name) { }

SymbolTable::SymbolTable(string name, SymbolTable * parent = NULL): name(name), parent(parent) { this->symbols.resize(0); }

Quad::Quad(string op, string arg1, string arg2, string result): op(op), arg1(arg1), arg2(arg2), result(result) {}

QuadArray::QuadArray() { this->quads.resize(0); }

Expression::Expression(Symbol * symbol = NULL, int type = -1): symbol(symbol), type(type) { this->falselist.resize(0); this->truelist.resize(0); }

Symbol * SymbolTable::lookup(string id) {
    for (auto symbol: symbols) {
        if (symbol.name == id) return &symbol;
    }

    Symbol * temp = NULL;
    if (parent != NULL) temp = parent->lookup(id);

    if (temp == NULL && this->name == current_table->name) {
        temp = new Symbol(id);
        symbols.push_back(*(temp));
        symbol_instance[id] = temp;
    }

    return temp;
}