#include "nBody.h"
#include <tuple>
#include <math.h>
#include <iostream>
using namespace std;
nBody::nBody() {
	tuple<float, float, float> test = make_tuple(0,0,0);
	mass = 1;
	radius = 1;
	velocity = test;
	force = test;
	position = test;
	acceleration = test; 
}

nBody::nBody(tuple<int,int,int> vals) {
	tuple<float, float, float> test = make_tuple(0,0,0);
	mass = 1;
	radius = 1;
	velocity = test;
	force = test;
	position = vals;
	acceleration = test;
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

tuple<float, float, float> nBody::returnPosition() {
	return position;
}

void nBody::setAcceleration(tuple<float, float, float> acc) {
	acceleration = acc;
} 

tuple<float, float, float> nBody::returnAcceleration() {
	return acceleration;
}

void nBody::setForce(tuple<float, float, float> F) {
	force = F;
}

tuple<float, float, float> nBody::returnForce() {
	return force;
}

tuple<float, float, float> nBody::calcForce(nBody n2){
    float d_X, d_Y, d_Z, posX1, posY1, posZ1, posX2, posY2, posZ2, Fx, Fy, Fz = 0;
    tuple<float, float, float> F;
   	posX1 = get<0>(position);
   	posY1 = get<1>(position);
   	posZ1 = get<2>(position);
   	tuple<float, float, float> pos2 = n2.returnPosition(); 
   	posX2 = get<0>(pos2);
   	posY2 = get<1>(pos2); 
   	posZ2 = get<2>(pos2); 
    d_X = posX2 - posX1;
    d_Y = posY2 - posY1;
    d_Z = posZ2 - posZ1;
    if (d_X == 0) {Fx = 0;}
    else {Fx = (mass*n2.mass)/d_X;}
    if (d_Y == 0) {Fy = 0;}
    else {Fy = (mass*n2.mass)/d_Y;}
    if (d_Z == 0) {Fz = 0;}
    else {Fz = (mass*n2.mass)/d_Z;}
    F = make_tuple(Fx, Fy, Fz);
    return F;
}

tuple<float, float, float> nBody::calcAcceleration() {
	float aX, aY, aZ;
	aX = (get<0>(force))/mass;
	aY = (get<1>(force))/mass;
	aZ = (get<2>(force))/mass;
	tuple<float, float, float> A = make_tuple(aX,aY,aZ);
	return A;
}

