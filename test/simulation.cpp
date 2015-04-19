#include <iostream>
#include "system.h"


int main(){
    int numBodies  = 100;
    int steps = 1000;
    System sys = System(numBodies);
    
    for(int n = 0; n < steps; ++n){
        //calculateSystem();
        //stepSystem();
    }
    std::cout << "HERE" << std::endl;
}
