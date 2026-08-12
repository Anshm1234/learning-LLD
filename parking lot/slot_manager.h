#pragma once

#include <bits/stdc++.h>
#include "parking_slots.h"
#include "vehicles.h"
using namespace std;

class slot_manager
{
    private:
        vector<slots*> park_slots;
        static slot_manager* instance;
        slot_manager(){}
    
    public:
        void add_slot()
        {
            slots* new_slot=new slots();
            park_slots.push_back(new_slot);
        }

        static slot_manager* get_manager()
        {
            if(instance==nullptr)
            instance=new slot_manager();

            return instance;
        }

        slots* find_available()
        {
            for(auto *it : park_slots)
            {
                if(!it->check_occupied())
                {
                    return it;
                }
            }
            cout<<"all slots are booked\n";

            return nullptr;
        }
        void occupy_slot(const vehicles &v)
        {
            slots* aval_slot = find_available();

            if (aval_slot == nullptr)
                return;

            aval_slot->set_occupied(v);
            cout<<"your vehicle is parked\n";
        }
        void release_slot(const vehicles& v)
        {
            auto id = v.get_vehicle_id();
            for (auto *it : park_slots)
            {
                if (it != nullptr && it->check_occupied() && it->get_parked_vehicle_id() == id)
                {
                    it->release_occupied();
                    cout << "vehicle has departed" << endl;
                    return;
                }
            }

            cout << "vehicle not found in any slot" << endl;
        }
};

slot_manager* slot_manager::instance=nullptr;