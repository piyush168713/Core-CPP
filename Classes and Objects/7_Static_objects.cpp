//  Program to declare static object. Display its contents.

#include<iostream>

class bita{
    private:
    int c;
    int k;
    public:
    void plus(){
        c += 2;
        k += 2;
    }
    void show(){
        std::cout<<"\nc: "<<c;
        std::cout<<"\nk: "<<k;
        std::cout<<"\nSum of c and k is: "<<c+k;
    }
};

int main(){
    static bita b;    // declared static object
    b.plus();
    b.show();
    return 0;
}