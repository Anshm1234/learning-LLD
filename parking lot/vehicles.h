#pragma once

#include<bits/stdc++.h>
#include "vehicle_type.h"
using namespace std;

class vehicles
{
    private:
       string owner_name;
       int vehicle_number;

    public:
        vehicles(string owner_name,int vehicle_number)
        {
            this->owner_name=owner_name;
            this->vehicle_number=vehicle_number;
        }
        int get_vehicle_id() const
        {
            return vehicle_number;
        }
        virtual vehicle_type get_vehicle_type() const =0;
};

class car : public vehicles
{
    public:
        car(string owner_name,int vehicle_number) : vehicles(owner_name,vehicle_number)
        {}

        vehicle_type get_vehicle_type() const override
        {
            return vehicle_type::car;
        }
};

class bike : public vehicles
{
    public:
        bike(string owner_name,int vehicle_number) : vehicles(owner_name,vehicle_number){}

        vehicle_type get_vehicle_type() const override
        {
            return  vehicle_type:: bike;
        }
};

class truck : public vehicles
{
    public:
        truck(string owner_name,int vehicle_number) : vehicles(owner_name,vehicle_number){}

        vehicle_type get_vehicle_type() const override
        {
            return  vehicle_type:: truck;
        }
};