
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
    int idade;
    int idadea,idadem;
    void input();
    float calc();
private:

};

#endif /* NEWCLASS_H */

