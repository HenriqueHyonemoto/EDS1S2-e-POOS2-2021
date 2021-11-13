/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newClass.h
 * Author: Rick
 *
 * Created on 12 de Outubro de 2021, 16:06
 */

#ifndef NEWCLASS_H
#define NEWCLASS_H
#include "newClass.h"
#include <iostream>
#include <cstdlib>

using namespace std;

class newClass {
public:
    char nome[40];
    int cpf;
    float saldo;
    
    struct Cliente{
        char nome[40];
        int cpf;
        float saldo;
    }CadastrarCliente[3];
    
    void input();
    void transferencias();
    
    newClass();
    newClass(const newClass& orig);
    virtual ~newClass();
private:

};

#endif /* NEWCLASS_H */

