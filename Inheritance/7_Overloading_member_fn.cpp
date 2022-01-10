// Program to overload member function in base and derived class.

#include<bits/stdc++.h>

class A1{
    public:
    void show(){
        std::cout<<"\nIn base class function";
    }
};

class A2 : public A1{
    public:
    void show(){
        std::cout<<"\nIn derived class function";
    }
};

int main(){
    A1 x;           
    A2 y;
    x.show();               //.. Invokes Base class function
    y.show();               //.. Invokes Derived class function
    y.A1::show();           //.. Invokes Base class function
    return 0;
}