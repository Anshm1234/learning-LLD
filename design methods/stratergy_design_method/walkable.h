#include<bits/stdc++.h>
using namespace std;

class walkable
{
    public:
        virtual void walk()=0;
};

class walktrue : public walkable
{
    public:
        void walk() override
        {
            cout<<"I can walk"<<endl;
        }
};

class walkfalse : public walkable
{
    public:
        void walk() override
        {
            cout<<"I cannot walk"<<endl;
        }
};