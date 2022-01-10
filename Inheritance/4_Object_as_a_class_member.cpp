// FORMAT 

// class A1
// {
//     *****      // members
//     *****
// }

// class A2
// {
//     A1 x;     // object of class A1 as member
//     *****
// }










//                  USES OF ACCESS SPECIFIERS 

//  ACCESS (using)                            PUBLIC                  PRIVATE                    PROTECTED

// Scope Access :: operator                   possible              Not possible                 possible
// Object                                     possible              Not possible                 Not possible
// Direct                                     possible              Not possible                 possible











// Program to use object of one class in another class as a member.

// #include<bits/stdc++.h>

// class A1{
//     public:
//     int x;
//     A1(){
//         std::cout<<"\nConstructor of class A1";
//         x=20;
//     }
// };

// class A2{
//     public:
//     int k;
//     A1 y;      // Object of class A1 as member
//     A2(){
//         k=30;
//         std::cout<<"\nConstructor of class A2";
//     }
//     void show(){
//         std::cout<<"\nx = "<<y.x<<"\nk = "<<k;      // uses object y for accessing elements of class A1
//     }
// };

// int main(){
//     A2 m;
//     m.show();
//     return 0;
// }






// Program to access member variable of base class using object, scope access operator and direct.

// #include<bits/stdc++.h>

// class A1{
//     public:
//     char name[15];
//     int age;
// };  

// class A2 : public A1{
//     private:
//     A1 a;
//     float height;
//     float weight;
//     public:
//     A2(){
//         std::cout<<"Access using Scope access operator\n";
//         std::cout<<"Name: ";
//         std::cin>>A1::name;
//         std::cout<<"Age: ";
//         std::cin>>A1::age;

//         std::cout<<"\nAccess using object of the class\n";
//         std::cout<<"Name: ";
//         std::cin>>a.name;
//         std::cout<<"Age: ";
//         std::cin>>a.age;

//         std::cout<<"\nAccess using direct member variable\n";
//         std::cout<<"Name: ";
//         std::cin>>name;
//         std::cout<<"Age: ";
//         std::cin>>age;
//         std::cout<<"Height: ";
//         std::cin>>height;
//         std::cout<<"Weight: ";
//         std::cin>>weight;
//     }
//     ~A2(){
//         std::cout<<"\nDisplay using Scope access operator";
//         std::cout<<"\nName: "<<A1::name;
//         std::cout<<"\nAge: "<<A1::age;

//         std::cout<<"\n\nDisplay using object of the class";
//         std::cout<<"\nName: "<<a.name;
//         std::cout<<"\nAge: "<<a.age;

//         std::cout<<"\n\nDisplay using direct member variable";
//         std::cout<<"\nName: "<<name;
//         std::cout<<"\nAge: "<<age;
//         std::cout<<"\nHeight: "<<height<<" Feets";
//         std::cout<<"\nWeight: "<<weight<<" Kg";
//     }
// };

// int main(){
//     A2 x;
//     return 0;
// }







// Program to derive a class from two base classes. Use objects of both the classes as member variables for derived class.
// Initialize and display the contents of classes using constructor and destructor.

// #include<bits/stdc++.h>

// class A1{
//     public:
//     int x;
// };

// class A2{
//     public:
//     int y;
// };

// class A3 : public A1, A2{
//     public:
//     A1 a;
//     A2 b;
//     A3(){
//         a.x = 10;
//         b.y = 20;
//         std::cout<<"\nx = "<<a.x<<"\ny = "<<b.y;
//     }
//     ~A3(){

//     }
// };

// int main(){
//     A3 m;
//     return 0;
// }