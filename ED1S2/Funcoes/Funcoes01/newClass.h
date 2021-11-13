
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
    int x, y, maior;
    void input();
    int calcMaior();
    
private:

};

#endif /* NEWCLASS_H */

