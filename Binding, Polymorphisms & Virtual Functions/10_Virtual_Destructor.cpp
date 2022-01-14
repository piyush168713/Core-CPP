// Destructor can be virtual.


// Program to define virtual destructors.

#include<bits/stdc++.h>

class A1{
    public:
    A1(){
        std::cout<<"\nIn constructor of class A1";
    }
    virtual ~A1(){
        std::cout<<"\nIn destructor of class A1";
    }
};

class A2 : public A1{
    public:
    A2(){
        std::cout<<"\nIn constructor of class A2";
    }
    ~A2(){
        std::cout<<"\nIn destructor of class A2";
    }
};  

int main(){
    A1 *p;
    p = new A2;      // new operator allocates the memory required for data members. When it goes out of scope, it should be deleted.
    delete p;
    return 0;
}