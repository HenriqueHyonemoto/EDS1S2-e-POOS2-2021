

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
    
    string calc(float x, float y, float z);
    
private:

};

#endif /* NEWCLASS_H */

