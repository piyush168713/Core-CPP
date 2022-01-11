// Declare constructors with default arguments
// example
// power(int 9, int 3);
// power p1 (3);



// Program to declare defaults arguments in a constructor. Obtain the power of the number.

#include<iostream>
#include<cmath>

class power{
    int num;
    int powert;
    int ans;
    public:
    power(int n = 9, int p = 3);        // declaration of constructor with default arguments
    void show(){
        std::cout<<"\n"<<num<<" raise to "<<powert<<" is "<<ans;
    }
};

power :: power(int n, int p){
    num = n;
    powert = p;
    ans = pow(n,p);
}

main(){
    power a, b(5);
    a.show();
    b.show();
    return 0;
}