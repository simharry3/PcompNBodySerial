#include "nBody.h"
#include <tuple>
#include <math.h>

void nBody::setVelocity(tuple<float, float, float> vel){
	set this->velocity = vel;
}

tuple<float, float, float> nBody::returnVelocity(){
    return velocity;
}

tuple<float, float, float> calcForce(nBody n2){
    float d_X, d_Y, d_Z, float F;
    d_X = posX - n2.posX;
    d_Y = posY - n2.posY;
    d_Z = posZ - n2.posZ;
    F = (1*mass*n2.mass)/(pow(sqrt(pow(d_X,2)+pow(d_Y,2)+pow(d_Z,2)),2);
    this->force = F;
    return F;
}

