#ifndef NBODY.H
#define NBODY.H

#include <tuple>
using namespace std;
class nBody{
    public:
        nBody();
        nBody(tuple<int,int,int> vals);

        void setVelocity(tuple<float,float,float> vel);
        tuple<float, float, float> returnVelocity();

        void setPosition(tuple<float,float,float> pos);
        tuple<float,float,float> calcForce(nBody n2);


    private:
        float mass;
        float radius;
    
        tuple<float, float, float> velocity;
        tuple<float, float, float> force;

        int posX;
        int posY;
        int posZ;
};
