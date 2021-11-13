
#include <cstdlib>
#include <iostream>
#include "newClass.h"
#include <math.h>
using namespace std;

newClass::newClass() {
}

newClass::newClass(const newClass& orig) {
}

newClass::~newClass() {
}

void newClass::input(){
    float r;
    
    cout <<"Insira o raio da esfera: "<<endl;
    cin >> r;
    cout <<"O volume da esfera: "<<calcVolume(r)<<endl;
     
}

float newClass::calcVolume(float r){
    float volume;
    
    volume = ((4)*(3.14159)*(pow((r),3)))/3;
    
    return volume;
}

