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
    cout <<"Informe o valor de A: "<<endl;
    cin >> a;
    cout <<"Informe o valor de B: "<<endl;
    cin >> b;
    cout <<"Informe o valor de C: "<<endl;
    cin >> c;
}

float newClass::calc(){
    cout <<"valor de A: "<<a<<endl;
    cout <<"valor de B: "<<b<<endl;
    cout <<"valor de C: "<<c<<endl;
    if (a>b){
        cout <<"A maior que B"<<endl;  
    }
    if (a>c){
        cout <<"A maior que C"<<endl;  
    }
    if (b>a){
        cout <<"B maior que A"<<endl;  
    }
    if (b>c){
        cout <<"B maior que C"<<endl;  
    }
    if (c>a){
        cout <<"C maior que A"<<endl;  
    }
    if (c>b){
        cout <<"C maior que B"<<endl;  
    }
}
