//                         ABSTRACT CLASSES

// When a class is not used for creating objects, it is called abstract classes. Acts as base class.

// doesn't uses any classe's object to display data -> Abstract Class

//           QUALIFIER CLASSES AND INHERITANCE

// Program to create derived class from the qualifier class.

#include<bits/stdc++.h>

class A{
    public:
    int x;
    A(){

    }
    class B{
        public:
        int y;
        B(){

        }
    };
};

class C : public A, A::B{
    public:
    int z;
    void show(){
        std::cout<<"\nx = "<<x<<"\ny = "<<y<<"\nz = "<<z;
    }
    C(int j, int k, int l){
        x=j;
        y=k;
        z=l;
    }
};

int main(){
    C m(3,4,5);
    m.show();
    return 0;
}

