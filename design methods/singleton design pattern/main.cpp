#include<bits/stdc++.h>
#include "singleton.h"
using namespace std;

int main()
{
    manager *m1 = manager::getinstance();
    manager *m2 = manager::getinstance();

    

    if(m1==m2)
    {
        cout<<"Both are same"<<endl;
    }
    else
    {
        cout<<"Both are different"<<endl;
    }

    return 0;
}