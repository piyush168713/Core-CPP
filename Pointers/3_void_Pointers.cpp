// Program to declare a void pointer. Assign address of int, float and char variables to the void pointer using typecasting method.
// Display the contents of various variables.

#include<bits/stdc++.h>

    int p;
    float d;
    char c;
    void *pt = &p;              // pt points to p
     
int main(){
    *(int *) pt = 12;
    std::cout<<"\np = "<<p;

    pt = &d;                    // pt points to d
    *(float *) pt = 5.4;
    std::cout<<"\nd = "<<d;

    pt = &c;                    // pt points to c
    *(char *) pt = 'S';
    std::cout<<"\nc = "<<c;
    return 0;
}