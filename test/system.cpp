#include "system.h"
#include <iostream>
//#include <random.h>
void System::fillBodies(){
  for(int i = 0; i < numBodies; ++i){
      std::cout << i << std::endl;
  }

}

void System::initSystem(){
    Bodies = new nBody[numBodies];
    fillBodies();
}
