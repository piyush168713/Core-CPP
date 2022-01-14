// Program to create array of pointers. Invoke functions using array objects.

#include<bits/stdc++.h>

class A1{
    public:
    virtual void show(){
        std::cout<<"A\n";
    }
};

class A2 : public A1{
    public:
    void show(){
        std::cout<<"B\n";
    }
};

class A3 : public A2{
    public:
    void show(){
        std::cout<<"C\n";
    }
};

class A4 : public A3{
    public:
    void show(){
        std::cout<<"D\n";
    }
};

class A5 : public A4{
    public:
    void show(){
        std::cout<<"E\n";
    }
};

int main(){
    A1 a;
    A2 b;
    A3 c;
    A4 d;
    A5 e;
    A1 *ptr[] = {&a, &b, &c, &d, &e};
    for(int i = 0; i < 5; i++)
    ptr[i]->show();
    return 0;
}