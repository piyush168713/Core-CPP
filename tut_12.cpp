#include<iostream>
using namespace std;

int main(){

//    Pointer =---------> data type which holdsthe address of other data types

    int a=3;
    int* b;
    b = &a;

// & (Address of) operator
    cout<<"address of a: "<<b<<endl;
    cout<<"address of a: "<<&a<<endl;
    cout<<"address of b: "<<&b<<endl<<endl;

//* (Value at) Dereference operator
    cout<<"value at address b: "<<*b<<endl<<endl;

//-----pointer to pointer   
    int** c = &b;
    cout<<"address of b: "<<c<<endl;
    cout<<"value at address c: "<<*c<<endl;
    cout<<"value at address value_at(value_at c): "<<**c<<endl<<endl;


    // cout<<"the value of **c (* &b): "<<**c<<endl;
    // cout<<"*c (=&b) address of b: "<<*c<<endl;

    return 0;
}