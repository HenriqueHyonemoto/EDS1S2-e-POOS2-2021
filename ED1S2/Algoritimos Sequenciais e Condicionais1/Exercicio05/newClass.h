
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
    float notaMAT,notaPT,notaHIST;
    float media;
    void input();
    float calc();
    
private:

};

#endif /* NEWCLASS_H */

