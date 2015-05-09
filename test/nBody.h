#include <tuple>
using namespace std;
class nBody{
    public:
        nBody();
        nBody(tuple<int,int,int> vals);
        void setPosition(tuple<float, float, float> pos);
        void setVelocity(tuple<float,float,float> vel);
        void setForce(tuple<float, float, float> F);
        void setAcceleration(tuple<float, float, float> acc);
        tuple<float, float, float> returnPosition();
        tuple<float, float, float> returnVelocity();
        tuple<float, float, float> returnAcceleration();
        tuple<float, float, float> returnForce();
        tuple<float, float, float> calcForce(nBody n2);
        tuple<float, float, float> calcAcceleration();
        tuple<float, float, float> calcVelocity(int ts);



    private:
        float mass;
        float radius;
        tuple<float, float, float> position;
        tuple<float, float, float> velocity;
        tuple<float, float, float> force;
        tuple<float, float, float> acceleration;
};
