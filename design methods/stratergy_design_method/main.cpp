#include <bits/stdc++.h>
#include "Robot.h"
using namespace std;

int main()
{
    robot* r1=new companion("comp",new walktrue(),new talktru(),new flytrue());
    r1->walk();

    robot* r2=new battle("warrior",new walktrue(),new talktru(),new flytrue());
    r2->show_properties();

    return 0;
}
