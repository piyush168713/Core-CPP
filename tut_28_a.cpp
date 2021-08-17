// -------- Complex example of friend function -----//
#include<iostream>
using namespace std;

class c2;   // Declaration to not to get error in friend function declaration

class c1{
    int val1;

    public:
    void setdata(int a){
    val1 = a;
    }
    void getdata(void){
        cout<<val1<<endl;
    }
    friend void exchange(c1 &, c2 &);   // friend function
};

class c2{
    int val2;

    public:
    void setdata(int a){
    val2 = a;
    }
    void getdata(void){
        cout<<val2<<endl;
    }
    friend void exchange(c1 &, c2 &);
};

/*
Mtd to swap a and b is :
    temp = a;
    a = b;
    b = temp;
*/

void exchange(c1 &x, c2 &y){
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}

int main(){
    c1 oc1;
    oc1.setdata(10);
    c2 oc2;
    oc2.setdata(20);

    exchange(oc1, oc2);

    cout<<"The value of c1 after exchanging becomes: ";
    oc1.getdata();
    
    cout<<"The value of c2 after exchanging becomes: ";
    oc2.getdata();

    return 0;
}
