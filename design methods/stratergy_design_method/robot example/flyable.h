#include<bits/stdc++.h>
using namespace std;

class flyable
{
    public:
        virtual void fly()=0;
};

class flytrue : public flyable
{
    public:
        void fly() override
        {
            cout<<"I can fly"<<endl;
        }
};

class flyfalse : public flyable
{
    public:
        void fly() override
        {
            cout<<"I cannot fly"<<endl;
        }
};