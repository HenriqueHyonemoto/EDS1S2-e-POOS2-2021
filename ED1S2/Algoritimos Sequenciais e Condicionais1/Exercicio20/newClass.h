/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newClass.h
 * Author: Rick
 *
 * Created on 17 de Setembro de 2021, 11:06
 */

#ifndef NEWCLASS_H
#define NEWCLASS_H
#include <cstdlib>
#include <iostream>
using namespace std;

class newClass {
public:
    newClass();
    newClass(const newClass& orig);
    virtual ~newClass();
    
    float qtd,preco;
    string id;
    void input();
    float calc();
private:

};

#endif /* NEWCLASS_H */

