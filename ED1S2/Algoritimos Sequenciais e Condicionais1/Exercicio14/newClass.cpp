
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
    cout <<"Informe o codigo: "<<endl;
    cin >> id;
    cout <<"Informe sua nota em Matematica: "<<endl;
    cin >> mat;
    cout <<"Informe sua nota em Portugues: "<<endl;
    cin >> pt;
    cout <<"Informe sua nota em Historia: "<<endl;
    cin >> hist;   
}
float newClass::calc(){
    if (mat > pt && mat > hist){
    media = ((mat*4)+(pt*3)+(hist*3))/10;    
    }
    if (pt > mat && pt > hist){
    media = ((mat*3)+(pt*4)+(hist*3))/10;    
    }
    if (hist > mat && hist > pt){
    media = ((mat*3)+(pt*3)+(hist*4))/10;    
    }
    //---------
    if (mat == pt && mat > hist){
    media = ((mat*4)+(pt*3)+(hist*3))/10;    
    }
    if (mat == hist && mat > pt){
    media = ((mat*4)+(pt*3)+(hist*3))/10;    
    }
    //-------------
    if (pt == mat && pt > hist){
    media = ((mat*3)+(pt*4)+(hist*3))/10;    
    }
    if (pt == hist && pt > mat){
    media = ((mat*3)+(pt*4)+(hist*3))/10;    
    }
    //----------------
    if (hist == pt && hist > mat){
    media = ((mat*3)+(pt*3)+(hist*4))/10;    
    }
    if (hist == mat && hist > pt){
    media = ((mat*3)+(pt*3)+(hist*4))/10;    
    }
    //-----------
    if (mat == pt && mat == hist && pt == mat && pt == hist && hist == mat && hist == pt){
    media = ((mat*3)+(pt*3)+(hist*4))/10;    
    }
    if (media >= 5){
        cout<<"Media: "<<media<<endl;
        cout <<"Aluno: "<<id<<endl;
        cout <<"Nota em Matematica: "<<mat<<endl;
        cout <<"Nota em Portugues: "<<pt<<endl;
        cout <<"Nota em Historia: "<<hist<<endl;
        cout <<"Status: APROVADO"<<endl;
    }
    else if (media < 5){
        cout<<"Media: "<<media<<endl; 
        cout <<"Aluno: "<<id<<endl;
        cout <<"Nota em Matematica: "<<mat<<endl;
        cout <<"Nota em Portugues: "<<pt<<endl;
        cout <<"Nota em Historia: "<<hist<<endl;
        cout <<"Status: REPROVADO"<<endl;
    }
}

