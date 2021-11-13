/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newClass.cpp
 * Author: Rick
 * 
 * Created on 15 de Setembro de 2021, 11:48
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

void newClass::input(){
    cout <<"Digite sua nota em Matematica: "<<endl;
    cin >> mat;
    cout <<"Digite sua nota em Portugues: "<<endl;
    cin >> pt;
    cout <<"Digite sua nota em Historia: "<<endl;
    cin >> hist;   
}

float newClass::calc(){
media = (mat+hist+pt)/3;
if (media >= 6){
    cout <<"Aluno Aprovado"<<endl;
}
else{
    cout <<"Aluno Reprovado"<<endl;
}    

}
