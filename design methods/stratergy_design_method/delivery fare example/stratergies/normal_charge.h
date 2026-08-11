#include<bits/stdc++.h>
#include "strat_manager.h"
using namespace std;

class normal_charge : public strat_manager
{
    public:
        int charge(double distance,double duration) override
        {
            return distance*10+duration*5;
        }
};