//                           POINTER TO MEMBER

// Program to initialize and display the contents of the structure using dot (.) and arrow (->) operator.

// #include<bits/stdc++.h>

// int main(){
//     struct c
//     {
//         char *name;
//     };

//     c b, *ptr;
//     ptr->name = " CPP";
//     b.name = "C &";
//     std::cout<<b.name;
//     std::cout<<ptr->name;

//     return 0;
// }

// Program to initialize and display the contents of the structure using .* and arrow ->* operators.

// #include<bits/stdc++.h>

// struct data
//     {
//         int x;         // By default public
//         float y;
//     };

// int main(){
//     int data :: *xp=&data::x;
//     float data :: *yp=&data::y;
//     data d = {11,1.14};
//     std::cout<<d.*xp<<std::endl<<d.*yp;
//     data *pp;
//     pp = &d;
//     std::cout<<std::endl<<pp->*xp<<std::endl<<pp->*yp;
//     d.*xp=22;
//     pp->*yp=8.25;
//     std::cout<<std::endl<<d.*xp<<std::endl<<d.*yp;
//     std::cout<<std::endl<<pp->*xp<<std::endl<<pp->*yp;

//     return 0;
// }

// Program to declare pointer to member variable and display the contents of the variable.

// #include<bits/stdc++.h>

// class A{
//     public:
//     int x;
//     int y;
//     int z;
// };

// int main(){
//     A a;
//     int *ptr;
//     a.x=5;
//     a.y=10;
//     a.z=15;
//     ptr = &a.x;
//     std::cout<<"\nx = "<<*ptr;
//     ptr++;
//     std::cout<<"\ny = "<<*ptr;
//     ptr++;
//     std::cout<<"\nz = "<<*ptr;
//     return 0;
// }

//                               ACCESSING PRIVATE MEMBERS WITH POINTERS

// Program to access private members like public members of the class using pointers.

// #include <bits/stdc++.h>

// class A
// {
// private:
//     int j;

// public:
//     int x;
//     int y;
//     int z;
//     A()
//     {
//         j = 20;
//     }
// };

// int main()
// {
//     A a;
//     int *ptr;
//     a.x = 11;
//     a.y = 10;
//     a.z = 15;
//     ptr = &a.x;
//     ptr--;
//     std::cout << std::endl
//               << "j = " << *ptr;
//     ptr++;
//     std::cout << std::endl
//               << "x = " << *ptr;
//     ptr++;
//     std::cout << std::endl
//               << "y = " << *ptr;
//     ptr++;
//     std::cout << std::endl
//               << "z = " << *ptr;

//     return 0;
// }







//                       DIRECT ACCESS TO PRIVATE MEMBERS


// Program to initialize the private members and display them without using member function.

// #include<bits/stdc++.h>

// class A{
//     private:
//     int x;
//     int y;
// };

// int main(){
//     A a;
//     int *p = (int*)&a;
//     *p = 3;
//     p++;
//     *p = 9;
//     p--;
//     std::cout<<"\nx = "<<*p;
//     p++;
//     std::cout<<"\ny = "<<*p;    
//     return 0;
// }






// Program to initialize and display private members using pointers.

#include<bits/stdc++.h>

class A{
    private:
    int x;
    int y;
};

class B : public A{
    public:
    int z;
    void show(int *k){
        std::cout<<"x = "<<*k<<"\ny = "<<*(k+1)<<"\nz = "<<*(k+2);
    }
};

int main(){
    B b;
    int *p;
    p = &b.z;
    *p = 3;
    p--;
    *p=4;
    p--;
    *p=5;
    b.show(p);
    return 0;
}