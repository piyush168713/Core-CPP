// Pointer to pointer ia a pointer that stores the address of another pointer.



// Program to demonstrate the concept of pointer to pointer.

#include<bits/stdc++.h>

int main(){
    int x=10;
    int *p;
    int **q;

    p = &x;
    q = &p;

    std::cout<<"Value of x: "<<x;
    std::cout<<"\nValue of x: "<<*p;
    std::cout<<"\nValue of x: "<<**q;
    std::cout<<"\nAddress of x: "<<&x;
    std::cout<<"\nAddress of x: "<<p;
    std::cout<<"\nAddress of x: "<<*q;
    std::cout<<"\nAddress of p: "<<&p;
    std::cout<<"\nAddress of p: "<<q;
    std::cout<<"\nAddress of q: "<<&q;

    return 0;
}