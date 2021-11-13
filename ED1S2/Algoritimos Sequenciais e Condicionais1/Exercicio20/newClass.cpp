
#include "newClass.h"
#include <cstdlib>
#include <iostream>

using namespace std;
newClass::newClass() {
}

newClass::newClass(const newClass& orig) {
}

newClass::~newClass() {
}

void newClass::input(){
cout <<"Digite o id do produto: "<<endl;
cin >> id;
while (id != "1001" && id != "1324" && id != "6548" && id != "0987" && id != "7623"){
    cout <<"id invalido, tente novamente: "<<endl;
    cout <<"Digite o id do produto: "<<endl;
    cin >> id;
}
cout <<"Digite a qtd do produto: "<<endl;
cin >> qtd;
}

float newClass::calc(){
if (id == "1001"){
    preco = qtd*5.32;    
    }
if (id == "1324"){
    preco = qtd*6.45;    
    }
if (id == "6548"){
    preco = qtd*2.37;    
    }
if (id == "0987"){
    preco = qtd*5.32;    
    }
if (id == "7623"){
    preco = qtd*6.45;    
    }
    cout <<"Preco: "<<preco<<endl;
}

