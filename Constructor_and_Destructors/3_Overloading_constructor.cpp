// A class can contain more than one constructor called constructor overloading.

// Example

// class num{
//     private:
//     int a;
//     float b;
//     char c;
//     public:
       // Constructor declaration
//     num(int m, float j, char k);
//     num(int m, float j);
//     num();

//     // Object declaration
//     class num x (4, 4.5, 'A');
//     class num y (1, 2,2);
//     class num z;
// };




// Program with multiple constructors for the single class.

// #include<iostream>

// class num{
//     private:
//     int a;
//     float b;
//     char c;
//     public:
//     num(int m, float j, char k);          // Constructor declaration
//     num(int m, float j);
//     num();

//     void show(){
//         std::cout<<"\n\ta = "<<a<<" b = "<<b<<" c = "<<c;
//     }
// };

// num :: num(int m, float j, char k){
//     std::cout<<"\nConstructor with three arguments";
//     a = m;
//     b = j;
//     c = k;                               // Constructor definition
// }

// num :: num(int m, float j){
//     std::cout<<"\nConstructor with two arguments";
//     a = m;
//     b = j;
//     c = ' ';
// }

// num :: num(){
//     std::cout<<"\nConstructor without arguments";
//     a = b = c = NULL;
// }

// int main(){
//     num x(5,4.5, 'S');
//     x.show();
//     num y(10, 9.9);
//     y.show();
//     num z;
//     z.show();
//     return 0;
// }








// Program to overload constructor and display date and time.

#include<iostream>

class date_time{
    int d, m, y, hrs, min, sec;
    public:
    date_time(int i, int j, int k, int a, int b, int c);       // Constructor declaration
    date_time();
    void print(){
        std::cout<<"\nDate: "<<d<<" Month: "<<m<<" Year: "<<y;
        std::cout<<"\nHour: "<<hrs<<" Minutes: "<<min<<" Second: "<<sec;
    }
};
date_time :: date_time(int i, int j, int k, int a, int b, int c){          // Constructor definition
    d = i;
    m = j;
    y = k;
    hrs = a;
    min = b;
    sec = c;
}

date_time :: date_time(){                                       // Constructor definition
    std::cout<<"\nEnter Date Month Year(dd/mm/yyyy): ";
    std::cin>>d>>m>>y;
    std::cout<<"Enter Hours Minutes Seconds(HH/MM/SS): ";
    std::cin>>hrs>>min>>sec;
}

int main(){
    date_time n(25, 12, 2021, 2, 10, 30);
    n.print();
    date_time m;
    m.print();
    return 0;
}