
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
    cout<<"Digite sua nota em Matematica: "<<endl;
    cin >> notaMAT;
    cout<<"Digite sua nota em Portugues: "<<endl;
    cin >> notaPT;
    cout<<"Digite sua nota em Historia: "<<endl;
    cin>> notaHIST;
}

float newClass::calc(){
    media = ((notaMAT*2)+(notaPT*3)+(notaHIST*5))/(2+3+5);
    cout <<"A sua media final: "<<media<<endl;        
}
