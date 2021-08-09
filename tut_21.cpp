#include<iostream>
using namespace std;

// /********// /********Function Overloading with Examples in C++ **********/ **********/

class employee
{
    private:
    int a, b, c;

    public:
    int d, e;
    void setData(int a, int b, int c);  // Declaration mtlb apko aage mil jayega
    void getData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};

void employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    employee piyush;
    // piyush.a = 10;   ----> This will throw error as a is private.
    piyush.d = 16;
    piyush.e = 87;
    piyush.setData(1,2,3);
    piyush.getData();
    return 0;
}