
#include "newClass.h"
#include <iostream>
#include <cstdlib>

using namespace std;
newClass::newClass() {
}

newClass::newClass(const newClass& orig) {
}

newClass::~newClass() {
}

void newClass::input(){
    cout <<"Informe custo de fabrica: "<<endl;
    cin >> custofabrica;
}

float newClass::calc(){
    custoconsumidor = custofabrica+(custofabrica*0.45)+(custofabrica*0.28);
    cout <<"O valor do carro para o consumidor: "<<custoconsumidor<<endl;     
}

