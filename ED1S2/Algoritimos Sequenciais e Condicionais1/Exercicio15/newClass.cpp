
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
    cout <<"Digite um numero: "<<endl;
    cin >> n;
  
}

int newClass::calc(){
if (n % 2 == 0 ){
    cout <<"Numero PAR"<<endl;
}
else {
    cout <<"Numero IMPAR"<<endl;
}
if (n == 0){
    cout <<"Neutro"<<endl;
}
if (n > 0){
    cout <<"Positivo"<<endl;
}
if (n < 0){
    cout <<"Negativo"<<endl;
}
}
