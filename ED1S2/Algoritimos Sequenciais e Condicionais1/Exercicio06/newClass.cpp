#include "newClass.h"
#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;

newClass::newClass() {
}

newClass::newClass(const newClass& orig) {
}

newClass::~newClass() {
}

void newClass::input(){   
    cout <<"Informe o tempo em segundos: "<<endl;
    cin >> s;
}

float newClass::calc(){
    h = s/3600;
    m = s/60;
    cout <<"O tempo do evento: "<<endl;
    cout <<"em horas: "<<h<<endl;
    cout <<"em minutos: "<<m<<endl;
    cout <<"em segundos: "<<s<<endl;
    
}

