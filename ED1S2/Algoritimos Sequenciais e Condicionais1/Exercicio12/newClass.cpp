/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newClass.cpp
 * Author: Rick
 * 
 * Created on 16 de Setembro de 2021, 11:15
 */

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
    cout <<"Digite seu nome: "<<endl;
    cin >> nome;
    cout <<"Digite sua idade: "<<endl;
    cin >> idade;
}

int newClass::calc(){
    if (idade < 5 ){
        cout <<"Voce nao pode participar"<<endl;
    }
    if (idade >= 5 && idade <=7){
        cout <<"Nadador: "<<nome<<" Idade: "<<idade<<" Categoria: infantil"<<endl;
    }
    else if (idade >= 8 && idade <=10){
        cout <<"Nadador: "<<nome<<" Idade: "<<idade<<" Categoria: infantil B"<<endl;
    }
    else if (idade >= 11 && idade <=13){
        cout <<"Nadador: "<<nome<<" Idade: "<<idade<<" Categoria: juvenil A"<<endl;
    }
    else if (idade >= 14 && idade <=17){
        cout <<"Nadador: "<<nome<<" Idade: "<<idade<<" Categoria: juvenil B"<<endl;
    }
    else if (idade >= 18){
        cout <<"Nadador: "<<nome<<" Idade: "<<idade<<" Categoria: adulto"<<endl;
    }
}
