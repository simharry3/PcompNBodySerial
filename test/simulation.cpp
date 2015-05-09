#include <iostream>
#include "system.h"


int main(){
    int numBodies  = 100;
    int steps = 1000;
    int timestep = 1;
    System sys = System(numBodies);
    
    for(int n = 0; n < steps; ++n){
        sys.calculateSystem();
        sys.stepSystem(timestep);
    }
    std::cout << "HERE" << std::endl;
}
