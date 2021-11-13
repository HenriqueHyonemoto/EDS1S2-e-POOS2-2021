
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
    float x,y,z;
    
    cout <<"Digite o tamanho do lado X: "<<endl;
    cin >> x;
    cout <<"Digite o tamanho do lado Y: "<<endl;
    cin >> y;
    cout <<"Digite o tamanho do lado Z: "<<endl;
    cin >> z;
    
    cout << "O tipo to triangulo: "<<calc(x,y,z)<<endl;
    
}

string newClass::calc(float x, float y, float z){
    
    if (x == y && x == z){
        return "Equilatero";
    }
    else if (x == y && x != z){
        return "Isosceles";
    }
    else if (x == z && x != y){
        return "Isosceles";
    }
    else if (y == z && y != x){
        return "Isosceles";
    }
    else if (x != y && x != z && z != y){
        return "Escaleno";
    }
    
}