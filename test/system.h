#include "nBody.h"
class System{
    public:
        System(int n){
            numBodies = n;
            initSystem();
        }

        void initSystem();
        void fillBodies();
    private:
        int numBodies; 
        nBody* Bodies;
};
