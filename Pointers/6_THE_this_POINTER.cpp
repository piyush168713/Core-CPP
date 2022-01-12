//                              THE this POINTER

// Program to use `this` pointer and return pointer reference.

#include<bits/stdc++.h>

class number{
    int num;
    public:
    void input(){
        std::cout<<"Enter a number: ";
        std::cin>>num;
    }
    void show(){
        std::cout<<"\nThe Minimum Number: "<<num;
    }
    number min(number t){
        if (t.num<num)
        return t;
        else
        return *this;
    }
};

int main(){
    number n, n1, n2;
    n1.input();
    n2.input();
    n = n1.min(n2);
    n.show();
    return 0;
}