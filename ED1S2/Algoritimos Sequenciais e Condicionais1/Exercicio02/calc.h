

#ifndef CALC_H
#define CALC_H
#include "calc.h"
#include <cstdlib>
#include <iostream>
#include <math.h>

class calc {
public:
    calc();
    calc(const calc& orig);
    virtual ~calc();
    
    
    int a,b,c;
    
    float formula1();
    void input();
    
    
    
private:

};

#endif /* CALC_H */

