                                    //   WORKING OF VIRTUAL FUNCTION

// Binding means a link between a function call and the real function that is executed when the function is called.

// When a compiler knows which function to call before execution, it is known as early binding.

// Dynamic binding means the actual function invoked at run time is dependent on the address stored in the pointer. 
// In this binding, a link between function call and actual function is made during program execution. 

// The keyword virtual prevents the compiler from performing early binding. Binding is postponed until program execution



// Program to define virtual and non-virtual functions and determine the size of the objects.

// #include<bits/stdc++.h>

// class A1{
//     private:
//     int j;
//     public:
//     virtual void show(){
//         std::cout<<"\nIn A1 class";
//     }  
// };

// class A2{
//     private:
//     int j;
//     public:
//     void show(){
//         std::cout<<"\nIn A2 class";
//     }
// };  

// class A3{
//     public:
//     void show(){
//         std::cout<<"\nIn A3 class";
//     }
// };

// int main(){
//     A1 x;
//     A2 y;
//     A3 z;
//     std::cout<<"\nSize of x = "<<sizeof(x);    
//     std::cout<<"\nSize of y = "<<sizeof(y);    
//     std::cout<<"\nSize of z = "<<sizeof(z);    
//     return 0;
// }






// Program to define virtual member functions in derived classes.

// #include<bits/stdc++.h>

// class A{
//     public:
//     virtual void area(){
//         std::cout<<"\nArea of room";
//     }
//     virtual void rent(){
//         std::cout<<"\nRent of room";
//     }
//     void period(){
//         std::cout<<"\nPeriod of room";
//     }
// };

// class A1 : public A{
//     public:
//     void area(){
//         std::cout<<"\nArea of room 1";
//     }
//     void rent(){
//         std::cout<<"\nRent of room 1";
//     }
// };

// class A2 : public A{
//     void area(){
//         std::cout<<"\nArea of room 2";
//     }
//     void rent(){
//         std::cout<<"\nRent of room 2";
//     }
//     void period(){
//         std::cout<<"\nPeriod of room 2";
//     }
// };  

// class A3 : public A{
//     void area(){
//         std::cout<<"\nArea of room 3";
//     }
// };

// int main(){
//     A *p;
//     A x;
//     p = &x;
//     p->area();
//     p->period();
//     p->rent();
//     A *sa, *sb, *sc;

//     A1 a;
//     A2 b;
//     A3 c;
//     sa = &a;
//     sb = &b;
//     sc = &c;
//     sa->area();
//     sa->rent();
//     sb->area();
//     sb->rent();
//     sc->area();
//     sc->rent();
//     sa->period();
//     sb->period();
//     A d;
//     d.area();
//     A1 e;
//     A3 f;
//     e.area();
//     f.rent();
//     return 0;
// }









//                                       VIRTUAL FUNCTIONS IN DERIVED CLASSES


// Program to redifine a virtual base class function in the derived class. Also, add a new member in the derived class. Observe the VTABLE.

#include<bits/stdc++.h>

class A1{
    public:
    virtual void joy(){
        std::cout<<"\nIn joy of class A1";
    }
};

class A2 : public A1{
    public:
    void joy(){
        std::cout<<"\nIn joy of class A2";
    }
    void virtual joy2(){
        std::cout<<"\nIn joy2 of class A2";
    }
};

int main(){
    A1 *a, *b;
    A1 c;
    A2 d;
    a = &c;
    b = &d;
    a->joy();
    b->joy();
    // b->joy2();    // Not accessible coz joy2 is not member of class A1
    return 0;
}