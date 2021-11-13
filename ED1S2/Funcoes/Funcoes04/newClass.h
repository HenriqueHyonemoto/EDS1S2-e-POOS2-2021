/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newClass.h
 * Author: Rick
 *
 * Created on 26 de Setembro de 2021, 14:46
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
    
    void input();
    
    int calcdelta(int a, int b, int c);
    
private:

};

#endif /* NEWCLASS_H */

