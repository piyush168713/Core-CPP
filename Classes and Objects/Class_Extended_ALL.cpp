#include<bits/stdc++.h>

class bill{
    int qty;
    float price;
    float amount;
    public:
    void getdata(int a, float b, float c){
        qty = a;
        price = b;
        amount = c;
    }
    void show(){
        std::cout<<"\nQuantity: "<<qty;
        std::cout<<"\nPrice: "<<price;
        std::cout<<"\nAmount: "<<amount;
    }
};

int main(){
    bill m;
    int x,y,z;
    std::cout<<"Enter value of x, y & z: ";
    std::cin>>x>>y>>z;
    m.getdata(x,y,z);
    m.show();
    return 0;
}
