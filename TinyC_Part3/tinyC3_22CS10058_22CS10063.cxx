#include "y.tab.c"
#include "lex.yy.c"
#include "tinyC3_22CS10058_22CS10063.h"

SymbolType::SymbolType(type_name name, int size, SymbolType * array_elem_type): name(name), width(size), array_elem_type(array_elem_type) {
    if (size == -1) {
        switch(name) {
            case SymbolType::TYPE_INT: 
                this->width = INT_SIZE;
                break;
            case SymbolType::TYPE_FLOAT: 
                this->width = FLOAT_SIZE;
                break;
            case SymbolType::TYPE_CHAR:
                this->width = CHAR_SIZE;
                break;
            case SymbolType::TYPE_POINTER:
                this->width = POINTER_SIZE;
                break;
        }
    }
}

Array::Array(Symbol * symbol, Symbol * temp, SymbolType * elem): symbol(symbol), temp(temp), elem(elem) { }

Symbol::Symbol(string name, SymbolType * type): name(name), type(type), nested(NULL) { }

SymbolTable::SymbolTable(string name, SymbolTable * parent): name(name), parent(parent) { this->symbols.resize(0); }

Quad::Quad(string op, string arg1, string arg2, string result): op(op), arg1(arg1), arg2(arg2), result(result) {}

QuadArray::QuadArray() { this->quads.resize(0); }

int getlineno() {
    return three_address_code.quads.size();
}

Expression::Expression(Symbol * symbol, int type): symbol(symbol), type(type) { this->falselist.resize(0); this->truelist.resize(0); }

Symbol * SymbolTable::lookup(string id) {
    for (auto symbol: symbols) {
        if (symbol->name == id) return symbol;
    }

    Symbol * temp = NULL;
    if (parent != NULL) temp = parent->lookup(id);

    if (temp == NULL && this->name == current_table->name) {
        temp = new Symbol(id);
        symbols.push_back(temp);
        symbol_instance[id] = temp;
    }
    return temp;
}

string int_to_string(int x) {
    string a = "", temp = "0";

    return a;
}

int string_to_int(string s) {
    return 0;
}

void QuadArray::emit(Quad quad) {
    quads.push_back(quad);
}

Symbol * SymbolTable::gentemp(SymbolType::type_name type, int size) {
    string temp_var_name = "$";
    temp_var_name += int_to_string(temporary_count++);

    Symbol * temp = new Symbol(temp_var_name);
    temp->type = new SymbolType(type, size);
    symbols.push_back(temp);
    symbol_instance[temp_var_name] = temp;

    return temp;
}

void SymbolTable::print() {
    cout << "NAME: " << this->name << endl;;
    if (this->parent == NULL) cout << "PARENT: NONE"<< endl;
    else cout << "PARENT: " << this->parent->name << endl << endl;

    vector<SymbolTable *> nested_tables;

    for (auto x: this->symbols) {
        cout << x->name << " " << x->type->name << endl;
        if (x->nested != NULL) nested_tables.push_back(x->nested);
    }

    for (auto x: nested_tables) {cout << endl; x->print();}
}

vector<int> * makelist(int line) {
    vector<int> * temp = new vector<int>;
    temp->push_back(line);
    return temp;
}

vector<int> * merge(vector<int> * list1, vector<int> * list2) {
    vector<int> * temp = new vector<int>;
    for (auto x: *(list1)) temp->push_back(x);
    for (auto x: *(list2)) temp->push_back(x);
    return temp;
}

void backpatch(vector<int> * list1, int line) {
    for(auto x: *list1) {
        three_address_code.quads[x].result = int_to_string(line);
    }
    return;
}

int main() {
    yyparse();
    global_table->print();
    return 0;
}