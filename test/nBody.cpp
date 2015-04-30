#include "nBody.h"
#include <tuple>
#include <math.h>
using namespace std;
nBody::nBody() {
	auto test = make_tuple(0,0,0);
	mass = 0;
	radius = 0;
	velocity = test;
	force = test;
	posX = 0;
	posY = 0;
	posZ = 0;
}

nBody::nBody(tuple<int,int,int> vals) {
	auto test = make_tuple(0,0,0);
	mass = 0;
	radius = 0;
	velocity = test;
	force = test;
	posX = get<0>(vals);
	posY = get<1>(vals);
	posZ = get<2>(vals);
}

void nBody::setVelocity(tuple<float, float, float> vel){
	this->velocity = vel;
}

tuple<float, float, float> nBody::returnVelocity(){
    return velocity;
}

void nBody::setPosition(tuple<float, float, float> pos){
    position = pos;
}
tuple<float, float, float> nBody::calcForce(nBody n2){
   float d_X, d_Y, d_Z, F;
    d_X = posX - n2.posX;
    d_Y = posY - n2.posY;
    d_Z = posZ - n2.posZ;
    F = (1*mass*n2.mass)/(pow(sqrt(pow(d_X,2)+pow(d_Y,2)+pow(d_Z,2)),2);
    this->force = F;
    return F;
}

