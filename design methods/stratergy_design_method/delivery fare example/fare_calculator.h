#include<bits/stdc++.h>
#include "stratergies/normal_charge.h"
#include "stratergies/premium.h"
#include "stratergies/surge_charge.h"
using namespace std;

class fare_calculator{
    private:
        string type;
        normal_charge* n;
        premiumcharge* p;
        surge_charge* s;

    public:
        fare_calculator()
        {
            n=new normal_charge();
            p=new premiumcharge();
            s=new surge_charge(1);
        }
        void set_type(string type)
        {
            this->type=type;
        }
        void set_multiplier(int multiplier)
        {
            s->set_multiplier(multiplier);
        }

        string get_type()
        {
            return this->type;
        }
        int calculator(double distance,double duration)
        {
            if(type=="normal")
            {
                return n->charge(distance,duration);
            }
            else if(type=="premium")
            {
                return p->charge(distance,duration);
            }
            else if(type=="surge")
            {
                return s->charge(distance,duration);
            }
            else 
            return -1;
        }
};
