#include<iostream>
using namespace std;

inline int product(int a, int b){
    // not recommended to use below line of codes with inline function
    // static int c=0;    // This executes only once
    // c = c+1;      // next time this function is run, the value of c will be retained.
    return a*b;
}

float moneyReceived (int currentMoney, float factor = 1.04){
    return currentMoney * factor;
}

// int strlen(const char *p){

// }

int main(){
    int a, b;
    // cout<<"Enter the value of a and b "<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl; 

    int money = 10000;
    cout<<"If you have Rs "<<money<<" in your bank a/c, you will receive Rs "<<moneyReceived(money)<<" after 1 year"<<endl;
    cout<<"For VIP: If you have Rs "<<money<<" in your bank a/c, you will receive Rs "<<moneyReceived(money, 1.1)<<" after 1 year"<<endl;
    
    return 0;
}
