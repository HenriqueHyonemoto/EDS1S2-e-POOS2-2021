
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
    
    int a,b;
    
    void input();
    int calc();
    
private:

};

#endif /* NEWCLASS_H */

