// 1)   Program to declare static member functions and call them from the main() function.

// #include<iostream>
// #include<conio.h>

// class bita{
//     private:
//     static int k;
//     public:
//     static void count() {k++;}
//     static void display(){
//         std::cout<<"\nValue of k: "<<k;
//     }
// };
// int bita::k = 0;

// int main(){
//     bita::display();
//     bita::count();
//     bita::count();        // Invokes count() function
//     bita::display();      // Invokes display() function


//     // bita b;
//     // b.display();
//     // b.count();
//     // b.count();
//     // b.display();
//     return 0;
// }


        //   *** static Private member function

// 2) Program to define private static member function and invoke it.


// #include<iostream>

// class bita{
//     private:
//     static int k;
//     static void count() {k++;}
//     public:
//     static void display(){
//         count();                    //  Call to private static member function
//         std::cout<<"\nValue of k: "<<k;
//     }
// };
// int bita::k = 0;

// int main(){
//     bita::display();
//     bita::display();
//     bita::display();
//     return 0;
// }



        //   *** static Public member variable

// 3) Program to declare static public member variable, global and local variable with the same name. Initialize and display their contents.

#include<iostream>

int c = 11;   //  declared global variable

class bita{
    public:
    static int c;
};
int bita::c = 22;    // class member variable

int main(){
    int c = 33;       // declared local variable
    std::cout<<"\nClass member c: "<< bita::c ;
    std::cout<<"\nGlobal variable c: "<< ::c ;
    std::cout<<"\nLocal variable c: "<< c ;
    return 0;
}
