
#include <cstdlib>
#include "newClass.h"
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    newClass *obj1 = new newClass;
    
    obj1->input();
    obj1->calc();        
    
    return 0;
}

