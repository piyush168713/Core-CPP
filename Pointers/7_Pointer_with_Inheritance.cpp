//                                POINTER TO DERIVED CLASSES AND BASE CLASS


// Program to declare a pointer to the base class and access the member variable of base and derived class.

// #include<bits/stdc++.h>

// class A1{
//     public:
//     int b;
//     void display(){
//         std::cout<<"\nb = "<<b;
//     }
// };

// class A2 : public A1{
//     public:
//     int d;
//     void display(){
//         std::cout<<"\nb = "<<b<<"\nd = "<<d<<"\n";
//     }
// };

// int main(){
//     A1 *ptr;
//     A1 x;
//     ptr = &x;
//     ptr->b = 100;
//     // ptr->d = 200;      // Not accessible
//     std::cout<<"\nptr points to the base object";
//     ptr->display();
//     A2 y;
//     std::cout<<"\nptr points to the derived class";
//     ptr = &y;
//     ptr->b = 150;
//     // ptr->d = 300;      // Not accessible
//     ptr->display();
//     return 0;
// }





// Program to declare a pointer to derived class and access the member variable of base and derived class.

// #include<bits/stdc++.h>

// class A1{
//     public:
//     int b;
//     void display(){
//         std::cout<<"\nb = "<<b;
//     }
// };

// class A2 : public A1{
//     public:
//     int d;
//     void display(){
//         std::cout<<"\nb = "<<b<<"\nd = "<<d<<"\n";
//     }
// };

// int main(){
//     A2 *ptr;
//     A2 x;
//     ptr = &x;
//     ptr->b = 100;
//     ptr->d = 200;
//     std::cout<<"\nptr points to the derived object";
//     ptr->display();
//     return 0;
// }






// Program to declare pointer to class. Invoke constructor to initialize data member. Call member function using pointer.

// #include<bits/stdc++.h>

// class A1{
//     private:
//     int a;
//     public:
//     A1(){
//         a=20;
//     }
//     void show(){
//         std::cout<<"\na = "<<this->a;
//     }
// };

// int main(){
//     A1 *p, *q;
//     q = p->A1::A1();
//     p ->show();
//     q ->show();
//     return 0;
// }






// Program to declare object and pointer to class. Assign value of object to pointer to object. Display thier values. Also carry out
// conversion from basic type to class type.


#include<bits/stdc++.h>

class A1{
    int a;
    public:
    A1(){
        a=30;
    }
    void show(){
        std::cout<<"\na = "<<a;
    }
    A1(int x){
        this->a=x;
    }
};

int main(){
    A1 k, *ptr, a;
    *ptr = 50;
    k = *ptr;
    ptr->show();
    a.show();
    k.show();
    return 0;
}