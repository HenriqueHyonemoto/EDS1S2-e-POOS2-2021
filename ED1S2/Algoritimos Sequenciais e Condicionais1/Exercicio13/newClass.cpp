
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
    cout <<"Digite o valor de A: "<<endl;
    cin >> a;
    cout <<"Digite o valor de B: "<<endl;
    cin >> b;
    cout <<"Digite o valor de C: "<<endl;
    cin >> c;
    cout << "Valor de A: "<<a<<endl;
    cout << "Valor de B: "<<b<<endl;
    cout << "Valor de C: "<<c<<endl;
}

float newClass::calc(){
    
    if (a>b && a>c){
    cout <<"O maior valor: "<<a<<endl;  
    }
    else if (b>a && b>c){
    cout <<"O maior valor: "<<b<<endl;   
    }
    else if (c>a && c>b){
    cout <<"O maior valor: "<<c<<endl;  
    }
    else if (c>a && c>b){
    cout <<"O maior valor: "<<c<<endl;  
    }
    else if (a == b && a == c && b == a && b == c && c == a & c == b){
    cout <<"Todos possuem o mesmo valor"<<endl;    
    }
    else if (a == b && b == a && c < a){
    cout <<"Dois valores iguais: "<<a<<endl;    
    }
    else if (a == c && c == a && c > b){
    cout <<"Dois valores iguais: "<<c<<endl;    
    }
    else if (c == b && b == c && b > a){
    cout <<"Dois valores iguais: "<<b<<endl;    
    }
}
