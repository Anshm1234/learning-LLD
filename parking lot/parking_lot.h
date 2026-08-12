#pragma once

#include<bits/stdc++.h>
#include "slot_manager.h"
#include "price_calculator.h"
using namespace std;

class parking_lot
{
    private:
        slot_manager* manager=slot_manager::get_manager();

    public:
        void create_slot()
        {
            manager->add_slot();
        }

        void park_vehicle(vehicles& v)
        {
            manager->occupy_slot(v);
        }

        void charge_fare(const vehicles &v)
        {   
            payment *money_taker=new payment;
            money_taker->charge(v);
        }

        void unpark_vehicle(const vehicles& v)
        {
            charge_fare(v);
            manager->release_slot(v);
        }
};
