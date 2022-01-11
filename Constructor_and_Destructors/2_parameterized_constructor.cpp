// Create constructor with arguments called parameterized constructor.

// it is necessary to to pass values to the constructor when an object is created.



// Program to create a constructor with arguments and pass the arguments to the constructor.

#include<iostream>

class num{
    private:
    int a,b,c;
    public:
    num(int m, int j, int k);
    void show(){
        std::cout<<"\na = "<<a<<"\nb = "<<b<<"\nc = "<<c;
    }
};

num :: num(int m, int j, int k){
    a = m;
    b = j;
    c = k;
}

int main(){
    num x = num(4,5,7);      // Explicit call
    num n(1,2,3);            // Implicit call
    x.show();
    n.show();
    return 0;
}