#include <tuple>
using namespace std;
class nBody{
    public:
        void setVelocity(tuple<float,float,float> vel);
        tuple<float, float, float> returnVelocity();
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
