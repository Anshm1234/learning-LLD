#pragma once

#include<bits/stdc++.h>
#include "vehicle_type.h"
#include "vehicles.h"
using namespace std;

class slots
{
    private:
        static int next_slot_id;
        int slot_id;
        int vehicle_id;
        bool is_occupied;
        
    public:
        slots()
        {
            this->slot_id=next_slot_id++;
            is_occupied=false;
            vehicle_id=-1;
        }

        int get_slot_id()
        {
            return slot_id;
        }
        bool check_occupied()
        {
            return is_occupied;
        }
        void set_occupied(const vehicles& v)
        {
            vehicle_id=v.get_vehicle_id();
            is_occupied=true;
        }
        void release_occupied()
        {
            vehicle_id=-1;
            is_occupied=false;
        }
        int get_parked_vehicle_id()
        {
            if(vehicle_id==-1)
            cout<<"slot is empty\n";

            return vehicle_id;
        }

};
int slots::next_slot_id=1;