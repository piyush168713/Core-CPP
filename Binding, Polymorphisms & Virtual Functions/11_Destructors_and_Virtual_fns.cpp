//                            DESTRUCTORS AND VIRTUAL FUNCTIONS

// When a virtual function is invoked through a non-virtual memeber function, late binding is performed. When a virtual function 
// is called through the destructor, the redefined function of a similar class is involved.


// Program to call a virtual function using destructor.

#include<bits/stdc++.h>

class A1{
    public:
    ~A1(){
        std::cout<<"\nIn virtual destructor";
    }
    virtual void joy(){
        std::cout<<"\nIn joy of class A1";
    }
};

class A2 : public A1{
    public:
    ~A2(){
        A1 *p;
        p = this;
        p->joy();
    }
    void joy(){
        std::cout<<"\nIn joy() of class A2";
    }
};

int main(){
    A2 x;
    return 0;
}