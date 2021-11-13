/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rick
 *
 * Created on 12 de Outubro de 2021, 16:06
 */

#include "newClass.h"
#include <iostream>
#include <cstdlib>

using namespace std;


/*
 * 
 */
int main(int argc, char** argv) {
    newClass *obj1 = new newClass;
    
    obj1->input();
    obj1->transferencias();
    
    return 0;
}

