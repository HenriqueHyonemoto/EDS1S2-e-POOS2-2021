/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newClass.h
 * Author: Rick
 *
 * Created on 16 de Setembro de 2021, 12:43
 */

#ifndef NEWCLASS_H
#define NEWCLASS_H
#include <cstdlib>
#include <iostream>
#include "newClass.h"

using namespace std;

class newClass {
public:
    newClass();
    newClass(const newClass& orig);
    virtual ~newClass();
    
    float id100,id101,id102,id103,id104,id105,qtd,id,preco;
    
    void input();
    float calc();
    
private:

};

#endif /* NEWCLASS_H */

