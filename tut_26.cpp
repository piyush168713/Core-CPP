#include<iostream>
using namespace std;

class complex{
    int a, b;
    public:
    void SetNumber(int n1, int n2){
        a = n1;
        b = n2;
    }
    friend complex sumcomplex(complex o1, complex o2);       // Declaration to access private members   // non-member - sumcomplex function is allowed to do anyting with my private Parts (members)
    void printNumber(){
        cout<<"Your number is "<<a<<" +"<<b<<"i"<<endl;
    }

};

complex sumcomplex(complex o1, complex o2){     
    complex o3;
    o3.SetNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main(){
    complex c1, c2, sum;
    c1.SetNumber(2,3);
    c1.printNumber();
    
    c2.SetNumber(5,6);
    c2.printNumber();

    sum = sumcomplex(c1, c2);
    sum.printNumber();
    return 0;
}

/*       Properties of friend function
1. Not in the scope of class
2. Since it is not in the scope of class , it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object.
4. usually contains the objects as arguments.
5. Can be declared inside public and private section of the class.
6. It cannot access the members directly by their name and need object_name, member_name to access any member.
*/