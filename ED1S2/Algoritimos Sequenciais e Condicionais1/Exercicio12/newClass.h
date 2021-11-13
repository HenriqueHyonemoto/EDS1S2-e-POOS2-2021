
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
    
    int idade;
    string nome;
    
    void input();
    int calc();
    
private:

};

#endif /* NEWCLASS_H */

