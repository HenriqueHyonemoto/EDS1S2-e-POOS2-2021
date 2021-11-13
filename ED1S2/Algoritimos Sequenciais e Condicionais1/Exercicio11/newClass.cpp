#include <cstdlib>
#include <iostream>
#include "newClass.h"

using namespace std;

newClass::newClass() {
}

newClass::newClass(const newClass& orig) {
}

newClass::~newClass() {
}

void newClass::input(){
    cout <<"Digite um valor para A: "<<endl;
    cin >> a;
    cout <<"Digite um valor para B: "<<endl;
    cin >> b;
    
}

int newClass::calc(){
    if (a % b == 0){
        cout <<"Sao multiplos"<<endl;
    }     
    else{
        cout <<"Nao sao multiplos"<<endl;
    }
}