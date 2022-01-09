//                         Overloading member function

// Program to overload a member function of a class.

// #include<iostream>
// #include<cmath>
// #include<conio.h>
// #include<stdlib.h>
// #include<math.h>

// class absv{
//     public:
//     int num(int);
//     double num(double);
// };

// int absv :: num(int x){
//     int ans;
//     ans = abs(x);
//     return (ans);
// }

// double absv ::num(double d){
//     double ans;
//     ans = fabs(d);
//     return (ans);
// }

// int main(){
//     absv n;
//     std::cout<<"Absolute value of -25 is "<<n.num(-25);
//     std::cout<<"\nAbsolute value of -25.1474 is "<<n.num(-25.1474);
//     return 0;
// }



// Program to declare main() as a member function and overload it.

// #include<iostream>
// #include<conio.h>

// class A{
//     public:
//     void main(int i){
//         std::cout<<"In main (int): "<<i;
//     }    
//     void main(double f){
//         std::cout<<"\nIn main (double): "<<f;
//     }
//     void main(char *s){
//         std::cout<<"\nIn main (char): "<<s;
//     }
// };

// int main(){
//     A a;
//     a.main(5);
//     a.main(5.2);
//     a.main("C++");
//     return 0;
// }




// Program to call function main() using indirect recursion.

// Indirect recursion using OOP//

// #include<iostream>

// int main(int);

// class rec{
//     int j;
//     public:
//     int f;
//     rec(int k, int i){
//         std::cout<<" [ ";
//         f=i;
//         j=k;
//     }
//     ~rec(){
//         std::cout<<"\b\b] Factorial of number: "<<f;
//     }
//     void pass(){
//         std::cout<<main(j--)<<" * ";
//     }
// };
// rec a(5,1);

// main(int x){
//     if(x==0)
//     return 0;
//     a.pass();
//     a.f = a.f*x;
//     return x;
// }




