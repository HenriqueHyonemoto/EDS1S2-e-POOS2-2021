
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
    cout <<"Informe seu saldo medio: "<<endl;
    cin >> saldo;
}

float newClass::calc(){
    if (saldo >= 0 && saldo <= 200){
        cout <<"Seu credito especial: 0.00 "<<endl;
    }
    if (saldo >= 201 && saldo <= 400){
        credito = saldo*0.20;
        cout <<"Seu credito especial: "<<credito<<endl;
    }
    if (saldo >= 401 && saldo <= 600){
        credito = saldo*0.30;
        cout <<"Seu credito especial: "<<credito<<endl;
    }
    if (saldo >= 601){
        credito = saldo*0.40;
        cout <<"Seu credito especial: "<<credito<<endl;
    }
}