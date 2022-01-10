//                                      TYPES OF INHERITANCE

// 1) SINGLE INHERITANCE
// Only one class is derived ferom single base class.


// Program to show single inheritance b/w two classes.

// #include<bits/stdc++.h>

// class ABC{
//     protected:
//     char name[15];
//     int age;
// };

// class abc : public ABC{
//     float height;
//     float weight;
//     public:
//     void getdata(){
//         std::cout<<"Enter name and age: ";
//         std::cin>>name>>age;
//         std::cout<<"Enter Height and weight: ";
//         std::cin>>height>>weight;
//     }
//     void show(){
//         std::cout<<"\nName: "<<name<<"\nAge: "<<age<<" Years";
//         std::cout<<"\nHeight: "<<height<<" Feets"<<"\nWeight: "<<weight<<" Kg";
//     }
// };  

// int main(){
//     abc d;
//     d.getdata();
//     d.show();
//     return 0;
// }






// 2)                                 MULTILEVEL INHERITANCE

// The procedure of deriving a class from a derived class.


// Prgram to create  multilevel inheritance. Create classes A1, A2 and A3.

// #include<bits/stdc++.h>

// class A1{
//     protected:
//     char name[15];
//     int age;
// };

// class A2 : public A1{
//     protected:
//     float height;
//     float weight;
// };

// class A3 : public A2{
//     protected:
//     char sex;
//     public:
//     void get(){
//         std::cout<<"Name: ";
//         std::cin>>name;
//         std::cout<<"Age: ";
//         std::cin>>age;
//         std::cout<<"Height: ";
//         std::cin>>height;
//         std::cout<<"Weight: ";
//         std::cin>>weight;
//         std::cout<<"Sex: ";
//         std::cin>>sex;
//     }
//     void show(){
//         std::cout<<"\nName: "<<name;
//         std::cout<<"\nAge: "<<age<<" Years";
//         std::cout<<"\nHeight: "<<height<<" Feets";
//         std::cout<<"\nWeight: "<<weight<<" Kg";
//         std::cout<<"\nSex: "<<sex;
//     }
// };

// int main(){
//     A3 m;
//     m.get();
//     m.show();
//     return 0;
// }







// 3)                      MULTIPLE INHERITANCE
// A class derived from more than one class.
// Single derived class and more than one base class



// Program to derive a class from multiple base classes.

// #include<bits/stdc++.h>

// class A{                      // Base Class
//     protected:
//     int a;
// };

// class B{                      // Base Class
//     protected:
//     int b;
// };

// class C{                      // Base Class
//     protected:
//     int c;
// };

// class D{                      // Base Class
//     protected:
//     int d;
// };

// class E : public A, B, C, D{                // Derived Class
//     int e;
//     public:
//     void getdata(){
//         std::cout<<"\nEnter values of a, b, c & d & e: ";
//         std::cin>>a>>b>>c>>d>>e;
//     }
//     void showdata(){
//         std::cout<<"\na = "<<a<<"\nb = "<<b<<"\nc = "<<c<<"\nd = "<<d<<"\ne = "<<e;
//     }
// };

// int main(){
//     E x;
//     x.getdata();
//     x.showdata();
//     return 0;
// }





// 4)                             HIERARCHICAL INHERITANCE

// One class could be inherited from one or more classes.

// Program to show hierarchical inheritance.

// #include<bits/stdc++.h>

// class red{
//     public:
//     red(){
//     std::cout<<"Red";
//     }
// };

// class yellow{
//     public:
//     yellow(){
//     std::cout<<"Yellow";
//     }
// };

// class blue{
//     public:
//     blue(){
//         std::cout<<"Blue";
//     }
// };

// class orange : public red, public yellow{
//     public:
//     orange(){
//         std::cout<<" = Orange ";
//     }
// };

// class green : public blue, public yellow{
//     public:
//     green(){
//         std::cout<<" = Green ";
//     }
// };

// class voilet : public red, public blue{
//     public:
//     voilet(){
//         std::cout<<" = Voilet ";
//     }
// };

// class reddishbrown : public orange, public voilet{
//     public:
//     reddishbrown(){
//         std::cout<<" = Reddishbrown";
//     }
// };

// class yellowishbrown : public green, public orange{
//     public:
//     yellowishbrown(){
//         std::cout<<" = Yellowishbrown";
//     }
// };

// class bluishbrown : public voilet, public green{
//     public:
//     bluishbrown(){
//         std::cout<<" = Bluishbrown";
//     }
// };



// int main(){
//     reddishbrown r;
//     std::endl(std::cout);
//     yellowishbrown y;
//     std::endl(std::cout);
//     bluishbrown b;
//     std::endl(std::cout);
//     return 0;
// }





// 5)                                          HYBRID INHERITANCE
// Combination of one or more types of inheritance.

// Program to create a derived class from multiple base classes.

// #include<bits/stdc++.h>

// class player{
//     protected:
//     char name[15];
//     char gender;
//     int age;
// };

// class phy : public player{
//     protected:
//     float height;
//     float weight;
// };

// class location{
//     protected:
//     char city[10];
//     int pin;
// };

// class game : public phy, location{
//     protected:
//     char game[15];
//     public:
//     void getdata(){
//         std::cout<<"Enter following information: "<<std::endl;
//         std::cout<<"Name: ";
//         std::cin>>name;
//         std::cout<<"Gender: ";
//         std::cin>>gender;
//         std::cout<<"Age: ";
//         std::cin>>age;
//         std::cout<<"Height: ";
//         std::cin>>height;
//         std::cout<<"Weight: ";
//         std::cin>>weight;
//         std::cout<<"City: ";
//         std::cin>>city;
//         std::cout<<"Pincode: ";
//         std::cin>>pin;
//         std::cout<<"Game: ";
//         std::cin>>game;
//     }
//     void show(){
//         std::cout<<"\nName: "<<name;
//         std::cout<<"\nGender: "<<gender;
//         std::cout<<"\nAge: "<<age<<" Years";
//         std::cout<<"\nHeight :"<<height<<" Feets";
//         std::cout<<"\nWeight: "<<weight<<" Kg";
//         std::cout<<"\nCity: "<<city;
//         std::cout<<"\nPincode: "<<pin;
//         std::cout<<"\nGame: "<<game;
//     }
// };

// int main(){
//     game g;
//     g.getdata();
//     g.show();
//     return 0;
// }







// 6)                                    MULTIPATH INHERITANCE

// When a class is derived from two or more classes, those are derived from the same base class.

// Example: 
// Ambiguity in classes

// class A1{
//     protected:
//     int a1;
// };

// class A2 : public A1{
//     protected:
//     int a2;
// };

// class A3 : public A1{
//     protected:
//     int a3;
// };
// // ------------------------------
// class A4 : public A2, A3{
//     protected:
//     int a4;
// };

// Ambiguity in classes -> To overcome from ambiguity use `virtual` declaration

// compiler shows error messages as:
// Error PRG58.CPP 30 : Member is ambiguity: 'A1 :: a1' and 'A1 :: a1'
// Error PRG58.CPP 37 : Member is ambiguity: 'A1 :: a1' and 'A1 :: a1'







//                             VIRTUAL BASE CLASSES

// To overcome the AMBIGUITY occuring due to multipath inheritance, the C++ provides the keyword `virtual`. The keyword `virtual` declares 
// the specified classes virtual.

// Example: 

// class A1{
//     protected:
//     int a1;
// };

// class A2 : virtual public A1{
//     protected:
//     int a2;
// };

// class A3 : virtual public A1{
//     protected:
//     int a3;
// };
// // ------------------------------
// class A4 : public A2, A3{
//     protected:
//     int a4;
// };


// When classes are declared as virtual, the compiler takes essential caution to avoid the duplication of member variables.
// We make a class virtual if it is a base class that has been used by more than one derived class as their base class. 





// Program to declare virtual base classes. Derive a class using two virtual classes.

#include<bits/stdc++.h>

class A1{
    protected:
    int a1;
};

class A2 : virtual public A1{
    protected:
    int a2;
};

class A3 : virtual public A1{
    protected:
    int a3;
};

class A4 : public A2, A3{
    int a4;
    public:
    void get(){
        std::cout<<"Enter the values of a1, a2, a3 & a4: ";
        std::cin>>a1>>a2>>a3>>a4;
    }
    void show(){
        std::cout<<"\na1 = "<<a1<<"\na2 = "<<a2<<"\na3 = "<<a3<<"\na4 = "<<a4;
    }
};

int main(){
    A4 x;
    x.get();
    x.show();
    return 0;
}