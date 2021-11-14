#include<iostream>
#include<cmath>

int main(){
    float a, b, c, d, x1, x2;
    std::cout<<"Enter a: ";
    std::cin>>a;
    std::cout<<"Enter b: ";
    std::cin>>b;
    std::cout<<"Enter c: ";
    std::cin>>c;

    d = pow(b,2) - (4*a*c);
    x1 = (-b + sqrt(d)) / 2*a;
    x2 = (-b - sqrt(d)) / 2*a;

    if (d<0){    
        std::cout<<"Error, roots are complex and imaginary"<<"\n";
        std::cout<<"Imaginary value is: "<<d<<"\n";
    }
    else if(d>=0){
    std::cout<<"Roots are identical and the value of d is "<<d<<std::endl;
    }

    std::cout<<"Value of x are: "<<x1<<","<<x2<<std::endl;

    return 0;
}