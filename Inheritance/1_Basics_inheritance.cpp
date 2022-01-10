// Program to derive a class publicly from base class. Declare the base class with its member under public section.

// #include<bits/stdc++.h>

// class A{        // Base Class
//     public:
//     int x;
// };

// class B : public A          // Derived Class          // Class B is derived publicly from class A
// {
//     public:
//     int y;
// };

// int main(){
//     B b;                 // Declaration of Object
//     b.x = 20;            // Access to base class members
//     b.y = 30;            // Access to derived class members
//     std::cout<<"\nmember of A: "<<b.x;
//     std::cout<<"\nmember of B: "<<b.y;  
//     return 0;
// }






// Program to derive a class publicly from base class. Declare the base class with its member under private section.

// #include<bits/stdc++.h>

// class A{         // Base class
//     private:
//     int x;
//     public:
//     A(){
//         x = 20;
//     }
//     void showx(){
//         std::cout<<"\nx = "<<x;
//     }
// };

// class B : public A{        // Derived class
//     public:
//     int y;
//     B(){
//         y = 30;
//     }
//     void show(){
//         showx();
//         std::cout<<"\ny = "<<y;
//     }
// };

// int main(){
//     B b;               // Declaration of object
//     b.show();
//     return 0;
// }






// Program to derive a class privately. Derive the member of base class under public section.

// #include<bits/stdc++.h>

// class A{
//     public:
//     int x;
// };

// class B : private A{
//     public:
//     int y;
//     B(){
//         x = 20;
//         y = 40;
//     }
//     void show(){
//         std::cout<<"\nx = "<<x;
//         std::cout<<"\ny = "<<y;
//     }
// };

// int main(){
//     B b;
//     b.show();
//     return 0;
// }




// Program to derive a class privately.

// #include<bits/stdc++.h>

// class A{
//     int x;
//     public:
//     A(){
//         x = 20;
//     }
//     void showx(){
//         std::cout<<"x = "<<x;
//     }
// };

// class B : private A{
//     public:
//     int y;
//     B(){
//         y = 40;
//     }
//     void show(){
//         showx();
//         std::cout<<"\ny = "<<y;
//     }
// };

// int main(){
//     B b;
//     b.show();
//     return 0;
// }





//                 PROTECTED DATA WITH PRIVATE INHERITANCE

// Program to declare protected data in base class. Access data of base class declared under protected section using member function of derived class.

// #include<bits/stdc++.h>

// class A{                   // Base class
//     protected:
//     int x;
// };

// class B : private A{         // Derived class
//     int y;
//     public:
//     B(){
//         x = 10;
//         y = 20;
//     }
//     void show(){
//         std::cout<<"\nx = "<<x;
//         std::cout<<"\ny = "<<y;
//     }
// };

// int main(){
//     B b;
//     b.show();
//     return 0;
// }
