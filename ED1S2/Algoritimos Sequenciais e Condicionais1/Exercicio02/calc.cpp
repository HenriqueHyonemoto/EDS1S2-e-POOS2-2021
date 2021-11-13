
#include "calc.h"
#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;
calc::calc() {
}

calc::calc(const calc& orig) {
}

calc::~calc() {
}

float calc::formula1(){
   
    int d;
    
    d = (pow((a+b),2)+pow((b+c),2))/2;
    
    cout <<"O valor de d: "<<d<<endl;
}

void calc::input(){
    
    cout <<"Digite o valor de A: "<<endl;
    cin >> a;
    cout <<"Digite o valor de B: "<<endl;
    cin >> b;
    cout <<"Digite o valor de C: "<<endl;
    cin >> c;
    
}