
#include "nBody.h"

class System{
    public:
        System(int n){
            numBodies = n;
            initSystem();
        }

        void initSystem();
        void fillBodies();
        void calculateSystem();
        void stepSystem(int ts);
    private:
        int numBodies; 
        nBody* Bodies;
};
