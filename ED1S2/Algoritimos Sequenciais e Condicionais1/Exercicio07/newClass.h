/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newClass.h
 * Author: Rick
 *
 * Created on 15 de Setembro de 2021, 11:30
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
    
    float custofabrica,custoconsumidor;
    void input();
    float calc();
    
private:

};

#endif /* NEWCLASS_H */

