#include<bits/stdc++.h>
using namespace std;

class talkable
{
    public:
        virtual void talk()=0;
};

class talktru : public talkable
{
    public:
        void talk() override
        {
            cout<<"I can talk"<<endl;
        }
};

class notalk : public talkable
{
    public:
        void talk() override
        {
            cout<<"I cannot talk"<<endl;
        }
};