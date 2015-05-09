
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
        void stepSystem();
    private:
        int numBodies; 
        nBody* Bodies;
};
