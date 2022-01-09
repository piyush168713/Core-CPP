
// 1) Program to declare objects and display their contents.

// #include<iostream>

// class month{
//     public:
//     char *name;
//     int days;
// };

// int main(){
//     month m1, m3;
//     m1.name = "January";
//     m1.days = 31;
//     m3.name = "March";
//     m3.days = 31;
//     std::cout<<"\nObject m1: ";
//     std::cout<<"\nMonth name: "<<m1.name<<"  Address: "<<(unsigned)&m1.name;
//     std::cout<<"\nDays: "<<m1.days<<"  Address: "<<(unsigned)&m1.days;
//     std::cout<<"\nObject m3: ";
//     std::cout<<"\nMonth name: "<<m3.name<<"  Address: "<<(unsigned)&m3.name;
//     std::cout<<"\nDays: "<<m3.days<<"  Address: "<<(unsigned)&m3.days;
    
//     return 0;
// }




// 2) Program to display the size of the objects.


#include<iostream>

class size{
    long i;           // By default Private
    float f;
    char c;
};

int main(){
    size s1, s2;
    std::cout<<"Size of s1: "<<sizeof(s1);
    std::cout<<"\nSize of s2: "<<sizeof(s2);
    std::cout<<"\nSize of class: "<<sizeof(size);
    return 0;
}