// Program to declare array of objects by using constructor.

#include<iostream>

class capital{
    public:
    char name[20], cpt[20];
    capital();         // declaration
};

capital :: capital(){     // definition
    std::cout<<"\nState and its Capital: ";
    std::cin>>name>>cpt;
}

int main(){
    capital c[2];
    return 0;
}