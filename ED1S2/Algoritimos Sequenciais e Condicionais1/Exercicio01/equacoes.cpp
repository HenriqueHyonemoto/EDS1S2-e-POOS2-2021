#include <cstdlib>
#include <iostream>
#include <math.h>
#include "equacoes.h"

using namespace std; 
equacoes::equacoes() {
}

equacoes::equacoes(const equacoes& orig) {
}

equacoes::~equacoes() {
}
void equacoes::lerDados(){
    cout <<"Digite o valor de x1"<<endl;
    cin >> x1;
    cout <<"Digite o valor de y1"<<endl;
    cin >> y1;
    cout <<"Digite o valor de x2"<<endl;
    cin >> x2;
    cout <<"Digite o valor de y2"<<endl;
    cin >> y2;
    
}
float equacoes::calc(){
    float d;
    d = sqrt(pow((x2-x1),2 )+pow((y2-y1),2));
    return d;
}


