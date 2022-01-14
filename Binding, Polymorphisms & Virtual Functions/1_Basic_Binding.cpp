//                               STATIC (EARLY) BINDING



// Program to invoke function using scope access operator.

// #include<bits/stdc++.h>

// class A1{
//     int a;
//     public:
//     A1(){
//         a=10;
//     }
//     void display(){
//         std::cout<<"\na = "<<a;
//     }
// };

// class A2 : public A1{
//     int b;
//     public:
//     A2(){
//         b=20;
//     }
//     void display(){
//         std::cout<<"\nb = "<<b;
//     }
// };  

// int main(){
//     A2 x;
//     x.A1 :: display();                // Invokes base class function        
//     x.display();                     // Invokes derived class function
//     return 0;
// }



// A `virtual` keyword plays an important role in late binding.




// Program to invoke member function of base and derived class using pointer of base class.

// #include<bits/stdc++.h>

// class A1{
//     int a;
//     public:
//     A1(){
//         a=10;
//     }
//     void display(){
//         std::cout<<"\na = "<<a;
//     }
// };

// class A2 : public A1{
//     int b;
//     public:
//     A2(){
//         b=20;
//     }
//     void display(){
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

// use of virtual keyword

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

// Both the times, the display() function of base class is executed. This is so, because though in the second call p contains the address 
// of the object of derived class, yet the display() function of the base class replaces the existence of the display() function of the derived class. 

// runtime binding is neccessary, and it can be achieved using virtual keyword.





//                                         DYNAMIC (LATE) BINDING

// Dynamic binding of the member function in C++ can be done using virtual keyword.


// Program to perform few arithmetic operations on floating numbers using functions. Use function pointer(Late binding)

#include<bits/stdc++.h>

float add(float m, float n){
    return m+n;
}

float sub(float m, float n){
    return m-n;
}

float mul(float m, float n){
    return m*n;
}

int main(){
    float x,y;
    std::cout<<"\nEnter two numbers: ";
    std::cin>>x>>y;
    int task;
    do
    {
        std::cout<<"Enter task (1=add, 2=sub, 3=mul): ";
        std::cin>>task;
    } while (task < 1 || task > 3);

    float (*ptr) (float, float);   // function pointer pt is created

    switch (task)
    {
    case 1:
        ptr = add;
        break;
    case 2:
        ptr = sub;
        break;
    case 3:
        ptr = mul;
        break;
    
    default:
        break;
    }
    std::cout<<"Result of operation is: "<<ptr(x,y)<<std::endl;
    return 0;
}