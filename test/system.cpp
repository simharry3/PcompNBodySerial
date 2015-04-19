#include "system.h"
#include <iostream>
//#include <random.h>
void System::fillBodies(){
  for(int i = 0; i < numBodies; ++i){
      Bodies[i].setPosition(make_tuple(1, 1, 1));
      std::cout << i << std::endl;
  }

}

void System::initSystem(){
    Bodies = new nBody[numBodies];
    fillBodies();
}
