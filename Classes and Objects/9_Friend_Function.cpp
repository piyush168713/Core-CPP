// 1) Program to access private data using non-memebr function. Use friend function.

// #include<iostream>

// class ac{
//     private:
//     char name[15];
//     int acno;
//     float bal;
//     public:
//     void read(){
//         std::cout<<"\nName: ";
//         std::cin>>name;
//         std::cout<<"\na/cno: ";
//         std::cin>>acno;
//         std::cout<<"\nBalance: ";
//         std::cin>>bal;
//     }
//     friend void showbal (ac);         // friend function declaration
// };
// void showbal (ac a){
//     std::cout<<"\nBalance of a/c no: "<<a.acno<<" is Rs "<<a.bal;
// }

// int main(){
//     ac k;
//     k.read();
//     showbal(k);    // Call to friend function and it doesn't uses object.
//     return 0;
// }




// 2) Program to declare friend function in two classes. Calculate the sum of integers of both the classes using friend sum() function.

// #include<iostream>

// class second;        // Declaration given because in line 47 "second is declared"

// class first{
//     int f;
//     public:
//     void getvalue(){
//         std::cout<<"Enter a number: ";
//         std::cin>>f;
//     }
//     friend void sum(first, second);
// };

// class second{
//     int s;
//     public:
//     void getvalue(){
//         std::cout<<"Enter a number: ";
//         std::cin>>s;
//     }
//     friend void sum(first, second);
// };

// void sum(first a, second b){
//     std::cout<<"The sum of two numbers is: "<<a.f + b.s;
// }

// int main(){
//     first m;
//     second n;
//     m.getvalue();
//     n.getvalue();
//     sum(m,n);
//     return 0;
// }




// 3) Program to exchange values between two classes. Use friend functions.

// #include<iostream>

// class second;        // Declaration of second class given because "second is declared" in line 91

// class first{
//     int j;
//     public:
//     void input(){
//         std::cout<<"Enter value of j: ";
//         std::cin>>j;
//     }
//     void show(void){
//         std::cout<<"Value of j: "<<j;
//     }
//     friend void change(first &, second &);
// };

// class second{
//     int k;
//     public:
//     void input(){
//         std::cout<<"Enter value of k: ";
//         std::cin>>k;
//     }
//     void show(void){
//         std::cout<<"\nValue of k: "<<k;
//     }
//     friend void change(first &, second &);
// };

// void change(first &x, second &y){
//     int temp = x.j;
//     x.j = y.k;
//     y.k = temp;
// }

// int main(){
//     first a;
//     second b;
//     a.input();
//     b.input();
//     change(a,b);
//     std::cout<<"\nValues after change are: "<<std::endl;
//     a.show();
//     b.show();
//     return 0;
// }




// 4) Program to declare three classes. Declare integer array as data member in each class. Perform addition of two data member array into 
// array of third class. Use friend function.


/////////         ***************      An error occured in below code         **************             //////////



#include<iostream>
#include<cmath>

class B;
class C;
class A{
    int a[5];
    public:
    void input();
    friend C sum(A, B, C);
};

void A :: input(){
    int k;
    std::cout<<"\nEnter five integers: ";
    for (int k = 0; k < 5; k++)
    {
        std::cin>>a[k];
    }
}

class B{
    int b[5];
    public:
    void input();
    friend C sum(A, B, C);
};

void B :: input(){
    int k;
    std::cout<<"Enter five integers: ";
    for (int k = 0; k < 5; k++)
    {
        std::cin>>b[k];
    }   
}

class C{
    int c[5];
    public:
    void show();
    friend C sum(A, B, C);
};

void C :: show(){
    std::cout<<"\n\tAddtion: ";
    for (int k = 0; k < 5; k++)
    {
        std::cout<<" "<<c[k];
    }   
}

C sum(A a1, B b1, C c1){
    for (int k = 0; k < 5; k++)
    {
        c1.c[k] = a1.a[k] + b1.b[k];
        return c1;
    }
}

int main(){
    A a;
    B b;
    C c;
    a.input();
    b.input();
    c = sum(a,b,c);
    c.show();
    // return 0;
}