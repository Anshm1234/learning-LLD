#include<bits/stdc++.h>
#include "walkable.h"
#include "flyable.h"
#include "talkable.h"

using namespace std;

class robot
{
    private:
        string name;
        walkable* w;
        talkable* t;
        flyable* f;

    public:
    
        robot(string name, walkable* w, talkable* t, flyable* f)
        {
            this->name = name;
            this->w = w;
            this->t = t;
            this->f = f;
        }

        void walk()
        {
            w->walk();
        }

        void talk()
        {
            t->talk();
        }

        void fly()
        {
            f->fly();
        }

        void show_properties()
        {
            cout<<"My name is "<<name<<endl;
            walk();
            talk();
            fly();
        }
        
};

class companion : public robot
{
    public:
        companion(string name, walkable* w, talkable* t, flyable* f) : robot(name, w, t, f)
        {
            cout<<"I am a companion robot"<<endl;
        }
};

class battle : public robot
{
    public:
        battle(string name, walkable* w, talkable* t, flyable* f) : robot(name, w, t, f)
        {
            cout<<"I am a battle robot"<<endl;
        }
};

class cleaning : public robot
{
    public:
        cleaning(string name, walkable* w, talkable* t, flyable* f) : robot(name, w, t, f)
        {
            cout<<"I am a cleaning robot"<<endl;
        }
};
