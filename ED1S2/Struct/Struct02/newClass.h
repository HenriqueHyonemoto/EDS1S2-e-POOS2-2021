/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newClass.h
 * Author: Rick
 *
 * Created on 12 de Outubro de 2021, 11:25
 */

#ifndef NEWCLASS_H
#define NEWCLASS_H

#include "newClass.h"
#include <iostream>
#include <cstdlib>
using namespace std;

class newClass {
public:
    newClass();
    newClass(const newClass& orig);
    virtual ~newClass();
    
    char nome[80];
    float altura,peso;
    int cpf;
    
    struct Cliente{
    char nome[80],sexo[1];
    float altura,peso;
    int cpf;
    }CalcImc[2];
    
    void input();
    void calc();
private:

};

#endif /* NEWCLASS_H */

