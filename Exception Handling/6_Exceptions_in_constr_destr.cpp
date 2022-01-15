// A copy constructor is called in exception handling when an exception is thrown from the try block using the throw statement.



// Program to use exception handling with constructors and destructors.

#include<bits/stdc++.h>

class A1{
    float x;
    public:
    A1(float);
    A1(){ };
    ~A1(){
        std::cout<<"\nIn Destructor";
    }
    void operator ++ (int){         // postfix notation
        x++;
    }     
    void operator -- (){            // prefix notation
        --x;
    }
    void show(){
        std::cout<<"\nx = "<<X;
    }
};

A1::A1(float k){
    if(k==0)
    throw A1();
    else
    x=k;
}

int main(){
    try
    {
        A1 a(2.4);
        std::cout<<"\nBefore Increasing: ";
        a.show();
        std::cout<<"\nAfter Increasing: ";
        a++;
        a.show();
        std::cout<<"\nAfter Decreamentation: ";
        --a;
        a.show();
        A1 b(0);
    }
    catch(A1)
    {
        std::cout<<"\nInvalid number";
        exit(1);
    }
    
    return 0;
}