// Program to call virtual function through constructor.

#include<bits/stdc++.h>

class A1{
    int k;
    public:
    A1(int l){
        k=2;
    }
    virtual void show(){
        std::cout<<"\nk = "<<k;
    }
};

class A2 : public A1{
    int h;
    public:
    A2(int m, int n) : A1 (m){
        h=n;
        A1 *b;
        b = this;
        b->show();
    }
    void show(){
        std::cout<<"\nh = "<<h;
    }
};

int main(){
    A1 x(4);
    A2 y(5,2);
    return 0;
}