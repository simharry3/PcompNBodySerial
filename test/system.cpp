#include "system.h"
#include <iostream>
#include <tuple>
//#include <random.h>
void System::fillBodies(){
  for(int i = 0; i < numBodies; ++i){
      Bodies[i].setPosition(make_tuple(0, i, 0));
      std::cout << i << std::endl;
  }

}

void System::initSystem(){
    Bodies = new nBody[numBodies];
    fillBodies();
}

void System::calculateSystem() {
	for (int i = 0; i < numBodies; ++i) {
		nBody n1 = Bodies[i];
		tuple<float, float, float> testF = make_tuple(0,0,0);
		float Fx, Fy, Fz = 0;
		for (int j = i+1; j < numBodies; ++j) {
			nBody n2 = Bodies[j];
			testF = n1.calcForce(n2);
			Fx += std::get<0>(testF);
			Fy += std::get<1>(testF);
			Fz += std::get<2>(testF);
		}
		n1.setForce(make_tuple(Fx,Fy,Fz));
		tuple<float, float, float> testA = n1.calcAcceleration();
		n1.setAcceleration(testA);
		Bodies[i] = n1;
		std::cout << "n" << i << " X: " << Fx << " Y: " << Fy << " Z: " << Fz << std::endl; 
	}
}

void System::stepSystem() {
	for (int i = 0; i < numBodies; ++i) {
		nBody n = Bodies[i];
		tuple<float, float, float> acc = n.returnAcceleration();
		tuple<float, float, float> pos = n.returnPosition();
		std::cout << "Old pos: (" << get<0>(pos) << "," << get<1>(pos) << "," << get<2>(pos) << ")" << std::endl;
		float posX,posY,posZ;
		posX = get<0>(pos) + get<0>(acc);
		posY = get<1>(pos) + get<1>(acc);
		posZ = get<2>(pos) + get<2>(acc);
		n.setPosition(make_tuple(posX,posY,posZ));
		std::cout << "New pos: (" << posX << "," << posY << "," << posZ << ")" << std::endl;
		std::cout << std::endl;
		Bodies[i] = n;
	}
}
