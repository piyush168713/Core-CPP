#include <iostream>
using namespace std;

class complex;        // Forward Declaration

// 2**
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(complex, complex);             // Declaration *001
    int sumCompComplex(complex, complex);             // Declaration *011      
};
//  **2 


// 1**
class complex
{
    int a, b;
    // Individually declaring functions as friend
    // friend int calculator ::sumRealComplex(complex o1, complex o2);   // Declaration of Friend function
    // friend int calculator ::sumCompComplex(complex o1, complex o2);   // Declaration of Friend function

    // Aliter: Declare the entire calculator class as friend 
    friend class calculator;

public:
    void SetNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {       
    cout << "Your number is " << a << " +" << b << "i" << endl;  
    }
};
//  **1


int calculator :: sumRealComplex(complex o1, complex o2)          
{                                                                 // Definition *001
    return (o1.a + o2.a);
}
int calculator :: sumCompComplex(complex o1, complex o2)          
{                                                                  // Definition *011                                                                
    return (o1.b + o2.b);
}


int main()
{
    complex o1, o2;
    o1.SetNumber(1,4);
    o1.printNumber();

    o2.SetNumber(5,7);
    o2.printNumber();

    calculator calc;
    int result = calc.sumRealComplex(o1,o2);
    cout<<"The sum of real part of o1 and o2 is "<<result<<endl;
    
    int resu = calc.sumCompComplex(o1,o2);
    cout<<"The sum of complex part of o1 and o2 is "<<resu<<endl;

    return 0;
}