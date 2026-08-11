#include<bits/stdc++.h>
#include "strat_manager.h"
using namespace std;

class surge_charge : public strat_manager
{   
    private:
    int multiplier;
    public:
        surge_charge(int multiplier)
        {
            this->multiplier=multiplier;
        }

        int charge(double distance,double duration) override
        {
            double base = distance*15+duration*10;
            return base * multiplier;
        }
        
};