// The name of outer class is called qualifier name, and the class defined inside is called nested class.

// The use of nested classes enhances the power of abstract data type and helps to construct more powerful data structure.

// The nested classes are useful to hide a particular class and its objects within a qualifier class.



// Program to declare classes within classes and access the variables of both the classes.

// #include<iostream>

// class A{       // Host class of qualifier class
//     public:
//     int x;
//     A(){
//         x = 10;
//     }

//     class B{         // Nested class
//         public:
//         int y;
//         B(){
//             y = 20;
//         }

//         void show(){
//             A a;
//             std::cout<<"x = "<<a.x<<std::endl;
//             std::cout<<"y = "<<y<<std::endl;
//         }
//     };     // End of nested class
// };         // End of Host class

// int main(){
//     A::B m;
//     m.show();
//     return 0;
// }




// Program to declare multiple qualifier classes and declare an object of every class.

#include<bits/stdc++.h>

class A{
    public:
    int x;
    A(){
        x=5;
        std::cout<<"x = "<<x<<std::endl;
    }

    class B{
        public:
        int y;
        B(){
            y = 10;
            std::cout<<"y = "<<y<<std::endl;
        }
        class C{
            public:
            int z;
            C(){
                z = 15;
                std::cout<<"z = "<<z<<std::endl;
            }
        };
    };
};

int main(){
    A a;         // Outer class object
    A::B b;         //Middle class object
    A::B::C c;         // inner class object

    A();
    A::B();
    A::B::C();
    return 0;
}