
#include "newClass.h"
#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

newClass::newClass() {
}

newClass::newClass(const newClass& orig) {
}

newClass::~newClass() {
}

void newClass::input(){
    for (int i=0;i<2;i++){
    cout <<"Digite o seu nome: "<<endl;
    cin >>CalcImc[i].nome;
    cout <<"Digite sua altura: "<<endl;
    cin >>CalcImc[i].altura;
    cout <<"Digite seu peso: "<<endl;
    cin >>CalcImc[i].peso;
     cout <<"Digite seu cpf: "<<endl;
    cin >>CalcImc[i].cpf;
    cout <<"Digite seu sexo: "<<endl;
    cin >>CalcImc[i].sexo;
    }    
}

void newClass::calc(){
    int proccpf;
    
    cout<<"Digite o cpf da pessoa: "<<endl;
    cin >> proccpf;
    
    for (int i=0;i<2;i++){
        if (proccpf == CalcImc[i].cpf){
        cout<<"O imc de: "<<CalcImc[i].nome<<endl;
        cout<<CalcImc[i].peso/pow((CalcImc[i].altura),2)<<endl;
        }
    }
}