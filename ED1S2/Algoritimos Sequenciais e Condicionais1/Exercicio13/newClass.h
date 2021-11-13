
#ifndef NEWCLASS_H
#define NEWCLASS_H
#include "newClass.h"
#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;
class newClass {
public:
    newClass();
    newClass(const newClass& orig);
    virtual ~newClass();
   
    
    float a,b,c,maior;
    
    void input();
    float calc();
private:

};

#endif /* NEWCLASS_H */

