
#ifndef NEWCLASS_H
#define NEWCLASS_H
#include "newClass.h"
#include <iostream>
#include <cstdlib>

using namespace std;

class newClass {
public:    
    int id;
    char nome[80];
    float preco;
    
    struct Cliente{
    int id;
    char nome[80];
    float preco;
    }CadastrarProduto[3];
    
void input();
void procurarproduto();

    newClass();
    newClass(const newClass& orig);
    virtual ~newClass();
    
private:
    

};

#endif /* NEWCLASS_H */

