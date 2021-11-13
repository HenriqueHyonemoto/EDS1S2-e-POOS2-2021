
#include "newClass.h"
#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

newClass::newClass() {
}

newClass::newClass(const newClass& orig) {
}

newClass::~newClass() {
}

void newClass::input(){
    int a;
    int b;
    int c;
    
    cout <<"Insira o valor de A: "<<endl;
    cin >> a;
    cout <<"Insira o valor de B: "<<endl;
    cin >> b;
    cout <<"Insira o valor de C: "<<endl;
    cin >> c;
    cout <<"Valor de delta: "<<calcdelta(a,b,c)<<endl;
    
}

int newClass::calcdelta(int a, int b, int c){
    int delta;
    
    delta = (pow((b),2)-(4*a*c));
    
    return delta;
}