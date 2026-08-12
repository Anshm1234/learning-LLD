#include<bits/stdc++.h>
using namespace std;

class manager
{
    private:
        static manager* instance;
        manager()
        {
            cout<<"I am a manager"<<endl;
        }
    public:
        static manager* getinstance()
        {
            if(instance==nullptr)
            {
                cout<<"Creating new instance"<<endl;
                instance =new manager();
            }
            return instance;
        }

        void work()
        {
            cout<<"I am working"<<endl;
        }
};
manager* manager::instance=nullptr;