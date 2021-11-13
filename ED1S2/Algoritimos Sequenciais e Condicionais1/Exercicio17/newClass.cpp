/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newClass.cpp
 * Author: Rick
 * 
 * Created on 17 de Setembro de 2021, 09:56
 */

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

int newClass::input(){
    cout <<"Qual seu sexo?"<<endl;
    cout <<"Digite m para Masculino "<<endl;
    cout <<"Digite f para Feminino "<<endl;
    cin >> sexo;
    while (sexo != "m" && sexo != "f"){
    cout <<"Erro, Tente novamente"<<endl;
    cout <<"Qual seu sexo?"<<endl;
    cout <<"Digite m para Masculino "<<endl;
    cout <<"Digite f para Feminino "<<endl;
    cin >> sexo;    
    }
    cout <<"Digite sua altura em metros: "<<endl;
    cin >> altura; 
    
}

float newClass::calc(){
    if (sexo == "m"){
        peso = (72.7*altura)-58;
    }
    else {
        peso = (62.1*altura)-44.7;
    }
    
    cout <<"O seu peso ideal seria: "<<peso<<endl;
}