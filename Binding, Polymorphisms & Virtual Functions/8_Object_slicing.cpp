//                                     OBJECT SLICING

// Program to declare reference to object and invoke functions.

// #include<bits/stdc++.h>

// class A1{
//     int j;
//     public:
//     A1 (int jj){
//         j=jj;
//     }
//     virtual void joy(){
//         std::cout<<"\nIn class A1";
//         std::cout<<"\nj = "<<j;
//     }
// };

// class A2 : public A1{
//     int k;
//     public:
//     A2(int jj, int kk) : A1(jj){
//         k=kk;
//     }
//     void joy(){
//         A1 :: joy();
//         std::cout<<"\nIn class A2";
//         std::cout<<"\nk = "<<k;
//     }
// };

// int main(){
//     A1 a(3);
//     A2 b(4,5);
//     A1 &r = b;
//     std::cout<<"\nUsing Object";
//     b.joy();
//     std::cout<<"\n\nUsing reference";
//     r.joy();
//     return 0;
// }







// Program to demonstrate object slicing.

#include<bits/stdc++.h>

class A1{
    public:
    int a;
    A1(){
        a=10;
    }
};

class A2 : public A1{
    public:
    int b;
    A2(){
        a=40;
        b=30;
    }
};  

int main(){
    A1 x;
    A2 y;
    std::cout<<"a = "<<x.a;
    x=y;
    std::cout<<" Now a = "<<x.a;
    return 0;
}