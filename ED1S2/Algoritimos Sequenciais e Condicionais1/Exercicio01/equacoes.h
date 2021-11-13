
#include <cstdlib>
#include <iostream>
#ifndef EQUACOES_H
#define EQUACOES_H
using namespace std; 

class equacoes {
public:
    equacoes();
    equacoes(const equacoes& orig);
    virtual ~equacoes();
    
    int x1, y1, x2, y2; // fica disponivel para qualquer metodo.
    void lerDados();
    float calc();

private:

};

#endif /* EQUACOES_H */

