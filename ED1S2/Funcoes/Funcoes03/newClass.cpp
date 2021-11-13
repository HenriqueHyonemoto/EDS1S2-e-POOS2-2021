
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
    int a;
    
    cout <<"Digite um numero inteiro: "<<endl;
    cin >>a;
    
    cout<<"Valor: "<<this->calcint(a)<<endl;
            
}

int newClass::calcint(int a){
    if (a > 0){
        return 1;    
    }
    if (a == 0){
        return 0;
    }
    if (a < 0){
        return -1;
    }
}
