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

Expression::Expression(Symbol * symbol, int type): symbol(symbol), type(type), truelist(new vector<int>), falselist(new vector<int>) { }

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
    string a = "", temp1 = "0";
    int t = x<0;
    if (t) { x *= -1; a = "-";}

    if (x == 0) return temp1;
    else {
        while(x) {
            string temp = " ";
            temp[0] = x%10+'0';
            a = temp + a;
            x /= 10;
        }

        return a;
    }
}

int string_to_int(string s) {
    int t = 0;
    if (s[0] == '-') {
        t = 1;
        s = s.substr(1, s.size()-1);
    }

    int ans = 0;
    for(auto i: s) ans = ans*10+(i-'0');
    if (t) ans *= -1;
    
    return ans;
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

void SymbolType::print() {
    switch (name) {
        case TYPE_INT: cout << "int"; break;
        case TYPE_FLOAT: cout << "float"; break;
        case TYPE_CHAR: cout << "char"; break;
        case TYPE_STRING_LITERAL: cout << "string"; break;
        case TYPE_POINTER: cout << "pointer("; this->array_elem_type->print(); cout << ")"; break;
        case TYPE_ARRAY: cout << "array("<< this->width << ", "; this->array_elem_type->print(); cout << ")"; break;
        case TYPE_VOID: cout << "void"; break;
    }

}

void SymbolTable::print() {
    cout << "NAME: " << this->name << endl;;
    if (this->parent == NULL) cout << "PARENT: NONE"<< endl;
    else cout << "PARENT: " << this->parent->name << endl << endl;

    vector<SymbolTable *> nested_tables;

    for (auto x: this->symbols) {
        cout << x->name << " ";
        x->type->print();
        cout << endl;
        if (x->nested != NULL) {nested_tables.push_back(x->nested);}
    }

    for (auto x: nested_tables) {cout << endl; x->print();}
}

void QuadArray::print() {
    int i = 0;
    for (auto x: quads) {
        i++;
        cout << i << " : " << x.op << " " << x.arg1 << " " << x.arg2 << " " << x.result << endl;
    }
}

vector<int> * makelist(int line) {
    vector<int> * temp = new vector<int>;
    temp->push_back(line);
    return temp;
}

vector<int> * merge(vector<int> * list1, vector<int> * list2) {
    vector<int> * temp;
    if (list1 == NULL && list2 == NULL) temp = NULL;
    else temp = new vector<int>;
    if (list1 != NULL) for (auto x: *(list1)) temp->push_back(x);
    if (list2 != NULL) for (auto x: *(list2)) temp->push_back(x);

    return temp;
}

void backpatch(vector<int> * list1, int line) {
    if (list1 == NULL) return;
    for(auto x: *list1) {
        three_address_code.quads[x].result = int_to_string(line+1);
    }
    return;
}

int main() {
    yyparse();
    global_table->print();
    cout << endl;
    three_address_code.print();
    return 0;
}