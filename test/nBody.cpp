#include "nBody.h"
#include <tuple>
#include <math.h>
using namespace std;
void nBody::setVelocity(tuple<float, float, float> vel){
}

tuple<float, float, float> nBody::returnVelocity(){
    return velocity;
}

void nBody::setPosition(tuple<float, float, float> pos){
    position = pos;
}
tuple<float, float, float> nBody::calcForce(nBody n2){
    float d_X, d_Y, d_Z;
    d_X = get<0>(position) - get<0>(n2.position);
    d_Y = get<1>(position) - get<1>(n2.position);
    d_Z = get<2>(position) - get<2>(n2.position);
}

