/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newClass.h
 * Author: Rick
 *
 * Created on 16 de Setembro de 2021, 11:33
 */

#ifndef NEWCLASS_H
#define NEWCLASS_H
#include <cstdlib>
#include <iostream>
#include "newClass.h"
class newClass {
public:
    newClass();
    newClass(const newClass& orig);
    virtual ~newClass();
    
    float a,b,c;
    void input();
    float calc();
private:

};

#endif /* NEWCLASS_H */

