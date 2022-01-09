//                                            const Member Function


// The constant function cannot modify any data in the class.

// Program to declare const member function and attempt any operation within it.

// #include<iostream>
// #include<conio.h>

// class A{
//     int c;
//     public:
//     void add(int a, int b) const{
//     // c = a+b;   // Invalid statement
//     a+b;
//     std::cout<<"a+b = "<<a+b;
//     }
// };

// int main(){
//     A a;
//     a.add(4,5);
//     return 0;
// }



//                          Volatile member function
// Calling volatile member function with volatile object is safe.


// Program to call a volatile member from a volatile object.

// #include<iostream>

// class A{
//     private:
//     int x;
//     public:
//     void value() volatile {        // The volatile member function
//         int x = 10;
//         std::cout<<"The value of x: "<<++x;
//     }
// };

// int main(){
//     volatile A kit;   // The kit is a volatile object
//     kit.value();      // Call a volatile member function safely
//     return 0;
// }




//                               The Recursive member function


// a function is called respectively by itself.
// The recursion can be used directly or indirectly.

// Direct recursion function calls to itself until the condition is true.
// In indirect recursion - a function calls to another function and then called function calls to the calling function.


// program to calcalute triangular number by creating a member function. Call it recursively.
// #include<iostream>
// #include<conio.h>

// class num{
//     public:
//     int tri_num(int m){
//         int f = 0;
//         if (m==0)
//         return (f);
//         else
//         f=f+m+tri_num(m-1);
//         return (f);
//     }
// };

// int main(){
//     num a;
//     int x;
//     std::cout<<"Enter a number: ";
//     std::cin>>x;
//     std::cout<<"Triangular number of "<<x<<" is: "<<a.tri_num(x);
//     return 0;
// }










//                              Member function and non-member function

// Program to call a member function using non-member function.

// #include<iostream>

// void moon(void);

// class mem{
//     public:
//     void earth(){
//         std::cout<<"On earth";
//     }
// };

// int main(){
//     mem k;
//     moon();
//     return 0;
// }
// void moon(){
//     mem j;
//     j.earth();
//     std::cout<<std::endl<<"On moon";
// }



//              The main() Function as a member function

// Program to make main() as a member function.

// #include<iostream>
// #include<conio.h>

// class A{
//     public:
//     void main(){
//         std::cout<<"In member function main()";
//     }
// };

// int main(){
//     A *a;
//     a->main();
//     return 0;
// }


