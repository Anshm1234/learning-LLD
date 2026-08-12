#pragma once

#include <bits/stdc++.h>
#include "vehicles.h"
using namespace std;


class payment
{
public:

    void charge(const vehicles& v)
    {
        switch(v.get_vehicle_type())
        {
            case vehicle_type::car:
                cout << "owner has to pay 100\n";
                break;

            case vehicle_type::bike:
                cout << "owner has to pay 50\n";
                break;

            case vehicle_type::truck:
                cout << "owner has to pay 300\n";
                break;

            default:
                cout << "unknown vehicle type\n";
                break;
        }
    }
};