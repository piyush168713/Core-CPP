// Program to display the address of the variable.

// #include<bits/stdc++.h>

// int main(){
//     int n;
//     std::cout<<"Enter a no.: ";
//     std::cin>>n;
//     std::cout<<"Value of n: "<<n;
//     // std::cout<<"\nAddress of n: "<<&n;
//     std::cout<<"\nAddress of n: "<<(unsigned)&n;
//     return 0;
// }




// Program to declare a pointer. Display the value and address of the variable using pointer.

// #include<bits/stdc++.h>

// int main(){
//     int *p;
//     int x=10;
//     p = &x;           // Address of x is assigned to pointer p

//     std::cout<<"\nx = "<<x<<"\n&x = "<<&x;
//     std::cout<<"\n*p = "<<*p<<"\n&p = "<<&p;
//     return 0;
// }





// Program to display memory address of a variable. Type cast the memory address from hexadecimal to unsigned integer.

// #include<bits/stdc++.h>

// int main(){
//     int a;
//     float b;
//     char c;
//     std::cout<<"Enter integer number: ";
//     std::cin>>a;
//     std::cout<<"Enter float number: ";
//     std::cin>>b;
//     std::cout<<"Enter character: ";
//     std::cin>>c;

//     std::cout<<"\nInt is: "<<a;
//     std::cout<<"\nFloat is: "<<b;
//     std::cout<<"\nChar is: "<<c;

//     std::cout<<"\nInt is stored at location: "<<(unsigned)&a;
//     std::cout<<"\nFloat is stored at location: "<<(unsigned)&b;
//     std::cout<<"\nChar is stored at location: "<<(unsigned)&c;
//     return 0;
// }





// Program to pointer incrementation and decrementation.

// #include<bits/stdc++.h>

// int main(){
//     int x = 10;
//     int *p;
//     p = &x;                      // Address of x is assigned to pointer p
//     std::cout<<"\nAddress of p: "<<unsigned(p);
//     p = p+4;
//     std::cout<<"\nAddress of p: "<<unsigned(p);
//     p = p-2;
//     std::cout<<"\nAddress of p: "<<unsigned(p);
//     return 0;
// }





// Program to changing the values of variables using pointers.

#include<bits/stdc++.h>

int main(){
    int x=10;
    int *p;
    p = &x;
    std::cout<<"\nValue of x: "<<*p;
    *p = *p + 10;
    std::cout<<"\nValue of x: "<<*p;
    *p = *p - 2;
    std::cout<<"\nValue of x: "<<*p;
    return 0;
}