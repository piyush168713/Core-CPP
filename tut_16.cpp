#include<iostream>
using namespace std;

int sum(int a, int b){
    int c= a+b;
    return c;
}

// void swap(int a, int b){  // temp  a  b    //----> This will not work <----- //          //----> 1 <----
//     int temp = a;         // 4     4  5
//     a = b;                // 4     5  5 
//     b = temp;             // 4     5  4
// }

// ------Call by Reference using Pointers                                                   //----> 2 <----
// void swapPointer(int* a, int* b){  // temp  a  b    
//     int temp = *a;         // 4     4  5
//     *a = *b;                // 4     5  5 
//     *b = temp;             // 4     5  4
// }

// // ------Call by Reference using C++ reference variables                                //----> 3 <----
void swapReferenceVar(int &a, int &b){  // temp  a  b    
    int temp = a;         // 4     4  5
    a = b;                // 4     5  5 
    b = temp;             // 4     5  4
}

// ------Call by Reference using C++ reference variables                                //----> 4 <----
// int & swapReferenceVar(int &a, int &b){  // temp  a  b    
//     int temp = a;         // 4     4  5
//     a = b;                // 4     5  5 
//     b = temp;             // 4     5  4
//     return a;
// }

int main(){
    int x=5, y=6;
    // cout<<"The sum of 4 and 5 is "<<sum(a, b);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

    // swap(x,y);     //----> This will not work <----- //                          // ----> 1 <----
    // swapPointer(&x, &y);      //----> This will swap a and b using Pointer reference <----- //       // ----> 2 <----
    swapReferenceVar(x, y);      //----> This will swap a and b using reference variables <----- //     //  ----> 3 <----
    //swapReferenceVar(x, y) = 1687;      //----> This will swap a and b using reference variables <----- //     //  ----> 4 <----

    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    
    return 0;
} 