#include<bits/stdc++.h>
#include "parking_lot.h"

using namespace std;

int main()
{
    parking_lot *mine=new parking_lot;

    int n;
    cout << "enter the number of slots" << endl;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        mine->create_slot();
    }

    vehicles *first=new car("ansh",101);
    vehicles *second=new bike("harsh",102);

    mine->park_vehicle(*first);
    mine->park_vehicle(*second);

    mine->unpark_vehicle(*first);

    return 0;

}