// Program to pass an object with reference to constructor. Declare and initialize other objects.

// #include<iostream>

// class num{
//     int n;
//     public:
//     num(){

//     }
//     num(int k){
//         n = k;
//     }
//     num(num &j){
//         n = j.n;
//     }
//     void show (void){
//         std::cout<<n;
//     }
// };

// main(){
//     num J(50);
//     num K(J);
//     num L = J;
//     num M;
//     M = J;

//     std::cout<<"\nObject J value of n: ";
//     J.show();
//     std::cout<<"\nObject K value of n: ";
//     K.show();
//     std::cout<<"\nObject L value of n: ";
//     L.show();
//     std::cout<<"\nObject M value of n: ";
//     M.show();
//     return 0;
// }








//              The const Objects


// Program to declare constant object. Also declare constant member function and display the contents of member variables.

#include<iostream>

class boy{
    int a;
    public:
    boy(int m){
        a = m;
    }
    void show() const{
        std::cout<<"a = "<<a;
    }
};

int main(){
    const boy x(5);
    x.show();
    return 0;
}