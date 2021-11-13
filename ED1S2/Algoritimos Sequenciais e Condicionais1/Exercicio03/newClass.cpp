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
    cout <<"Digite 1 para inserir a idade em anos"<<endl;
    cout <<"Digite 2 para inserir a idade em meses"<<endl;
    cout <<"Digite 3 para inserir a idade em dias"<<endl;
    cin >> tipo; 
    if (tipo !=1 && tipo !=2 && tipo !=3){
    while (tipo !=1 && tipo !=2 && tipo !=3 ){
    cout <<"Erro, tente novamente!"<<endl;
    cin >> tipo;     
    }      
    }
    if (tipo==1){
        cout<<"Digite sua idade em anos: "<<endl;
        cin >> idade;
    }
    else if (tipo==2){
        cout<<"Digite sua idade em meses: "<<endl;
        cin >> idade;
    }
    else if (tipo==3){
        cout<<"Digite sua idade em dias: "<<endl;
        cin >> idade;         
    }
      
}

float newClass::calc(){
    if (tipo == 1){
        idadefinal = idade*365;
    }
     if (tipo == 2){
        idadefinal = idade*30;
    }
     if (tipo == 3){
        idadefinal = idade;
    }
    
    cout <<"Sua idade: "<<idadefinal<<" dias" <<endl;
}



