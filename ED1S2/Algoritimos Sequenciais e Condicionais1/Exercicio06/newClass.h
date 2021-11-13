
#ifndef NEWCLASS_H
#define NEWCLASS_H
#include "newClass.h"
#include <iostream>
#include <cstdlib>
#include<locale.h>

using namespace std;

class newClass {
public:
    newClass();
    newClass(const newClass& orig);
    virtual ~newClass();
    float s,h,m;
    
    void input();
    float calc();
private:

};

#endif /* NEWCLASS_H */

