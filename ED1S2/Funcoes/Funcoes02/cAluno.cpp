#include "cAluno.h"
#include <iostream>
#include <math.h>

using namespace std;

cAluno::cAluno() {
}

cAluno::cAluno(const cAluno& orig) {
}

cAluno::~cAluno() {
}

void cAluno::lerDados(){
    float n1,n2,n3;
    char tm;
    cout<<"Digite a primeira nota "<<endl;
    cin>> n1;
    cout<<"Digite a segunda nota "<<endl;
    cin>> n2;
    cout<<"Digite a terceira nota "<<endl;
    cin>> n3;
    cout<<"Digite o tipo de media (A ou P) "<<endl;
    cin>> tm;

    cout<< this->media(n1, n2, n3, tm);
    
}
float cAluno::media(float n1, float n2, float n3, char tm){
    
    float mediaF;
    
    if (tm == "A"){
    mediaF = (n1+n2+n3)/3;
    }
    if (tm == "P"){
    mediaF = (n1*5+n2*3+n3*2)/3;
    }

    return mediaF;
}
