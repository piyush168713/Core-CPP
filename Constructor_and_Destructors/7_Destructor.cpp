// Program to demonstrate execution of constructor and destructor.

// #include<iostream>

// class text{
//     public:
//     text(){
//         std::cout<<"Constructor executed.";
//     }
//     ~text(){
//         std::cout<<"\nDestrucor executed.";
//     }
// };

// int main(){
//     text t1;
//     return 0;
// }



// Program to create an object and release them using destructors.

// #include<iostream>

// int c = 0;     // counter for counting objects created and destroyed.

// class reel{
//     public:
//     reel(){
//         c++;
//         std::cout<<"Object created: Object("<<c<<")\n";
//     }
//     ~reel(){
//         std::cout<<"Object released: Object("<<c<<")\n";
//         c--;
//     }
// };

// int main(){
//     std::cout<<"\n In main()\n";
//     reel a, b;
//     std::cout<<"\n In block A\n";
//     {
//         class reel c;
//     }
//     std::cout<<"\nAgain in main()\n";
//     return 0;
// }




// Program to invoke constructor and destructor.

// #include<iostream>
// // #include<conio.h>
// // #include<cmath>

// class byte{
//     int bit;
//     int bytes;
//     public:
//     byte(){
//         std::cout<<"\nConstructor invoked";
//         bit = 64;
//         bytes = bit/8;
//     }
//     ~byte(){
//         std::cout<<"\nDestructor invoked";
//         std::cout<<"\nBit = "<<bit;
//         std::cout<<"\nBytes = "<<bytes;
//     }
// };

// int main(){
//     byte m;
//     byte();     // Calling Constructor so, constructor executed two times. Compiler automatically invokes the constructor.

//     // Only object of the class alone is not able to invoke the destructor, the object needs the help of the class.
//     // The destructor can be invoked using the statement x.byte::~byte().

//     // m.byte();    // Invalid statement
//     // m.byte::byte();     // valid statement
//     // ~byte();       // Invalid statement
//     // byte.~byte();      // Invalid statement
//     // m.~byte();       // Member identifier expected
//     m.byte::~byte();
//     return 0;
// }






// Program to define conditional constructor and destructor.

// #include<iostream>
// #include<conio.h>

// int c=0;

// class byte{
//     int bit;
//     int bytes;
//     public:
//     ~byte();   // Prototype definition
//     byte(){
//         std::cout<<"\nConstructor Invoked";
//         bit = 64;
//         bytes = bit/8;
//         byte:: ~byte();    // Call to destructor
//     }
// };

// byte::~byte()
// {
//     if (c==0)
//     {
//         // byte()     // Call to constructor
//         std::cout<<"\n Destructor invoked";
//         std::cout<<"\n Bit = "<<bit;
//         std::cout<<"\n Bytes = "<<bytes;
//     }
//     c++;
// }

// int main(){
//     byte x,y;
//     return 0;
// }

