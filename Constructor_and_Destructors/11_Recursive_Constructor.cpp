//                                       Recursive Constructor


// Program to invoke constructor recursively and calculate the triangular number of the entered number.

// #include<iostream>
// #include<process.h>

// class tri_num{
//     int f;
//     public:
//     tri_num(){
//         f=0;
//     }
//     void sum(int j){
//         f = f+j;
//     }
//     tri_num(int m){
//         if (m==0){
//             std::cout<<"Triangular number: "<<f;
//             exit(1);
//         }
//         sum(m);
//         tri_num::tri_num(--m);
//     }
// };

// int main(){
//     tri_num a;
//     a.tri_num::tri_num(5);
//     return 0;
// }




//            PROGRAM EXECUTION BEFORE main()



// Program to declare global object and observe execution of constructor.

// #include<iostream>

// struct text{
//     public:
//     text(){
//         std::cout<<"Constructor executed\n";
//     }
//     ~text(){
//         std::cout<<"Destructor executed";
//     }
// };

// text t;          // Global object
// int main() {

// }






// Program to declare object before main() and invoke member function.


// #include<iostream>

// class A{
//     private:
//     char *y;           // pointer y
//     int x;
//     public: 
//     A(){
//         std::cout<<"In constructor\n";
//         x=15;
//         show();        // Invokes member function
//     }  
//     void show(){
//         std::cout<<"In show() x = "<<x<<std::endl;
//     }
//     ~A(){
//         std::cout<<"In destructor\n";
//     }
// };

// A a;       // Object declared before main()

// int main(){
    
//     return 0;
// }







//                               CONSTRUCTOR AND DESTRUCTOR WITH STATIC MEMBERS



// The static member variable can be use to count the number of objects declared for a particular class



// Program to declare a static member variable. Count the number of objects created and destroyed.

// #include<iostream>

// class man{
//     static int no;
//     char name;
//     int age;
//     public:
//     man(){
//         no++;
//         std::cout<<"Number of objects exists: "<<no<<std::endl;
//     }
//     ~man(){
//         --no;
//         std::cout<<"\nNumber of objects exists: "<<no;
//     }
// };

// int man::no=0;

// int main(){
//     man A, B, C;
//     std::cout<<"\nPress any key to destroy object";
//     return 0;
// }






//                           LOCAL V/S GLOBAL OBJECT        

// Program to show difference between local and global object.

#include<iostream>

class text{
    public:
    void show(char *c){
        std::cout<<"\n"<<c;
    }
};

text t;

int main(){
    text t;
    ::t.show("Global");
    t.show("Local");
    return 0;
}