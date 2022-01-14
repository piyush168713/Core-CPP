//                                    VIRTUAL FUNCTIONS

// Using of virtual function, the matching function overrides the base class function of a similar name.
// Virtual function can only be the member functions.

// int Base :: get(int) and int Derived :: get(int) even when they are not virtual.



// Program to declare virtual function and execute the same function defined in the base and derived class.

// #include<bits/stdc++.h>

// class A1{
//     int a;
//     public:
//     A1(){
//         a=10;
//     }  
//     virtual void display(){
//         std::cout<<"\na = "<<a;
//     }
// };

// class A2 : public A1{
//     int b;
//     public:
//     A2(){
//         b=20;
//     }
//     virtual void display(){
//         std::cout<<"\nb = "<<b;
//     }
// };

// int main(){
//     A1 x, *p;
//     A2 y;
//     p = &x;
//     p->display();
//     p = &y;
//     p->display();
//     return 0;
// }





// Program to use pointer for both base and derived class and call the member function. Use virtual keyword.

#include<bits/stdc++.h>

class A1{
    public:
    virtual void display(){
        std::cout<<"\nIn function display() class A1";
    }
    virtual void show(){
        std::cout<<"\nIn function show() class A1";
    }
};

class A2 : public A1{
    public:
    void display(){
        std::cout<<"\nIn function display() class A2";
    }
    void show(){
        std::cout<<"\nIn function display() class A2";
    }
};  

int main(){
    A1 x;
    A2 y;
    A1 *ptr;
    std::cout<<"\nPointer ptr points to class A1\n";
    ptr = &x;
    ptr->display();
    ptr->show();
    std::cout<<"\n\n\nNow Pointer ptr points to derived class A2\n";
    ptr = &y;
    ptr->display();
    ptr->show();
    return 0;
}