
#ifndef NEWCLASS_H
#define NEWCLASS_H
#include "newClass.h"
#include <iostream>
#include <cstdlib>
class newClass {
public:
    newClass();
    newClass(const newClass& orig);
    virtual ~newClass();
    int tipo,idade;
    float idadefinal;
    void input();
    float calc();
    
private:

};

#endif /* NEWCLASS_H */

