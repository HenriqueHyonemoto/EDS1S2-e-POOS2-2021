
#ifndef NEWCLASS_H
#define NEWCLASS_H
#include "newClass.h"
#include <cstdlib>
#include <iostream>

using namespace std;
class newClass {
public:
    newClass();
    newClass(const newClass& orig);
    virtual ~newClass();
    
    float a,b,c,tipo,media;
    
    void input();
    float calc();
private:

};

#endif /* NEWCLASS_H */

