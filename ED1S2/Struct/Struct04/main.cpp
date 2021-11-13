

#include <iostream>
#include <cstdlib>
#include "newClass.h"
using namespace std;

int main(int argc, char** argv){
    newClass *obj1 = new newClass;
    
    obj1->input();
    obj1->procurarproduto();
    return 0;
}

