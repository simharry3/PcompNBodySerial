#include "nBody.h"
#include <tuple>
#include <math.h>

void nBody::setVelocity(tuple<float, float, float> vel){
}

tuple<float, float, float> nBody::returnVelocity(){
    return velocity;
}

tuple<float, float, float> calcForce(nBody n2){
    float d_X, d_Y, d_Z;
    d_X = posX - n2.posX;
    d_Y = posY - n2.posY;
    d_Z = posZ - n2.posZ;
}

