#include<bits/stdc++.h>
#include "strat_manager.h"
using namespace std;

class premiumcharge : public strat_manager
{
    public:
        int charge(double distance,double duration) override
        {
            return distance*15+duration*10;
        }
};