#include<iostream>
using namespace std;

class complex{
    int a, b;
    public:
    // Creating a Constructor
    // COnstructor is a special member function with the same name as of the class.
    // It is automatically invoked whenever an object is created.
    // It is used to initialize the objects of its class.
    complex(void);   // Constructor Declaration

    void printNumber()
    {       
    cout << "Your number is " << a << " + " << b << "i" << endl;  
    }
};

complex :: complex(void){           // Contructor Definition    // It is a Default constructor as it takes no parameters.
    a = 10;          
    b = 0;
    // cout<<"Heyy Piyush"<<endl;
}

int main(){
    complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}


// Properties of Constructors

// 1. It should be declared in the public section of the class.
// 2. They are automatically invoked whenever the object is created.
// 3. They canot return values and do not have return types.
// 4. it can have default arguments.
// 5. We cannot refer to their address.