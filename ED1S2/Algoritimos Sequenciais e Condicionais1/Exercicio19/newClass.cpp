

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
    cout <<"Qual tipo de media voce deseja?"<<endl;
    cout <<"Digite 1 para: aritimetica"<<endl;
    cout <<"Digite 2 para: ponderada"<<endl;
    cout <<"Digite 3 para: harmonica"<<endl;
    cin >> tipo;
    
    while (tipo != 1 && tipo != 2 && tipo != 3){
    cout <<"Erro, tente novamente:"<<endl;
    cout <<"Digite 1 para: aritimetica"<<endl;
    cout <<"Digite 2 para: ponderada"<<endl;
    cout <<"Digite 3 para: harmonica"<<endl;
    cin >> tipo;    
    }
    cout <<"Informe a nota de A"<<endl;
    cin >> a;
    cout <<"Informe a nota de B"<<endl;
    cin >> b;
    cout <<"Informe a nota de C"<<endl;
    cin >> c;
}

float newClass::calc(){
    if (tipo == 1){
        media = (a+b+c)/3;
    }
    if (tipo == 2){
        media = (a*3+b*3+c*4)/(3+3+4);
    }
    if (tipo == 3){
        media = 3/((1/a)+(1/b)+(1/c));
    }
    
    cout <<"Media: "<<media<<endl;
}