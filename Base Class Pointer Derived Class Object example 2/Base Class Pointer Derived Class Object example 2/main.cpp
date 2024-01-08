//
//  main.cpp
//  Base Class Pointer Derived Class Object example 2
//
//  Created by Nisha Ramprasath on 6/11/23.
//

#include<iostream>
using namespace std;

class Rectangle
{
    public:
    void area()
    {
        cout<<"Area of Rectangle"<<endl;
    }
    
};
    
class Cuboid:public Rectangle
{
    public:
    void volume()
    {
        cout<<"Cuboid Volume"<<endl;
    }
    
};
    
int main()
{
    Cuboid c;
    Rectangle *p=&c;
    p->area();
   /* p->volume();*/ // this function cannot be call
              
    return 0;
        
}
    
