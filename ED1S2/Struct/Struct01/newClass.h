#ifndef NEWCLASS_H
#define NEWCLASS_H
#include <cstdlib>
#include "newClass.h"
#include <iostream>
using namespace std;

class newClass {
public:
    
    char nome[80];
    float n1,n2;
    int matricula;
    struct Cliente{
        char nome[80];
        float n1,n2;
        int matricula;
    }DadosAlunos[2];
    
    newClass();
    newClass(const newClass& orig);
    virtual ~newClass();
    
    void input();
    void calc();
    
private:

};

#endif /* NEWCLASS_H */

