//                               Local Classes

// When classes are declared inside the function then such classes are knoen as local classes.
// The local classes have access permission to global variable as static variables.
// Global variable can be access by using scope access operator when the class itself contains member variable with name as global variable.
// Local classes should not have static data member and static member functions.  


// Program to define classes inside and outside main() function and access the elements.

// #include<iostream>

// class A{
//     private:
//     int a;
//     public:
//     void get(){
//         std::cout<<"Enter the value of a: ";
//         std::cin>>a;
//     }
//     void show(){
//         std::cout<<"a = "<<a<<std::endl;
//     }
// };

// int main(){
//     class B{
//         int b;
//         public:
//         void get(){
//             std::cout<<"Enter the value for b: ";
//             std::cin>>b;
//         }
//         void show(){
//             std::cout<<"b = "<<b<<std::endl;
//         }
//     };

//     A j;
//     B k;
//     j.get();
//     k.get();
//     j.show();
//     k.show();
//     return 0;
// }



// Program to declare global variables, read and display data using member function.

#include<iostream>
#include<conio.h>

int j, k, l, m;

class A{
    private:
    int a;
    int j;
    public:
    void get(){
        std::cout<<"Enter value for a, j, j and k: "<<std::endl;
        std::cin>>a>>j>>::j>>k;
    }
    void show(){
        std::cout<<"\na = "<<a<<"\nj = "<<j<<"\n::j = "<<::j<<"\nk = "<<k<<std::endl;
    }
};

int main(){
    class B{
        int b;
        int l;
        public:
        void get(){
        std::cout<<"Enter value for b, l, l and m: "<<std::endl;
        std::cin>>b>>l>>::l>>m;
        }
        void show(){
            std::cout<<"b = "<<b<<"\nl = "<<l<<"\n::l = "<<::l<<"\nm = "<<m;
        }
    };

    A x;
    B y;
    x.get();
    y.get();
    x.show();
    y.show();
    return 0;
}





