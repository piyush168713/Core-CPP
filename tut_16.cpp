#include<iostream>
using namespace std;

int sum(int a, int b){
    int c= a+b;
    return c;
}

// void swap(int a, int b){  // temp  a  b    //----> This will not work <----- //
//     int temp = a;         // 4     4  5
//     a = b;                // 4     5  5 
//     b = temp;             // 4     5  4
// }

// Call by Reference using Pointers
void swapPointer(int* a, int* b){  // temp  a  b    
    int temp = *a;         // 4     4  5
    *a = *b;                // 4     5  5 
    *b = temp;             // 4     5  4
}


int main(){
    int x=5, y=6;
    // cout<<"The sum of 4 and 5 is "<<sum(a, b);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

    // swap(x,y);     //----> This will not work <----- //
    swapPointer(&x, &y);

    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    
    return 0;
} 
