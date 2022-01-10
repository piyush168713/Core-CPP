//                           POINTERS AND INHERITANCE

// A pointer to a public member variable gives us access to private member variables.

// no member functions are used.


// Program to access private member variables of base class using pointers.

#include<bits/stdc++.h>

class A1{
    private:
    int x;
    int y;
    public:
    A1(){
        x=1;
        y=2;
    }
};

class A2 : private A1{
    public:
    int z;
    A2(){
        z=3;
    }
};

int main(){
    A2 a;         // Object declaration
    int *p;       // Pointer declaration
    p = &a.z;        // Address of public member variable is stored in pointer
    std::cout<<"Addess of z: "<<(unsigned)p<<" Value of z: "<<*p;
    p--;          // Points to previous location
    std::cout<<"\nAddess of y: "<<(unsigned)p<<" Value of y: "<<*p;
    p--;
    std::cout<<"\nAddess of x: "<<(unsigned)p<<" Value of x: "<<*p;
    return 0;
}