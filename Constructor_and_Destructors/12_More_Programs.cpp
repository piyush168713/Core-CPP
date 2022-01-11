// Program to pass argument to constructor. Define conditional consructor.

// #include<iostream>
// #include<cmath>
// #include<bits/stdc++.h>

// class num{
//     public:
//     num(int, char);
//     ~num(){
//         std::cout<<"\nDestructor invoked";
//     }
// };

// num::num(int s, char b){
//     switch (b)
//     {
//     case 'R':
//         std::cout<<"\nSquare Root of "<<s<<" is "<<sqrt(s);
//         break;
//     case 'S':
//         std::cout<<"\nSquare of "<<s<<" is "<<pow(s,2);
//         break;
//     case 'C':
//         std::cout<<"\nCube of "<<s<<" is "<<pow(s,3);
//         break;
    
//     default:
//         std::cout<<"\nInvalid choice";
//         break;
//     }
// }

// int main(){
//     int u;
//     char o;
//     std::cout<<"Enter a number: ";
//     std::cin>>u;
//     std::cout<<"Enter operation (S)quare, (C)ube, Square (R)oot: ";
//     std::cin>>o;
//     num x(u,o);
//     return 0;
// } 





// Program to copy constructor. Change the values of an object by calling the constructor.


// #include<bits/stdc++.h>

// class data{
//     int u;
//     char c;
//     float f;
//     public:
//     ~data(){ }
//     data(){
//         u = c = f = NULL;
//     }
//     data(int a, char b, float h){
//         u = a;
//         c = b;
//         f = h;
//     }
//     data(data &k){
//         u = k.u;
//         c = k.c;
//         f = k.f;
//     }
//     void show(){
//         std::cout<<"\nu = "<<u<<" c = "<<char(c)<<" f = "<<f;
//     }
// };  

// int main(){
//     data k(16, 91, 1.6);
//     k.show();

//     data l(k);
//     l.show();
    
//     data z;
//     z.show();
    
//     z = data(1, 71, 8.7);
//     z.show();
    
//     return 0;
// }




// Program to call the constructor without using object.


// #include<bits/stdc++.h>

// class A{
//     public:
//     char c;
//     int i;
//     float f;
//     A(){
//         std::cout<<"\nEnter char, int and float value: ";
//         std::cin>>c>>i>>f;
//         out(c,i,f);
//     }
//     void out(char l, int k, float f){
//         std::cout<<"\nChar Value: "<<c;
//         std::cout<<"\nint value: "<<i;
//         std::cout<<"\nfloat value: "<<f;
//     }
// };

// int main(){
//     A() = A() = A();       // Calling costructor without object
//     return 0;
// }







// Program to demonstrate the use of copy constructor.

// Errors

// #include<bits/stdc++.h>

// class data{
//     private:
//     int x;
//     float y;
//     public:
//     data(){ }
//     data(int xx, int yy){
//         x = xx;
//         y = yy;
//     }
//     data operator = (data &d){
//         std::cout<<"Assignment operator executed";
//         x = d.x;
//         y = d.y;
//         return data (x,y);
//     }

//     data(data & d){
//         std::cout<<"copy operator executed";
//         x = d.x;
//         y = d.y;
//     }
//     void show(){
//         std::cout<<"X = "<<x<<"Y = "<<y;
//     }
// };

// int main(void){
//     data d1(12, 5.5);
//     data d2, d4;
//     d4 = d2 = d1;
//     data d3 = d1;
    
//     std::cout<<"\nObject d1: ";
//     d1.show();
//     std::cout<<"\nObject d2: ";
//     d2.show();
//     std::cout<<"\nObject d3: ";
//     d3.show();
//     std::cout<<"\nObject d4: ";
//     d4.show();
// }






// Program to invoke constructors of nested classes.

// #include<bits/stdc++.h>

// class A{
//     public:
//     int x;
//     A(){
//         x = 5;
//         std::cout<<"\nIn constructor A x = "<<x;
//     }
//     class B{
//         public:
//         int y;
//         B(){
//             y = 10;
//             std::cout<<"\nIn constructor B y = "<<y;
//         }
//         class C{
//             public:
//             int z;
//             C(){
//                 z = 30;
//                 std::cout<<"\nIn constructor C z = "<<z;
//             }
//         };
//     };
// };

// int main(){
//     A();
//     A::B();
//     A::B::C();

//     A a;         // Outer class object
//     A::B b;         //Middle class object
//     A::B::C c;         // inner class object
//     return 0;
// }