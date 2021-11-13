
#include <cstdlib>
#include <iostream>
#include "newClass.h"

using namespace std;

newClass::newClass() {
}

newClass::newClass(const newClass& orig) {
}

newClass::~newClass() {
}

void newClass::input(){
    
   
    cout<<"Codigo do produto: "<<endl;
    cin >> id;
    while (id < 100){
    cout<<"Codigo invalido, tente novamente: "<<endl;    
    cout<<"Codigo do produto: "<<endl;
    cin >> id;
    }
    while (id > 105){
    cout<<"Codigo invalido, tente novamente: "<<endl;    
    cout<<"Codigo do produto: "<<endl;
    cin >> id;
    }
    cout <<"Quantidade do produto: "<<endl;
    cin >> qtd; 
    
   
    
}
float newClass::calc(){
    
    id100 = 1.20;
    id101 = 1.30;
    id102 = 1.50;
    id103 = 1.20;
    id104 = 1.30;
    id105 = 1.00;
    
 
    if (id == 100){
        preco = qtd*id100;
    }
    if (id == 101){
        preco = qtd*id101;
    }
    if (id == 102){
        preco = qtd*id102;
    }
    if (id == 103){
        preco = qtd*id103;
    }
    if (id == 104){
        preco = qtd*id104;
    }
    if (id == 105){
        preco = qtd*id105;
    }
    
    cout <<"Valor total: "<<preco<<endl;
        
}