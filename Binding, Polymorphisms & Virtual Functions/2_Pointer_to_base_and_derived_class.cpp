// Program to access members of base and derived class using pointer objects of both classes.

#include<bits/stdc++.h>

class A1{
    protected:
    int a;
    public:
    A1 (int k){
        a=k;
    }
    void show(){
        std::cout<<"\nIn base class A1";
        std::cout<<"\na = "<<a;
    }
};

class A2 : public A1{
    protected:
    int b;
    public:
    A2(int j, int k) : A1(j){
        b=k;
    }
    void show(){
        std::cout<<"\nIn class A2";
        std::cout<<"\na = "<<a;
        std::cout<<"\nb = "<<b;
    }
};

class A3 : public A2{
    public:
    int c;
};  

int main(){
    A1 *x;
    x = new A1(10);           // pointer to class A1
    x->show();
    delete x;

    x = new A2(5,6);          // pointer to class A2
    x->show();
    ((A2*)x)->show();
    delete x;

    A2 y(3,4);
    A2 *d = &y;
    d->show();

    return 0;
}