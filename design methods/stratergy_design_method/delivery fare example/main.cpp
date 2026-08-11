#include<bits/stdc++.h>
#include "fare_calculator.h"
using namespace std;

int main()
{
    fare_calculator* f=new fare_calculator();
    f->set_type("premium");
    f->set_multiplier(1.5);
    cout<<f->calculator(12,5)<<endl;
    return 0;
}