
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
    cout<<"Digite sua idade em dias: "<<endl;
    cin >>idade;
}

float newClass::calc(){
    idadea = idade/365;
    idadem = idade/30;
    cout <<"Sua idade em anos: "<<idadea<<endl;
    cout <<"Sua idade em meses: "<<idadem<<endl;
    cout <<"Sua idade em dias: "<<idade<<endl;
}

