
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
    
    float id,mat,pt,hist,media;
    
    void input();
    float calc();

private:

};

#endif /* NEWCLASS_H */

