// When all the function need to access another class in such a situation we can declare an entire class as friend class.

// A friend classes are applicable when we want to make available private data of a class to another class.


// Program to declare friend classes and access the private data.

// #include<iostream>

// class bike;

// class car{
//     private:
//     int a;
//     public:
//     void aset() {a=30;}
//     void show(bike);
// };

// class bike{
//     private:
//     int b;
//     public:
//     void bset() {b=40;};
//     friend void car::show(bike bb);
// };

// void car ::show(bike b){
//     std::cout<<"\na = "<<a;
//     std::cout<<"\nb = "<<b.b;
// }

// int main(){
//     car m;
//     m.aset();
//     bike n;
//     n.bset();
//     m.show(n);
//     return 0;
// }



// Program to demonstrate friend classes.
#include<iostream>
#include<conio.h>

class dog;
class cat{
    private:
    int j;
    public:
    void set() {j=22;}
    friend dog;
};

class dog{              //  Member function of class dog can access the private data of class cat. 
    public:
    void joy(cat a){
        std::cout<<"j = "<<a.j;
    }
    void joya(cat b){
        std::cout<<"\nj = "<<b.j;
    }
};

int main(){
    cat x;
    dog y;
    x.set();
    y.joy(x);
    y.joya(x);
    return 0;
}




