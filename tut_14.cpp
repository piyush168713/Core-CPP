#include<iostream>
using namespace std;

struct employee
{
    int eID;
    char favchar;
    float salary;
};

union money
{
    int rice;
    char car;
    float pounds;
};

int main(){
    // struct employee piyush;
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<"The value is "<<m1.car<<endl;
    // piyush.eID = 1;
    // piyush.favchar = 's';
    // piyush.salary = 12000000;

    // cout<<"The value is "<<piyush.eID<<endl;
    // cout<<"The value is "<<piyush.favchar<<endl;
    // cout<<"The value is "<<piyush.salary<<endl;

    enum meal{breakfast, lunch, dinner};
    meal m1 = dinner;
    cout<<m1<<endl;
    cout<<(m1==2);
    return 0; 
}