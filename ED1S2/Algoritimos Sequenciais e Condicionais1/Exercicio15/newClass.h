/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newClass.h
 * Author: Rick
 *
 * Created on 16 de Setembro de 2021, 12:31
 */

#ifndef NEWCLASS_H
#define NEWCLASS_H
#include <iostream>
#include <cstdlib>
#include "newClass.h"
using namespace std;
class newClass {
public:
    newClass();
    newClass(const newClass& orig);
    virtual ~newClass();
    
    int n;
    
    void input();
    int calc();
private:

};

#endif /* NEWCLASS_H */

