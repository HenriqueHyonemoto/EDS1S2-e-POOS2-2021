
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
    cout << "Insira o primeiro numero: " << endl;
    cin >> this-> x;
    cout << "Insira o segundo numero: " << endl;
    cin >> this-> y;
    cout <<"maior: "<< this->calcMaior()<< endl;
   }

int newClass::calcMaior(){
if (this->x > this->y){
    this->maior = this->x;
}
else if (this->y > this->x){
    this->maior = this->y;  
}
return this->maior;

}   