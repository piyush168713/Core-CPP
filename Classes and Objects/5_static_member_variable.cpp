//  Program to declare STATIC data member. Display the value of static data member.

// #include<iostream>

//     class number{
//         static int c;        // static member variable

//         public:
//         void count(){     // count = member function
//             ++c;
//             std::cout<<"\nc = "<<c;
//         }
//     };
//     int number::c=4;    // Initialization of static memeber variable

//     int main(){
//     number a, b, c;
//     a.count();
//     b.count();
//     c.count();
//     return 0;
// }





// Program to show the difference b/w static and non-static member variables.


// #include<iostream>

// class number{
//     static int c;      // Static variable
//     int k;             // Non-static variable

//     public:
//     void zero(){
//         k = 5;
//     }
//     void count(){
//         ++c;
//         ++k;
//         std::cout<<"\nValue of c: "<<c<<"  Address of c: "<<(unsigned)&c;
//         std::cout<<"\nValue of k: "<<k<<"  Address of k: "<<(unsigned)&k;
//     }
// };
// int number::c = 5;     // Initialization of static member variable

// int main(){
//     number a,b,c;
//     a.zero();
//     b.zero();
//     c.zero();
//     a.count();
//     b.count();
//     c.count();
//     return 0;
// }




// Program to enter a number. Count the total number of digits from 0 to 9 occuring from 1 to entered number.


#include<iostream>

class digit{
    static int num[10];       // Static array member

    public:
    void check (int n);       
    void show();
    void input();         
    void ini();
};
int digit::num[] = {0,0,0,0,0,0,0,0,0,0};

void digit::show() {             // 4) show() displays the content of array num[].
    for (int j = 0; j < 10; j++)
    {
        if (num[j] == 0)
        continue;
        std::cout<<"\nNumber "<<j<<" occurs "<<num[j]<<" times";
    }
}

void digit::ini(){        // 5) ini() is declared and when called initializes all array elements with zero. 
    for (int k = 0; k < 10; k++)
    {
        num[k] = 0;
    }
}

void digit::input(){      // 1) Reads an integer through keyboard and entered number passes to check() function
    int x, y;
    std::cout<<std::endl<<"\nEnter a number: ";
    std::cin>>y;
    check(y);
}

void digit::check(int u){       // 2) check() is invoked by function input()......see below in check()
    int m;                      // 3) check() separates individual digits of the entered number using repetitive modular division and division operation. The separated digits are counted and count value is stored in the int num[10] a/c to element number.
    while (u!=0)
    {
        m = u%10;
        num[m]++;
        u = u/10;
    }
}

// 6) In case the array is not declared as static, the function is useful. Here, in this program the array is static,
//    hence we initialized it with the statement int digit::num[] = {0,0,0,0,0,0,0,0,0,0}. If the statement is removed, we need to call the function ini().    

int main(){
    digit d;
    d.input();
    d.show();
    // d.ini();
    return 0;
}