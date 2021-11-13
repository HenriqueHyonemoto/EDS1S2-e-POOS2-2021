
#include <cstdlib>
#include <iostream>
#include "equacoes.h"

using namespace std;

int main(int argc, char** argv) {

    equacoes obj1;
    obj1.lerDados();
    obj1.calc();
    cout<<obj1.calc()<<endl;
    return 0;
}

