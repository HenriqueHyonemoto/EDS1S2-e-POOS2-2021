
#ifndef NEWCLASS_H
#define NEWCLASS_H
#include "newClass.h"
#include <iostream>
#include <cstdlib>
using namespace std;

class newClass {
public:
    
    int cpf;
    char nome[80];
    
    struct Cliente{
    int cpf;
    char nome[80];
    }PesquisarPessoas[2];
    
    void input();
    void sequencial();
    int binaria();
    void mostrarpessoa();
    
    newClass();
    newClass(const newClass& orig);
    virtual ~newClass();
private:

};

#endif /* NEWCLASS_H */

