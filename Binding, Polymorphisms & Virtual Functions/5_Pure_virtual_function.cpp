//                               PURE VIRTUAL FUNCTIONS

// The member function of the base class is rarely used for doing any operation; such functions are called do-nothing functions, dummy functions, or pure virtual functions.
// It cannot be declare object.

// Declaration
// virtual void display() = 0;     // pure function


// Program to declare pure virtual functions.

#include<bits/stdc++.h>

class A1{
    protected:
    int a;
    public:
    A1(){
        a=10;
    }
    virtual void display() = 0;      // pure function
};

class A2 : public A1{
    int b;
    public:
    A2(){
        b=20;
    }
    void display(){
        std::cout<<"\na = "<<a<<"\nb = "<<b;
    }
};

int main(){
    A1 *p;
    // p->display();            // abnormal program termination
    A2 x;
    p = &x;
    p->display();
    return 0;
}