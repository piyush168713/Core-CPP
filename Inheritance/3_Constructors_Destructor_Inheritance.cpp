//                         CONSTRUCTORS, DESTRUCTOR & INHERITANCE


// Program to show sequence of execution of constructor and destructor in multiple inheritance.

// #include<bits/stdc++.h>

// class A{              // Base Class
//     public:
//     A(){
//         std::cout<<"\nZero-argument constructor of base class A";
//     }
//     ~A(){
//         std::cout<<"\nDestructor of the class A";
//     }
// };

// class B{             // Base Class
//     public:
//     B(){
//         std::cout<<"\nZero-argument constructor of base class B";
//     }
//     ~B(){
//         std::cout<<"\nDestructor of the class B";
//     }
// };

// class C : public A, public B{             // Derivation of class
//     public:
//     C(){
//         std::cout<<"\nZero-argument constructor of derived class C";
//     }
//     ~C(){
//         std::cout<<"\nDestructor of the class C";
//     }
// };

// int main(){
//     C x;                  // Object Declaration
//     return 0;
// }






// Program to use constructor and destructor in all classes(base and derived class). Read and Display the data.

// #include<bits/stdc++.h>

// class A1{
//     protected:
//     char name[15];
//     int age;
//     A1(){
//         std::cout<<"Name: ";
//         std::cin>>name;
//         std::cout<<"Age: ";
//         std::cin>>age;
//     }
//     ~A1(){
//         std::cout<<"\nName: "<<name;
//         std::cout<<"\nAge: "<<age;
//     }
// };

// class A2 : public A1{
//     protected:
//     float height;
//     float weight;
//     A2(){
//         std::cout<<"Height: ";
//         std::cin>>height;
//         std::cout<<"Weight: ";
//         std::cin>>weight;
//     }
//     ~A2(){
//         std::cout<<"\nHeight: "<<height<<" Feets";
//         std::cout<<"\nWeight: "<<weight<<" Kg";
//     }
// };

// class A3 : public A2{
//     char sex;
//     public:
//     A3(){
//         std::cout<<"Sex: ";
//         std::cin>>sex;
//     }
//     ~A3(){
//         std::cout<<"\nSex: "<<sex;
//     }
// };

// int main(){
//     A3 x;
//     return 0;
// }





// Program to create derived class from base classses. Use constructors and destructors.




//                        BASE AND DERIVED CLASSES WITHOUT CONSTRUCTORS


// Program to derive a class. The base and derive classes should be without constructors.

// #include<bits/stdc++.h>

// class A1{
//     public:
//     int x;
// };

// class A2 : public A1{
//     int y;
//     public:
//     void set(int i, int j){
//         x = i;
//         y = j;
//     }
//     void show(){
//         std::cout<<"\nx = "<<x<<"\ny = "<<y;
//     }
// };

// int main(){
//     A2 m;
//     m.set(4,5);
//     m.show();
//     return 0;
// }




//                       BASE CLASS WITH CONSTRUCTOR AND DERIVED CLASS WITHOUT CONSTRUCTORS     


// Program to declare a base class with constructor and a derived class without constructor.

// #include<bits/stdc++.h>

// class A1{
//     public:
//     int x;
//     A1(){
//         std::cout<<"In base class constructor";
//         x = 10;
//     }
// };

// class A2 : public A1{
//     int y;
//     public:
// };

// int main(){
//     A2 m;
//     return 0;
// }





//                        BASE CLASS WITHOUT CONSTRUCTORS AND DERIVED CLASS WITH CONSTRUCTORS 
 

// Program to declare base class without constructor and derived class with constructor.

// #include<bits/stdc++.h>

// class A1{
//     int x;
//     public:

// };  

// class A2 : public A1{
//     public:
//     A2(){
//         std::cout<<"In Derived Class Constructor";
//     }
// };

// int main(){
//     A2 m;
//     return 0;
// }




//                         BASE AND DERIVED CLASSES WITH CONSTRUCTOR


// Program to declare both base and derived classes with constructor.

// #include<bits/stdc++.h>

// class A1{
//     public:
//     A1(){
//         std::cout<<"In base class constructor";
//     }
// };

// class A2 : public A1{
//     public:
//     A2(){
//         std::cout<<"\nIn Derived Class Constructor";
//     }
// };

// int main(){
//     A2 x;
//     return 0;
// }






//                BASE CLASS WITH VARIOUS CONSTRUCTOR AND DERIVED CLASS WITH ONE CONSTRUCTOR      


// Program to declare multiple constructors in base class and single constructor in derived class.

// #include<bits/stdc++.h>

// class A1{
//     public:
//     int x;
//     A1(){
//         std::cout<<"\nZero argument base class constructor";
//     }
//     A1(int k){
//         std::cout<<"\nOne argument base class constructor";
//     }
// };

// class A2 : public A1{
//     int y;
//     public:
//     A2(int j){
//         std::cout<<"\nOne argument derived class constructor";
//         y = j;
//     }
// };

// int main(){
//     A2 m(3);
//     return 0;
// }







// Program to declare base class and derived class without default constructor.

// #include<bits/stdc++.h>

// class A1{
//     public:
//     int x;
//     A1(int k){
//         x=k;
//         std::cout<<"\nOne argument base class constructor";
//     }
// };

// class A2 : public A1{
//     int y;
//     public:
//     A2(int j) : A1(j){          // Base constructor explicitly invoked.         // In the absence of explicit call of the base class constructor, the compiler shows an error message.
//         std::cout<<"\nOne argument derived class constructor";
//         y=j;
//     }
// };  

// int main(){
//     A2 m(3);
//     return 0;
// }







//                                  CONSTRUCTORS AND MULTIPLE INHERITANCE

// Program to derive a class using multiple base classes. Observe the execution constructor when the object of derived class is declared.

// #include<bits/stdc++.h>

// class A1{
    // public:
    // A1(){
    //     std::cout<<"\nZero argument constructor of base class A1";
    // }
// };

// class A2{
//     public:
//     A2(){
//         std::cout<<"\nZero argument constructor of base class A2";
//     }
// };

// class A3 : public A1, A2{
//     public:
//     A3(){
//         std::cout<<"\nZero argument constructor of derived class A3";
//     }
// };

// int main(){
//     A3 x;
//     return 0;
// }









//                                  CONSTRUCTORS IN MULTIPLE INHERITANCE WITH EXPLICIT CALL

// Program to derive a class using multiple base classes. Invoke the constructors of base classes explicitly.

// #include<bits/stdc++.h>

// class A1{
//     public:
//     A1(){
//         std::cout<<"\nZero argument constructor of base class A1";
//     }
// };

// class A2{
//     public:
//     A2(){
//         std::cout<<"\nZero argument constructor of base class A2";
//     }
// };

// class A3 : public A2, A1{
//     public:
//     A3() : A2(), A1(){
//         std::cout<<"\nZero argument constructor of derived class A3";
//     }
// };  

// int main(){
//     A3 x;
//     return 0;
// }






//                          MULTIPLE INHERITANCE AND VIRTUAL CLASS

// Program to derive a class using multiple base classes. Invoke the constructor of the base classes explicitly.
// Declare any one base as virtual.

// #include<bits/stdc++.h>

// class A1{
//     public:
//     A1(){
//         std::cout<<"\nZero argument constructor of base class A1";
//     }
// };

// class A2{
//     public:
//     A2(){
//         std::cout<<"\nZero argument constructor of base class A2";
//     }
// };

// class A3 : public A2, virtual A1{      // The constructor of the virtual class is executed first. 
//     public:
//     A3() : A2(), A1(){
//         std::cout<<"\nZero argument constructor of derived class A3";
//     }
// };  

// int main(){
//     A3 x;
//     return 0;
// }







//                      EXECUTION OF CONSTRUCTORS IN MULTILEVEL INHERITANCE

// Program to derive a classes using multilevel inheritance and observe the execution sequence of constructors.

// #include<bits/stdc++.h>

// class A1{
//     public:
//     A1(){
//         std::cout<<"\nZero argument constructor of base class A1";
//     }
// };

// class A2 : public A1{
//     public:
//     A2(){
//         std::cout<<"\nZero argument construtor of base class A2";
//     }
// };

// class A3 : public A2{
//     public:
//     A3(){
//         std::cout<<"\nZero argument construtor of base class A3";
//     }
// };

// int main(){
//     A3 x;
//     return 0;
// }