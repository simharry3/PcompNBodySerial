#include "nBody.h"

class System{
    public:
        void initSystem(int numBodies);
    private:
        int numBodies; 
        nBody* Bodies;
};
