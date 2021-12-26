#include<iostream>
using namespace std;

class complex{
    int a, b;
    public:
    complex(int, int);   // Constructor Declaration

    void printNumber()
    {       
    cout << "Your number is " << a << " + " << b << "i" << endl;  
    }
};

complex :: complex(int x, int y){           // Contructor Definition    // It is a Parameterized constructor as it accepts two parameters.
    a = x;          
    b = y;
}


int main(){
    complex a(4,6);     // Implicit Call
    a.printNumber();

    complex b = complex(7,8);        // Explicit Call
    b.printNumber();
    
    return 0;
}
